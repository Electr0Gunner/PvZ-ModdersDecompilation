#ifndef __CHEATDIALOG_H__
#define __CHEATDIALOG_H__

#include "lawndialog.hpp"
#include <PopLib/widget/editlistener.hpp>

class CheatDialog : public LawnDialog, public EditListener
{
public:
	LawnApp*			mApp;					//+0x170
	EditWidget*			mLevelEditWidget;		//+0x174

public:
	CheatDialog(LawnApp* theApp);
	virtual ~CheatDialog();

	virtual int			GetPreferredHeight(int theWidth);
	virtual void		Resize(int theX, int theY, int theWidth, int theHeight);
	virtual void		AddedToManager(WidgetManager* theWidgetManager);
	virtual void		RemovedFromManager(WidgetManager* theWidgetManager);
	virtual void		Draw(Graphics* g);
	virtual void		EditWidgetText(int theId, const PopString& theString);
	virtual bool		AllowChar(int theId, PopChar theChar);
	bool				ApplyCheat();
};

#endif