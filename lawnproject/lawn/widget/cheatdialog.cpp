#include "lawn/widget/cheatdialog.hpp"
#include "lawnapp.hpp"
#include "lawn/lawncommon.hpp"
#include "lawn/widget/challengescreen.hpp"
#include "resources.hpp"
#include "gameconstants.hpp"
#include "lawn/system/playerinfo.hpp"
#include <Poplib/widget/widgetmanager.hpp>

CheatDialog::CheatDialog(LawnApp* theApp) : LawnDialog(theApp, Dialogs::DIALOG_CHEAT, true, "CHEAT", "Enter New Level:", "", Dialog::BUTTONS_OK_CANCEL)
{
	mApp = theApp;
	mVerticalCenterText = false;
	mLevelEditWidget = CreateEditWidget(0, this, this);
	mLevelEditWidget->mMaxChars = 12;
	mLevelEditWidget->AddWidthCheckFont(FONT_BRIANNETOD12, 220);

	PopString aCheatStr;
	if (mApp->mGameMode != GameMode::GAMEMODE_ADVENTURE)
	{
		aCheatStr = StrFormat("C%d", (int)mApp->mGameMode);
	}
	else if (mApp->HasFinishedAdventure())
	{
		aCheatStr = StrFormat("F%s", mApp->GetStageString(mApp->mPlayerInfo->GetLevel()).c_str());
	}
	else
	{
		aCheatStr = mApp->GetStageString(mApp->mPlayerInfo->GetLevel());
	}
	mLevelEditWidget->SetText(aCheatStr, true);

	CalcSize(110, 40);
}

CheatDialog::~CheatDialog()
{
	delete mLevelEditWidget;
}

int CheatDialog::GetPreferredHeight(int theWidth)
{
	return LawnDialog::GetPreferredHeight(theWidth);
}

void CheatDialog::Resize(int theX, int theY, int theWidth, int theHeight)
{
	LawnDialog::Resize(theX, theY, theWidth, theHeight);
	mLevelEditWidget->Resize(mContentInsets.mLeft + 12, mHeight - 155, mWidth - mContentInsets.mLeft - mContentInsets.mRight - 24, 28);
}

void CheatDialog::AddedToManager(WidgetManager* theWidgetManager)
{
	LawnDialog::AddedToManager(theWidgetManager);
	AddWidget(mLevelEditWidget);
	theWidgetManager->SetFocus(mLevelEditWidget);
}

void CheatDialog::RemovedFromManager(WidgetManager* theWidgetManager)
{
	LawnDialog::RemovedFromManager(theWidgetManager);
	RemoveWidget(mLevelEditWidget);
}

void CheatDialog::Draw(Graphics* g)
{
	LawnDialog::Draw(g);
	DrawEditBox(g, mLevelEditWidget);
}

void CheatDialog::EditWidgetText(int theId, const PopString& theString)
{
	mApp->ButtonDepress(mId + 2000);
}

bool CheatDialog::AllowChar(int theId, PopChar theChar)
{
	return isdigit(theChar) || theChar == '-' || theChar == 'c' || theChar == 'C' || theChar == 'f' || theChar == 'F';
}

bool CheatDialog::ApplyCheat()
{
	int aChallengeIndex;
	if (sscanf(mLevelEditWidget->mString.c_str(), "c%d", &aChallengeIndex) == 1 || 
		sscanf(mLevelEditWidget->mString.c_str(), "C%d", &aChallengeIndex) == 1)
	{
		mApp->mGameMode = (GameMode)ClampInt(aChallengeIndex, 0, NUM_CHALLENGE_MODES);
		return true;
	}

	int aLevel = -1;
	int aFinishedAdventure = 0;
	int aArea, aSubArea;
	if (sscanf(mLevelEditWidget->mString.c_str(), "f%d-%d", &aArea, &aSubArea) == 2 ||
		sscanf(mLevelEditWidget->mString.c_str(), "F%d-%d", &aArea, &aSubArea) == 2)
	{
		aLevel = (aArea - 1) * LEVELS_PER_AREA + aSubArea;
		aFinishedAdventure = 1;
	}
	else if (sscanf(mLevelEditWidget->mString.c_str(), "f%d", &aLevel) == 1 || sscanf(mLevelEditWidget->mString.c_str(), "F%d", &aLevel) == 1)
	{
		aFinishedAdventure = 1;
	}
	else if (sscanf(mLevelEditWidget->mString.c_str(), "%d-%d", &aArea, &aSubArea) == 2)
	{
		aLevel = (aArea - 1) * LEVELS_PER_AREA + aSubArea;
	}
	else
	{
		sscanf(mLevelEditWidget->mString.c_str(), "%d", &aLevel);
	}

	if (aLevel <= 0)
	{
		mApp->DoDialog(
			Dialogs::DIALOG_CHEATERROR, 
			true, 
			"Enter Level", 
			"Invalid Level. Do 'number' or 'area-subarea' or 'Cnumber' or 'Farea-subarea'.", 
			"OK", 
			Dialog::BUTTONS_FOOTER
		);
		return false;
	}

	mApp->mGameMode = GameMode::GAMEMODE_ADVENTURE;
	mApp->mPlayerInfo->SetLevel(aLevel);
	mApp->mPlayerInfo->mFinishedAdventure = aFinishedAdventure;
	mApp->WriteCurrentUserConfig();
	return true;
}
