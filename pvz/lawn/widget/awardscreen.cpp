#include "lawn/plant.hpp"
#include "lawn/board.hpp"
#include "lawn/widget/gamebutton.hpp"
#include "lawn/widget/storescreen.hpp"
#include "lawn/widget/awardscreen.hpp"
#include "lawn/zengarden.hpp"
#include "lawn/seedpacket.hpp"
#include "lawnapp.hpp"
#include "lawn/widget/almanacdialog.hpp"
#include "lawn/system/music.hpp"
#include "resources.hpp"
#include "gameconstants.hpp"
#include "lawn/system/playerinfo.hpp"
#include <todlib/todfoley.hpp>
#include <todlib/todcommon.hpp>
#include <todlib/todstringfile.hpp>

//0x405780
AwardScreen::AwardScreen(LawnApp* theApp, AwardType theAwardType)
{
    mApp = theApp;
    mClip = false;
    mFadeInCounter = 180;
    mAwardType = theAwardType;
    TodLoadResources("DelayLoad_AwardScreen");

    int aLevel = mApp->mPlayerInfo->GetLevel();
    if (mAwardType == AWARD_CREDITS_ZOMBIENOTE)
    {
        TodLoadResources("DelayLoad_Background6");
        TodLoadResources("DelayLoad_ZombieNote");
        TodLoadResources("DelayLoad_Credits");
    }
    else if (mAwardType == AWARD_HELP_ZOMBIENOTE)
    {
        TodLoadResources("DelayLoad_Background1");
        TodLoadResources("DelayLoad_ZombieNote");
        TodLoadResources("DelayLoad_ZombieNoteHelp");
    }
    else if (mApp->IsAdventureMode())
    {
        if (aLevel == 10)
        {
            TodLoadResources("DelayLoad_Background1");
            TodLoadResources("DelayLoad_ZombieNote");
            TodLoadResources("DelayLoad_ZombieNote1");
        }
        else if (aLevel == 20)
        {
            TodLoadResources("DelayLoad_Background2");
            TodLoadResources("DelayLoad_ZombieNote");
            TodLoadResources("DelayLoad_ZombieNote2");
        }
        else if (aLevel == 30)
        {
            TodLoadResources("DelayLoad_Background1");
            TodLoadResources("DelayLoad_ZombieNote");
            TodLoadResources("DelayLoad_ZombieNote3");
        }
        else if (aLevel == 40)
        {
            TodLoadResources("DelayLoad_Background2");
            TodLoadResources("DelayLoad_ZombieNote");
            TodLoadResources("DelayLoad_ZombieNote4");
        }
        else if (aLevel == 50)
        {
            TodLoadResources("DelayLoad_Background1");
            TodLoadResources("DelayLoad_ZombieNote");
            TodLoadResources("DelayLoad_ZombieFinalNote");
        }
    }

    mStartButton = new GameButton(AwardScreen::AwardScreen_Start);
    mStartButton->mButtonImage = PopLib::IMAGE_SEEDCHOOSER_BUTTON;
    mStartButton->mOverImage = nullptr;
    mStartButton->mDownImage = nullptr;
    mStartButton->mDisabledImage = PopLib::IMAGE_SEEDCHOOSER_BUTTON_DISABLED;
    mStartButton->mOverOverlayImage = PopLib::IMAGE_SEEDCHOOSER_BUTTON_GLOW;
    mStartButton->SetFont(PopLib::FONT_DWARVENTODCRAFT15);
    mStartButton->mColors[ButtonWidget::COLOR_LABEL] = Color(213, 159, 43);
    mStartButton->mColors[ButtonWidget::COLOR_LABEL_HILITE] = Color(213, 159, 43);
    mStartButton->Resize(324, 500, 156, 42);
    mStartButton->mTextOffsetY = -1;

    mMenuButton = new GameButton(AwardScreen::AwardScreen_Menu);
    mMenuButton->SetLabel("[AWARD_MAIN_MENU_BUTTON]");
    mMenuButton->mButtonImage = PopLib::IMAGE_SEEDCHOOSER_BUTTON2;
    mMenuButton->mOverImage = PopLib::IMAGE_SEEDCHOOSER_BUTTON2_GLOW;
    mMenuButton->mDownImage = nullptr;
    mMenuButton->SetFont(PopLib::FONT_BRIANNETOD12);
    mMenuButton->mColors[ButtonWidget::COLOR_LABEL] = Color(42, 42, 90);
    mMenuButton->mColors[ButtonWidget::COLOR_LABEL_HILITE] = Color(42, 42, 90);
    mMenuButton->mParentWidget = this;
    mMenuButton->Resize(677, 16, 111, 26);
    mMenuButton->mTextOffsetY = 1;
    if (!mApp->HasFinishedAdventure() && aLevel <= 3)
    {
        mMenuButton->mBtnNoDraw = true;
        mMenuButton->mDisabled = true;
    }

    if (mAwardType == AWARD_CREDITS_ZOMBIENOTE)
    {
        mStartButton->SetLabel("[ROLL_CREDITS]");
        mStartButton->mButtonImage = PopLib::IMAGE_CREDITS_PLAYBUTTON;
        mStartButton->mOverImage = nullptr;
        mStartButton->mDownImage = nullptr;
        mStartButton->mDisabledImage = nullptr;
        mStartButton->mOverOverlayImage = nullptr;
        mStartButton->SetFont(PopLib::FONT_HOUSEOFTERROR20);
        mStartButton->mColors[ButtonWidget::COLOR_LABEL] = Color(255, 255, 255);
        mStartButton->mColors[ButtonWidget::COLOR_LABEL_HILITE] = Color(213, 159, 43);
        mStartButton->Resize(325, 505, 190, 73);
        mStartButton->mTextOffsetX = 33;
        mStartButton->mTextOffsetY = -2;
        mStartButton->mButtonOffsetX = -2;
        mStartButton->mButtonOffsetY = 8;
        mStartButton->mParentWidget = this;
    }
    else if (mAwardType == AWARD_HELP_ZOMBIENOTE)
    {
        mStartButton->SetLabel("[MAIN_MENU_BUTTON]");
        mMenuButton->mBtnNoDraw = true;
        mMenuButton->mDisabled = true;
    }
    else if (!mApp->IsAdventureMode())
    {
        mStartButton->SetLabel("[MAIN_MENU_BUTTON]");
        mMenuButton->mBtnNoDraw = true;
        mMenuButton->mDisabled = true;
    }
    else if (aLevel == 1)
    {
        mStartButton->SetLabel("[CONTINUE_BUTTON]");
        mMenuButton->mBtnNoDraw = true;
        mMenuButton->mDisabled = true;
    }
    else if (aLevel == 15)
        mStartButton->SetLabel("[VIEW_ALMANAC_BUTTON]");
    else if (aLevel == 25 || aLevel == 35 || aLevel == 45)
        mStartButton->SetLabel("[CONTINUE_BUTTON]");
    else
        mStartButton->SetLabel("[NEXT_LEVEL_BUTTON]");

    if (mApp->IsFirstTimeAdventureMode() && aLevel == 25 && mApp->IsTrialStageLocked() && !mApp->mPlayerInfo->mHasSeenUpsell)
    {
        mMenuButton->mBtnNoDraw = true;
        mMenuButton->mDisabled = true;
    }

    if (IsPaperNote())
    {
        mApp->mMusic->StopAllMusic();
        mStartButton->mY += 20;
        mApp->PlayFoley(FOLEY_PAPER);
    }
    else
        mApp->mMusic->MakeSureMusicIsPlaying(MUSIC_TUNE_ZEN_GARDEN);
}

//0x406420 & 0x406440
AwardScreen::~AwardScreen()
{
    if (mStartButton) delete mStartButton;
    if (mMenuButton) delete mMenuButton;
}

bool AwardScreen::IsPaperNote()
{
    if (mAwardType == AWARD_CREDITS_ZOMBIENOTE || mAwardType == AWARD_HELP_ZOMBIENOTE)
        return true;

    int aLevel = mApp->mPlayerInfo->GetLevel();
    return mApp->IsAdventureMode() && (aLevel == 10 || aLevel == 20 || aLevel == 30 || aLevel == 40 || aLevel == 50);
}

//0x4064D0
void AwardScreen::DrawBottom(Graphics* g, const PopString& theTitle, const PopString& theAward, const PopString& theMessage)
{
    g->DrawImage(PopLib::IMAGE_AWARDSCREEN_BACK, 0, 0);
    TodDrawString(g, theTitle, BOARD_WIDTH / 2, 58, PopLib::FONT_DWARVENTODCRAFT24, Color(213, 159, 43), DS_ALIGN_CENTER);
    TodDrawString(g, theAward, BOARD_WIDTH / 2, 326, PopLib::FONT_DWARVENTODCRAFT18YELLOW, Color::White, DS_ALIGN_CENTER);
    TodDrawStringWrapped(g, theMessage, Rect(285, 360, 230, 90), PopLib::FONT_BRIANNETOD16, Color(40, 50, 90), DS_ALIGN_CENTER_VERTICAL_MIDDLE);
}

//0x4066A0
void AwardScreen::DrawAwardSeed(Graphics* g)
{
    SeedType aSeedType = mApp->GetAwardSeedForLevel(mApp->mPlayerInfo->GetLevel() - 1);
    PopString aAward = Plant::GetNameString(aSeedType, SEED_NONE);
    PopString aMessage;
    if (mApp->IsTrialStageLocked() && aSeedType >= SEED_SQUASH && aSeedType != SEED_TANGLEKELP)
        aMessage = "[AVAILABLE_IN_FULL_VERSION]";
    else
        aMessage = Plant::GetToolTip(aSeedType);
    DrawBottom(g, "[NEW_PLANT]", aAward, aMessage);

    g->SetScale(2, 2, 350, 129);
    DrawSeedPacket(g, 350, 129, aSeedType, SEED_NONE, 0, 255, true, false);
    g->SetScale(1, 1, 0, 0);
}

//0x4068D0
void AwardScreen::Draw(Graphics* g)
{
    g->SetLinearBlend(true);
    
    int aLevel = mApp->mPlayerInfo->GetLevel();
    if (mAwardType == AWARD_CREDITS_ZOMBIENOTE)
    {
        g->SetColor(Color(125, 200, 255, 255));
        g->SetColorizeImages(true);
        g->DrawImage(PopLib::IMAGE_BACKGROUND6BOSS, -900, -400, 2800, 1200);
        g->SetColorizeImages(false);
        g->SetColor(Color(0, 0, 0, 64));
        g->FillRect(0, 525, BOARD_WIDTH, BOARD_HEIGHT);
        g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE, 75, 60);
        g->DrawImage(PopLib::IMAGE_CREDITS_ZOMBIENOTE, 149, 103, 475, 325);
    }
    else if (mAwardType == AWARD_HELP_ZOMBIENOTE)
    {
        g->DrawImage(PopLib::IMAGE_BACKGROUND1, -700, -300, 2800, 1200);
        g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE, 80, 80);
        g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE_HELP, 131, 132);
    }
    else
    {
        if (!mApp->IsAdventureMode())
        {
            if (mApp->EarnedGoldTrophy())
            {
                DrawBottom(g, "[BEAT_GAME_MESSAGE1]", "[GOLD_SUNFLOWER_TROPHY]", "[BEAT_GAME_MESSAGE2]");
                TodDrawImageCelCenterScaledF(g, PopLib::IMAGE_SUNFLOWER_TROPHY, 330, 80, 1, 0.7f, 0.7f);
            }
            else
            {
                const char* aMsgChar;
                if (mApp->IsSurvivalMode())
                {
                    int aNumTrophies = mApp->GetNumTrophies(CHALLENGE_PAGE_SURVIVAL);
                    aMsgChar =
                        aNumTrophies <= 7 ? "[YOU_UNLOCKED_A_SURVIVAL]" :
                        aNumTrophies == 10 ? "[YOU_UNLOCKED_ENDLESS_SURVIVAL]" : "[EARN_MORE_TROPHIES_FOR_ENDLESS_SURVIVAL]";

                }
                else if (mApp->IsScaryPotterLevel())
                    aMsgChar = "[UNLOCKED_VASEBREAKER_LEVEL]";
                else if (mApp->IsPuzzleMode())
                    aMsgChar = "[UNLOCKED_I_ZOMBIE_LEVEL]";
                else
                    aMsgChar = mApp->GetNumTrophies(CHALLENGE_PAGE_CHALLENGE) <= 17 ? "[CHALLENGE_UNLOCKED]" : "[GET_MORE_TROPHIES]";

                DrawBottom(g, "[GOT_TROPHY]", "[TROPHY]", aMsgChar);
                g->DrawImage(PopLib::IMAGE_TROPHY_HI_RES, BOARD_WIDTH / 2 - PopLib::IMAGE_TROPHY_HI_RES->mWidth / 2, 137);
            }
        }
        else if (aLevel == 5)
        {
            DrawBottom(g, "[GOT_SHOVEL]", "[SHOVEL]", "[SHOVEL_DESCRIPTION]");
            g->DrawImage(PopLib::IMAGE_SHOVEL_HI_RES, BOARD_WIDTH / 2 - PopLib::IMAGE_SHOVEL_HI_RES->mWidth / 2, 137);
        }
        else if (aLevel == 10)
        {
            g->DrawImage(PopLib::IMAGE_BACKGROUND1, -700, -300, 2800, 1200);
            g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE, 80, 80);
            g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE1, 131, 132);
            TodDrawString(g, "[FOUND_NOTE]", BOARD_WIDTH / 2, 70, PopLib::FONT_DWARVENTODCRAFT24, Color(255, 200, 0, 255), DS_ALIGN_CENTER);
        }
        else if (aLevel == 15)
        {
            DrawBottom(g, "[FOUND_SUBURBAN_ALMANAC]", "[SUBURBAN_ALMANAC]", "[SUBURBAN_ALMANAC_DESCRIPTION]");
            g->DrawImage(PopLib::IMAGE_ALMANAC, BOARD_WIDTH / 2 - PopLib::IMAGE_ALMANAC->mWidth / 2, 160);
        }
        else if (aLevel == 20)
        {
            g->DrawImage(PopLib::IMAGE_BACKGROUND2, -700, -300, 2800, 1200);
            g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE, 80, 80);
            g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE2, 133, 127);
            TodDrawString(g, "[FOUND_NOTE]", BOARD_WIDTH / 2, 70, PopLib::FONT_DWARVENTODCRAFT24, Color(255, 200, 0, 255), DS_ALIGN_CENTER);
        }
        else if (aLevel == 25)
        {
            DrawBottom(g, "[FOUND_KEYS]", "[KEYS]", "[KEYS_DESCRIPTION]");
            g->DrawImage(PopLib::IMAGE_CARKEYS, BOARD_WIDTH / 2 - PopLib::IMAGE_CARKEYS->mWidth / 2, 160);
        }
        else if (aLevel == 30)
        {
            g->DrawImage(PopLib::IMAGE_BACKGROUND1, -700, -300, 2800, 1200);
            g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE, 80, 80);
            g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE3, 120, 117);
            TodDrawString(g, "[FOUND_NOTE]", BOARD_WIDTH / 2, 70, PopLib::FONT_DWARVENTODCRAFT24, Color(255, 200, 0, 255), DS_ALIGN_CENTER);
        }
        else if (aLevel == 35)
        {
            DrawBottom(g, "[FOUND_TACO]", "[TACO]", "[TACO_DESCRIPTION]");
            g->DrawImage(PopLib::IMAGE_TACO, BOARD_WIDTH / 2 - PopLib::IMAGE_TACO->mWidth / 2, 160);
        }
        else if (aLevel == 40)
        {
            g->DrawImage(PopLib::IMAGE_BACKGROUND2, -700, -300, 2800, 1200);
            g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE, 80, 80);
            g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE4, 102, 117);
            TodDrawString(g, "[FOUND_NOTE]", BOARD_WIDTH / 2, 70, PopLib::FONT_DWARVENTODCRAFT24, Color(255, 200, 0, 255), DS_ALIGN_CENTER);
        }
        else if (aLevel == 45)
        {
            DrawBottom(g, "[FOUND_WATERING_CAN]", "[WATERING_CAN]", "[WATERING_CAN_DESCRIPTION]");
            g->DrawImage(PopLib::IMAGE_WATERINGCAN, BOARD_WIDTH / 2 - PopLib::IMAGE_WATERINGCAN->mWidth / 2, 160);
        }
        else if (aLevel == 50)
        {
            g->DrawImage(PopLib::IMAGE_BACKGROUND1, -700, -300, 2800, 1200);
            g->DrawImage(PopLib::IMAGE_ZOMBIE_NOTE, 80, 80);
            g->DrawImage(PopLib::IMAGE_ZOMBIE_FINAL_NOTE, 114, 138);
            TodDrawString(g, "[FOUND_NOTE]", BOARD_WIDTH / 2, 70, PopLib::FONT_DWARVENTODCRAFT24, Color(255, 200, 0, 255), DS_ALIGN_CENTER);
        }
        else if (aLevel == 1 && mApp->HasFinishedAdventure())
        {
            DrawBottom(g, "[WIN_MESSAGE1]", "[SILVER_SUNFLOWER_TROPHY]", "[WIN_MESSAGE2]");
            TodDrawImageCelCenterScaledF(g, PopLib::IMAGE_SUNFLOWER_TROPHY, 325, 65, 0, 0.7f, 0.7f);
        }
        else
        {
            DrawAwardSeed(g);
        }
    }

    mStartButton->Draw(g);
    mMenuButton->Draw(g);

    int aFadeInAlpha = TodAnimateCurve(180, 0, mFadeInCounter, 255, 0, CURVE_LINEAR);
    g->SetColor(IsPaperNote() ? Color(0, 0, 0, aFadeInAlpha) : Color(255, 255, 255, aFadeInAlpha));
    g->FillRect(0, 0, BOARD_WIDTH, BOARD_HEIGHT);
}

//0x4076A0
void AwardScreen::Update()
{
    Widget::Update();
    if (mApp->GetDialogCount() > 0) return;
    mStartButton->Update();
    mMenuButton->Update();
    mApp->SetCursor(mStartButton->IsMouseOver() || mMenuButton->IsMouseOver() ? CURSOR_HAND : CURSOR_POINTER);
    MarkDirty();
    if (mFadeInCounter > 0) mFadeInCounter--;
}

//0x407760
void AwardScreen::KeyChar(char theChar)
{
    if (theChar == ' ' || theChar == '\r' || theChar == '\u001B')
        StartButtonPressed();
}

//0x407780
void AwardScreen::StartButtonPressed()
{
    if (mApp->GetDialog(DIALOG_STORE))
        return;
    
    if (mAwardType == AWARD_CREDITS_ZOMBIENOTE)
    {
        mApp->KillAwardScreen();
        mApp->ShowCreditScreen();
    }
    else if (mAwardType == AWARD_HELP_ZOMBIENOTE)
    {
        mApp->KillAwardScreen();
        mApp->ShowGameSelector();
    }
    else if (mApp->IsSurvivalMode())
    {
        mApp->KillAwardScreen();
        mApp->ShowChallengeScreen(CHALLENGE_PAGE_SURVIVAL);
    }
    else if (mApp->IsPuzzleMode())
    {
        mApp->KillAwardScreen();
        mApp->ShowChallengeScreen(CHALLENGE_PAGE_PUZZLE);
    }
    else if (mApp->IsChallengeMode())
    {
        mApp->KillAwardScreen();
        mApp->ShowChallengeScreen(CHALLENGE_PAGE_CHALLENGE);
    }
    else
    {
        int aLevel = mApp->mPlayerInfo->GetLevel();
        if (aLevel == 1)
        {
            mApp->KillAwardScreen();
            if (mApp->HasFinishedAdventure())
            {
                mApp->ShowAwardScreen(AWARD_CREDITS_ZOMBIENOTE);
            }
            else
            {
                mApp->PreNewGame(GAMEMODE_ADVENTURE, false);
            }
        }
        else
        {
            if (aLevel == 15)
            {
                mApp->DoAlmanacDialog()->WaitForResult();
            }
            else if (aLevel == 25)
            {
                StoreScreen* aStore = mApp->ShowStoreScreen();
                aStore->SetupForIntro(301);
                aStore->WaitForResult(true);

                if (aStore->mPurchasedFullVersion)
                {
                    mApp->KillAwardScreen();
                    mApp->ShowGameSelector();
                    return;
                }
                if (mApp->IsTrialStageLocked())
                {
                    mApp->KillAwardScreen();
                    mApp->PreNewGame(GAMEMODE_UPSELL, false);
                    if (!mApp->mPlayerInfo->mHasSeenUpsell)
                    {
                        mApp->mBoard->mStoreButton->mBtnNoDraw = true;
                        mApp->mPlayerInfo->mHasSeenUpsell = true;
                    }
                    return;
                }
            }
            else if (aLevel == 35)
            {
                StoreScreen* aStore = mApp->ShowStoreScreen();
                aStore->SetupForIntro(601);
                aStore->WaitForResult(true);
            }
            else if (aLevel == 42)
            {
                StoreScreen* aStore = mApp->ShowStoreScreen();
                aStore->SetupForIntro(3100);
                aStore->WaitForResult(true);
            }
            else if (aLevel == 45)
            {
                mApp->KillAwardScreen();
                mApp->PreNewGame(GAMEMODE_CHALLENGE_ZEN_GARDEN, false);
                mApp->mZenGarden->SetupForZenTutorial();
                return;
            }

            mApp->KillAwardScreen();
            mApp->PreNewGame(GAMEMODE_ADVENTURE, false);
        }
    }
}

//0x4079F0
void AwardScreen::MouseDown(int x, int y, int theClickCount)
{
    if (theClickCount == 1 && (mStartButton->IsMouseOver() || mMenuButton->IsMouseOver()))
        mApp->PlaySample(PopLib::SOUND_TAP);
}

//0x407A70
void AwardScreen::MouseUp(int x, int y, int theClickCount)
{
    if (theClickCount == 1)
    {
        if (mStartButton->IsMouseOver())
            StartButtonPressed();
        if (mMenuButton->IsMouseOver())
        {
            mApp->KillAwardScreen();
            mApp->ShowGameSelector();
        }
    }
}
