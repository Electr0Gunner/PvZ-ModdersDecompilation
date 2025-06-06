#include <iostream>

#include "lawnapp.hpp"
#include "resources.hpp"
#include <todlib/todstringfile.hpp>

using namespace PopLib;

bool (*gAppCloseRequest)();				//[0x69E6A0]
bool (*gAppHasUsedCheatKeys)();			//[0x69E6A4]
PopString (*gGetCurrentLevelName)();

int main(int argc, char *argv[])
{
	TodStringListSetColors(gLawnStringFormats, gLawnStringFormatCount);
	gGetCurrentLevelName = LawnGetCurrentLevelName;
	gAppCloseRequest = LawnGetCloseRequest;
	gAppHasUsedCheatKeys = LawnHasUsedCheatKeys;

	gLawnApp = new LawnApp();
	gLawnApp->mChangeDirTo = (!PopLib::FileExists("properties\\resources.xml") && PopLib::FileExists("..\\properties\\resources.xml")) ? ".." : ".";
	
	gLawnApp->Init();
	gLawnApp->Start();

	gLawnApp->Shutdown();
	if (gLawnApp)
		delete gLawnApp;

	return 0;
};