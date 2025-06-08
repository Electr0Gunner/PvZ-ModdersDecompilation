#ifndef __NEWOPTIONSDIALOG_H__
#define __NEWOPTIONSDIALOG_H__

#include <PopLib/widget/dialog.hpp>
#include <PopLib/widget/sliderlistener.hpp>
#include <PopLib/widget/checkboxlistener.hpp>

class LawnApp;
class LawnStoneButton;
class NewLawnButton;
namespace PopLib
{
	class Slider;
	class Checkbox;
};

class NewOptionsDialog : public PopLib::Dialog, public PopLib::SliderListener, public PopLib::CheckboxListener
{
protected:
	enum
	{
		NewOptionsDialog_Almanac,
		NewOptionsDialog_MainMenu,
		NewOptionsDialog_Restart,
		NewOptionsDialog_Update,
		NewOptionsDialog_MusicVolume,
		NewOptionsDialog_SoundVolume,
		NewOptionsDialog_Fullscreen,
		NewOptionsDialog_HardwareAcceleration,
	};

public:
	LawnApp*				mApp;								//+0x158
	PopLib::Slider*			mMusicVolumeSlider;					//+0x15C
	PopLib::Slider*			mSfxVolumeSlider;					//+0x160
	PopLib::Checkbox*			mFullscreenCheckbox;				//+0x164
	PopLib::Checkbox*			mHardwareAccelerationCheckbox;		//+0x168
	LawnStoneButton*		mAlmanacButton;						//+0x16C
	LawnStoneButton*		mBackToMainButton;					//+0x170
	LawnStoneButton*		mRestartButton;						//+0x174
	NewLawnButton*			mBackToGameButton;					//+0x178
	bool					mFromGameSelector;					//+0x17C

public:
	NewOptionsDialog(LawnApp* theApp, bool theFromGameSelector);
	~NewOptionsDialog();

	int						GetPreferredHeight(int theWidth);
	void					AddedToManager(PopLib::WidgetManager* theWidgetManager);
	void					RemovedFromManager(PopLib::WidgetManager* theWidgetManager);
	void					Resize(int theX, int theY, int theWidth, int theHeight);
	void					Draw(PopLib::Graphics* g);
	void					SliderVal(int theId, double theVal);
	void					CheckboxChecked(int theId, bool checked);
	void					ButtonPress(int theId);
	void					ButtonDepress(int theId);
	void					KeyDown(PopLib::KeyCode theKey);
};

#endif
