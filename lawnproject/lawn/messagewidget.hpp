#ifndef __MESSAGEWIDGET_H__
#define __MESSAGEWIDGET_H__

#include "constenums.hpp"
#include <PopLib/common.hpp>

#define MAX_MESSAGE_LENGTH 128
#define MAX_REANIM_LINES 5

class LawnApp;
namespace PopLib
{
	class Font;
	class Graphics;
}

class MessageWidget
{
public:
	LawnApp*			mApp;									//+0x0
	PopChar			mLabel[MAX_MESSAGE_LENGTH];				//+0x4
	int					mDisplayTime;							//+0x84
	int					mDuration;								//+0x88
	MessageStyle		mMessageStyle;							//+0x8C
	ReanimationID		mTextReanimID[MAX_MESSAGE_LENGTH];		//+0x90
	ReanimationType		mReanimType;							//+0x290
	int					mSlideOffTime;							//+0x294
	PopChar			mLabelNext[MAX_MESSAGE_LENGTH];			//+0x298
	MessageStyle		mMessageStyleNext;						//+0x318

public:
	MessageWidget(LawnApp* theApp);
	~MessageWidget() { ClearReanim(); }

	/*inline*/ void		SetLabel(const PopString& theNewLabel, MessageStyle theMessageStyle);
	void				Update();
	void				Draw(PopLib::Graphics* g);
	void				ClearReanim();
	/*inline*/ void		ClearLabel();
	inline bool			IsBeingDisplayed() { return mDuration != 0; }
	/*inline*/ Font*	GetFont();
	void				DrawReanimatedText(PopLib::Graphics* g, PopLib::Font* theFont, const PopLib::Color& theColor, float thePosY);
	void				LayoutReanimText();
};

#endif