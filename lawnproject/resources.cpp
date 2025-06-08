#include <map>
#include "resources.hpp"
#include <PopLib/resources/resourcemanager.hpp>

using namespace PopLib;

bool gNeedRecalcVariableToIdMap = false;

//0x474700
bool PopLib::ExtractResourcesByName(ResourceManager* theResourceManager, const char* theName)
{
	if (!strcmp(theName, "DelayLoad_Almanac"))					return ExtractDelayLoad_AlmanacResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_AwardScreen"))			return ExtractDelayLoad_AwardScreenResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_Background1"))			return ExtractDelayLoad_Background1Resources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_Background2"))			return ExtractDelayLoad_Background2Resources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_Background3"))			return ExtractDelayLoad_Background3Resources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_Background4"))			return ExtractDelayLoad_Background4Resources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_Background5"))			return ExtractDelayLoad_Background5Resources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_Background6"))			return ExtractDelayLoad_Background6Resources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_BackgroundUnsodded"))	return ExtractDelayLoad_BackgroundUnsoddedResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_ChallengeScreen"))		return ExtractDelayLoad_ChallengeScreenResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_Credits"))				return ExtractDelayLoad_CreditsResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_GreenHouseGarden"))	return ExtractDelayLoad_GreenHouseGardenResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_GreenHouseOverlay"))	return ExtractDelayLoad_GreenHouseOverlayResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_MushroomGarden"))		return ExtractDelayLoad_MushroomGardenResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_Store"))				return ExtractDelayLoad_StoreResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_TreeOfWisdom"))		return ExtractDelayLoad_TreeOfWisdomResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_ZombieFinalNote"))		return ExtractDelayLoad_ZombieFinalNoteResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_ZombieNote"))			return ExtractDelayLoad_ZombieNoteResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_ZombieNote1"))			return ExtractDelayLoad_ZombieNote1Resources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_ZombieNote2"))			return ExtractDelayLoad_ZombieNote2Resources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_ZombieNote3"))			return ExtractDelayLoad_ZombieNote3Resources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_ZombieNote4"))			return ExtractDelayLoad_ZombieNote4Resources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_ZombieNoteHelp"))		return ExtractDelayLoad_ZombieNoteHelpResources(theResourceManager);
	else if (!strcmp(theName, "DelayLoad_Zombiquarium"))		return ExtractDelayLoad_ZombiquariumResources(theResourceManager);
	else if (!strcmp(theName, "Init"))							return ExtractInitResources(theResourceManager);
	else if (!strcmp(theName, "LoaderBar"))						return ExtractLoaderBarResources(theResourceManager);
	else if (!strcmp(theName, "LoadingFonts"))					return ExtractLoadingFontsResources(theResourceManager);
	else if (!strcmp(theName, "LoadingImages"))					return ExtractLoadingImagesResources(theResourceManager);
	else if (!strcmp(theName, "LoadingSounds"))					return ExtractLoadingSoundsResources(theResourceManager);
}

// DelayLoad_Almanac Resources
Image* PopLib::IMAGE_ALMANAC_CLOSEBUTTON;
Image* PopLib::IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT;
Image* PopLib::IMAGE_ALMANAC_GROUNDDAY;
Image* PopLib::IMAGE_ALMANAC_GROUNDICE;
Image* PopLib::IMAGE_ALMANAC_GROUNDNIGHT;
Image* PopLib::IMAGE_ALMANAC_GROUNDNIGHTPOOL;
Image* PopLib::IMAGE_ALMANAC_GROUNDPOOL;
Image* PopLib::IMAGE_ALMANAC_GROUNDROOF;
Image* PopLib::IMAGE_ALMANAC_INDEXBACK;
Image* PopLib::IMAGE_ALMANAC_INDEXBUTTON;
Image* PopLib::IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT;
Image* PopLib::IMAGE_ALMANAC_PLANTBACK;
Image* PopLib::IMAGE_ALMANAC_PLANTCARD;
Image* PopLib::IMAGE_ALMANAC_ZOMBIEBACK;
Image* PopLib::IMAGE_ALMANAC_ZOMBIEBLANK;
Image* PopLib::IMAGE_ALMANAC_ZOMBIECARD;
Image* PopLib::IMAGE_ALMANAC_ZOMBIEWINDOW;
Image* PopLib::IMAGE_ALMANAC_ZOMBIEWINDOW2;

bool PopLib::ExtractDelayLoad_AlmanacResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_ALMANAC_CLOSEBUTTON = aMgr.GetImageThrow("IMAGE_ALMANAC_CLOSEBUTTON");
		IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT = aMgr.GetImageThrow("IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT");
		IMAGE_ALMANAC_GROUNDDAY = aMgr.GetImageThrow("IMAGE_ALMANAC_GROUNDDAY");
		IMAGE_ALMANAC_GROUNDICE = aMgr.GetImageThrow("IMAGE_ALMANAC_GROUNDICE");
		IMAGE_ALMANAC_GROUNDNIGHT = aMgr.GetImageThrow("IMAGE_ALMANAC_GROUNDNIGHT");
		IMAGE_ALMANAC_GROUNDNIGHTPOOL = aMgr.GetImageThrow("IMAGE_ALMANAC_GROUNDNIGHTPOOL");
		IMAGE_ALMANAC_GROUNDPOOL = aMgr.GetImageThrow("IMAGE_ALMANAC_GROUNDPOOL");
		IMAGE_ALMANAC_GROUNDROOF = aMgr.GetImageThrow("IMAGE_ALMANAC_GROUNDROOF");
		IMAGE_ALMANAC_INDEXBACK = aMgr.GetImageThrow("IMAGE_ALMANAC_INDEXBACK");
		IMAGE_ALMANAC_INDEXBUTTON = aMgr.GetImageThrow("IMAGE_ALMANAC_INDEXBUTTON");
		IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT = aMgr.GetImageThrow("IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT");
		IMAGE_ALMANAC_PLANTBACK = aMgr.GetImageThrow("IMAGE_ALMANAC_PLANTBACK");
		IMAGE_ALMANAC_PLANTCARD = aMgr.GetImageThrow("IMAGE_ALMANAC_PLANTCARD");
		IMAGE_ALMANAC_ZOMBIEBACK = aMgr.GetImageThrow("IMAGE_ALMANAC_ZOMBIEBACK");
		IMAGE_ALMANAC_ZOMBIEBLANK = aMgr.GetImageThrow("IMAGE_ALMANAC_ZOMBIEBLANK");
		IMAGE_ALMANAC_ZOMBIECARD = aMgr.GetImageThrow("IMAGE_ALMANAC_ZOMBIECARD");
		IMAGE_ALMANAC_ZOMBIEWINDOW = aMgr.GetImageThrow("IMAGE_ALMANAC_ZOMBIEWINDOW");
		IMAGE_ALMANAC_ZOMBIEWINDOW2 = aMgr.GetImageThrow("IMAGE_ALMANAC_ZOMBIEWINDOW2");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_AwardScreen Resources
Image* PopLib::IMAGE_AWARDSCREEN_BACK;

bool PopLib::ExtractDelayLoad_AwardScreenResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_AWARDSCREEN_BACK = aMgr.GetImageThrow("IMAGE_AWARDSCREEN_BACK");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background1 Resources
Image* PopLib::IMAGE_BACKGROUND1;
Image* PopLib::IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY;
Image* PopLib::IMAGE_BACKGROUND1_GAMEOVER_MASK;

bool PopLib::ExtractDelayLoad_Background1Resources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND1 = aMgr.GetImageThrow("IMAGE_BACKGROUND1");
		IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY = aMgr.GetImageThrow("IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY");
		IMAGE_BACKGROUND1_GAMEOVER_MASK = aMgr.GetImageThrow("IMAGE_BACKGROUND1_GAMEOVER_MASK");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background2 Resources
Image* PopLib::IMAGE_BACKGROUND2;
Image* PopLib::IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY;
Image* PopLib::IMAGE_BACKGROUND2_GAMEOVER_MASK;

bool PopLib::ExtractDelayLoad_Background2Resources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND2 = aMgr.GetImageThrow("IMAGE_BACKGROUND2");
		IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY = aMgr.GetImageThrow("IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY");
		IMAGE_BACKGROUND2_GAMEOVER_MASK = aMgr.GetImageThrow("IMAGE_BACKGROUND2_GAMEOVER_MASK");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background3 Resources
Image* PopLib::IMAGE_BACKGROUND3;
Image* PopLib::IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY;
Image* PopLib::IMAGE_BACKGROUND3_GAMEOVER_MASK;

bool PopLib::ExtractDelayLoad_Background3Resources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND3 = aMgr.GetImageThrow("IMAGE_BACKGROUND3");
		IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY = aMgr.GetImageThrow("IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY");
		IMAGE_BACKGROUND3_GAMEOVER_MASK = aMgr.GetImageThrow("IMAGE_BACKGROUND3_GAMEOVER_MASK");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background4 Resources
Image* PopLib::IMAGE_BACKGROUND4;
Image* PopLib::IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY;
Image* PopLib::IMAGE_BACKGROUND4_GAMEOVER_MASK;
Image* PopLib::IMAGE_FOG;
Image* PopLib::IMAGE_FOG_SOFTWARE;

bool PopLib::ExtractDelayLoad_Background4Resources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND4 = aMgr.GetImageThrow("IMAGE_BACKGROUND4");
		IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY = aMgr.GetImageThrow("IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY");
		IMAGE_BACKGROUND4_GAMEOVER_MASK = aMgr.GetImageThrow("IMAGE_BACKGROUND4_GAMEOVER_MASK");
		IMAGE_FOG = aMgr.GetImageThrow("IMAGE_FOG");
		IMAGE_FOG_SOFTWARE = aMgr.GetImageThrow("IMAGE_FOG_SOFTWARE");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background5 Resources
Image* PopLib::IMAGE_BACKGROUND5;
Image* PopLib::IMAGE_BACKGROUND5_GAMEOVER_MASK;

bool PopLib::ExtractDelayLoad_Background5Resources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND5 = aMgr.GetImageThrow("IMAGE_BACKGROUND5");
		IMAGE_BACKGROUND5_GAMEOVER_MASK = aMgr.GetImageThrow("IMAGE_BACKGROUND5_GAMEOVER_MASK");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background6 Resources
Image* PopLib::IMAGE_BACKGROUND6BOSS;
Image* PopLib::IMAGE_BACKGROUND6_GAMEOVER_MASK;

bool PopLib::ExtractDelayLoad_Background6Resources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND6BOSS = aMgr.GetImageThrow("IMAGE_BACKGROUND6BOSS");
		IMAGE_BACKGROUND6_GAMEOVER_MASK = aMgr.GetImageThrow("IMAGE_BACKGROUND6_GAMEOVER_MASK");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_BackgroundUnsodded Resources
Image* PopLib::IMAGE_BACKGROUND1UNSODDED;
Image* PopLib::IMAGE_SOD1ROW;
Image* PopLib::IMAGE_SOD3ROW;

bool PopLib::ExtractDelayLoad_BackgroundUnsoddedResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND1UNSODDED = aMgr.GetImageThrow("IMAGE_BACKGROUND1UNSODDED");
		IMAGE_SOD1ROW = aMgr.GetImageThrow("IMAGE_SOD1ROW");
		IMAGE_SOD3ROW = aMgr.GetImageThrow("IMAGE_SOD3ROW");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_ChallengeScreen Resources
Image* PopLib::IMAGE_CHALLENGE_BACKGROUND;
Image* PopLib::IMAGE_CHALLENGE_BLANK;
Image* PopLib::IMAGE_CHALLENGE_THUMBNAILS;
Image* PopLib::IMAGE_CHALLENGE_WINDOW;
Image* PopLib::IMAGE_CHALLENGE_WINDOW_HIGHLIGHT;
Image* PopLib::IMAGE_LOCK;
Image* PopLib::IMAGE_LOCK_OPEN;
Image* PopLib::IMAGE_SURVIVAL_THUMBNAILS;

bool PopLib::ExtractDelayLoad_ChallengeScreenResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_CHALLENGE_BACKGROUND = aMgr.GetImageThrow("IMAGE_CHALLENGE_BACKGROUND");
		IMAGE_CHALLENGE_BLANK = aMgr.GetImageThrow("IMAGE_CHALLENGE_BLANK");
		IMAGE_CHALLENGE_THUMBNAILS = aMgr.GetImageThrow("IMAGE_CHALLENGE_THUMBNAILS");
		IMAGE_CHALLENGE_WINDOW = aMgr.GetImageThrow("IMAGE_CHALLENGE_WINDOW");
		IMAGE_CHALLENGE_WINDOW_HIGHLIGHT = aMgr.GetImageThrow("IMAGE_CHALLENGE_WINDOW_HIGHLIGHT");
		IMAGE_LOCK = aMgr.GetImageThrow("IMAGE_LOCK");
		IMAGE_LOCK_OPEN = aMgr.GetImageThrow("IMAGE_LOCK_OPEN");
		IMAGE_SURVIVAL_THUMBNAILS = aMgr.GetImageThrow("IMAGE_SURVIVAL_THUMBNAILS");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_Credits Resources
Font* PopLib::FONT_BRIANNETOD32;
Font* PopLib::FONT_BRIANNETOD32BLACK;
Image* PopLib::IMAGE_CREDITS_PLAYBUTTON;
Image* PopLib::IMAGE_CREDITS_ZOMBIENOTE;
Image* PopLib::IMAGE_REANIM_CREDITS_DISCOLIGHTS;
Image* PopLib::IMAGE_REANIM_CREDITS_FOGMACHINE;
Image* PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_SING1;
Image* PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_SING2;
Image* PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_SING3;
Image* PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_SING4;
Image* PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_SING5;
Image* PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_WINK;

bool PopLib::ExtractDelayLoad_CreditsResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		FONT_BRIANNETOD32 = aMgr.GetFontThrow("FONT_BRIANNETOD32");
		FONT_BRIANNETOD32BLACK = aMgr.GetFontThrow("FONT_BRIANNETOD32BLACK");
		IMAGE_CREDITS_PLAYBUTTON = aMgr.GetImageThrow("IMAGE_CREDITS_PLAYBUTTON");
		IMAGE_CREDITS_ZOMBIENOTE = aMgr.GetImageThrow("IMAGE_CREDITS_ZOMBIENOTE");
		IMAGE_REANIM_CREDITS_DISCOLIGHTS = aMgr.GetImageThrow("IMAGE_REANIM_CREDITS_DISCOLIGHTS");
		IMAGE_REANIM_CREDITS_FOGMACHINE = aMgr.GetImageThrow("IMAGE_REANIM_CREDITS_FOGMACHINE");
		IMAGE_REANIM_SUNFLOWER_HEAD_SING1 = aMgr.GetImageThrow("IMAGE_REANIM_SUNFLOWER_HEAD_SING1");
		IMAGE_REANIM_SUNFLOWER_HEAD_SING2 = aMgr.GetImageThrow("IMAGE_REANIM_SUNFLOWER_HEAD_SING2");
		IMAGE_REANIM_SUNFLOWER_HEAD_SING3 = aMgr.GetImageThrow("IMAGE_REANIM_SUNFLOWER_HEAD_SING3");
		IMAGE_REANIM_SUNFLOWER_HEAD_SING4 = aMgr.GetImageThrow("IMAGE_REANIM_SUNFLOWER_HEAD_SING4");
		IMAGE_REANIM_SUNFLOWER_HEAD_SING5 = aMgr.GetImageThrow("IMAGE_REANIM_SUNFLOWER_HEAD_SING5");
		IMAGE_REANIM_SUNFLOWER_HEAD_WINK = aMgr.GetImageThrow("IMAGE_REANIM_SUNFLOWER_HEAD_WINK");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_GreenHouseGarden Resources
Image* PopLib::IMAGE_BACKGROUND_GREENHOUSE;

bool PopLib::ExtractDelayLoad_GreenHouseGardenResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND_GREENHOUSE = aMgr.GetImageThrow("IMAGE_BACKGROUND_GREENHOUSE");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_GreenHouseOverlay Resources
Image* PopLib::IMAGE_BACKGROUND_GREENHOUSE_OVERLAY;

bool PopLib::ExtractDelayLoad_GreenHouseOverlayResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND_GREENHOUSE_OVERLAY = aMgr.GetImageThrow("IMAGE_BACKGROUND_GREENHOUSE_OVERLAY");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_MushroomGarden Resources
Image* PopLib::IMAGE_BACKGROUND_MUSHROOMGARDEN;

bool PopLib::ExtractDelayLoad_MushroomGardenResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND_MUSHROOMGARDEN = aMgr.GetImageThrow("IMAGE_BACKGROUND_MUSHROOMGARDEN");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_Store Resources
Image* PopLib::IMAGE_STORE_AQUARIUMGARDENICON;
Image* PopLib::IMAGE_STORE_BACKGROUND;
Image* PopLib::IMAGE_STORE_BACKGROUNDNIGHT;
Image* PopLib::IMAGE_STORE_CAR;
Image* PopLib::IMAGE_STORE_CARCLOSED;
Image* PopLib::IMAGE_STORE_CARCLOSED_NIGHT;
Image* PopLib::IMAGE_STORE_CAR_NIGHT;
Image* PopLib::IMAGE_STORE_FIRSTAIDWALLNUTICON;
Image* PopLib::IMAGE_STORE_HATCHBACKOPEN;
Image* PopLib::IMAGE_STORE_MAINMENUBUTTON;
Image* PopLib::IMAGE_STORE_MAINMENUBUTTONDOWN;
Image* PopLib::IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT;
Image* PopLib::IMAGE_STORE_MUSHROOMGARDENICON;
Image* PopLib::IMAGE_STORE_NEXTBUTTON;
Image* PopLib::IMAGE_STORE_NEXTBUTTONDISABLED;
Image* PopLib::IMAGE_STORE_NEXTBUTTONHIGHLIGHT;
Image* PopLib::IMAGE_STORE_PACKETUPGRADE;
Image* PopLib::IMAGE_STORE_PREVBUTTON;
Image* PopLib::IMAGE_STORE_PREVBUTTONDISABLED;
Image* PopLib::IMAGE_STORE_PREVBUTTONHIGHLIGHT;
Image* PopLib::IMAGE_STORE_PRICETAG;
Image* PopLib::IMAGE_STORE_PVZICON;
Image* PopLib::IMAGE_STORE_SIGN;
Image* PopLib::IMAGE_STORE_TREEOFWISDOMICON;

bool PopLib::ExtractDelayLoad_StoreResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_STORE_AQUARIUMGARDENICON = aMgr.GetImageThrow("IMAGE_STORE_AQUARIUMGARDENICON");
		IMAGE_STORE_BACKGROUND = aMgr.GetImageThrow("IMAGE_STORE_BACKGROUND");
		IMAGE_STORE_BACKGROUNDNIGHT = aMgr.GetImageThrow("IMAGE_STORE_BACKGROUNDNIGHT");
		IMAGE_STORE_CAR = aMgr.GetImageThrow("IMAGE_STORE_CAR");
		IMAGE_STORE_CARCLOSED = aMgr.GetImageThrow("IMAGE_STORE_CARCLOSED");
		IMAGE_STORE_CARCLOSED_NIGHT = aMgr.GetImageThrow("IMAGE_STORE_CARCLOSED_NIGHT");
		IMAGE_STORE_CAR_NIGHT = aMgr.GetImageThrow("IMAGE_STORE_CAR_NIGHT");
		IMAGE_STORE_FIRSTAIDWALLNUTICON = aMgr.GetImageThrow("IMAGE_STORE_FIRSTAIDWALLNUTICON");
		IMAGE_STORE_HATCHBACKOPEN = aMgr.GetImageThrow("IMAGE_STORE_HATCHBACKOPEN");
		IMAGE_STORE_MAINMENUBUTTON = aMgr.GetImageThrow("IMAGE_STORE_MAINMENUBUTTON");
		IMAGE_STORE_MAINMENUBUTTONDOWN = aMgr.GetImageThrow("IMAGE_STORE_MAINMENUBUTTONDOWN");
		IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT = aMgr.GetImageThrow("IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT");
		IMAGE_STORE_MUSHROOMGARDENICON = aMgr.GetImageThrow("IMAGE_STORE_MUSHROOMGARDENICON");
		IMAGE_STORE_NEXTBUTTON = aMgr.GetImageThrow("IMAGE_STORE_NEXTBUTTON");
		IMAGE_STORE_NEXTBUTTONDISABLED = aMgr.GetImageThrow("IMAGE_STORE_NEXTBUTTONDISABLED");
		IMAGE_STORE_NEXTBUTTONHIGHLIGHT = aMgr.GetImageThrow("IMAGE_STORE_NEXTBUTTONHIGHLIGHT");
		IMAGE_STORE_PACKETUPGRADE = aMgr.GetImageThrow("IMAGE_STORE_PACKETUPGRADE");
		IMAGE_STORE_PREVBUTTON = aMgr.GetImageThrow("IMAGE_STORE_PREVBUTTON");
		IMAGE_STORE_PREVBUTTONDISABLED = aMgr.GetImageThrow("IMAGE_STORE_PREVBUTTONDISABLED");
		IMAGE_STORE_PREVBUTTONHIGHLIGHT = aMgr.GetImageThrow("IMAGE_STORE_PREVBUTTONHIGHLIGHT");
		IMAGE_STORE_PRICETAG = aMgr.GetImageThrow("IMAGE_STORE_PRICETAG");
		IMAGE_STORE_PVZICON = aMgr.GetImageThrow("IMAGE_STORE_PVZICON");
		IMAGE_STORE_SIGN = aMgr.GetImageThrow("IMAGE_STORE_SIGN");
		IMAGE_STORE_TREEOFWISDOMICON = aMgr.GetImageThrow("IMAGE_STORE_TREEOFWISDOMICON");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_TreeOfWisdom Resources

bool PopLib::ExtractDelayLoad_TreeOfWisdomResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieFinalNote Resources
Image* PopLib::IMAGE_ZOMBIE_FINAL_NOTE;

bool PopLib::ExtractDelayLoad_ZombieFinalNoteResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_FINAL_NOTE = aMgr.GetImageThrow("IMAGE_ZOMBIE_FINAL_NOTE");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNote Resources
Image* PopLib::IMAGE_ZOMBIE_NOTE;

bool PopLib::ExtractDelayLoad_ZombieNoteResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE = aMgr.GetImageThrow("IMAGE_ZOMBIE_NOTE");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNote1 Resources
Image* PopLib::IMAGE_ZOMBIE_NOTE1;

bool PopLib::ExtractDelayLoad_ZombieNote1Resources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE1 = aMgr.GetImageThrow("IMAGE_ZOMBIE_NOTE1");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNote2 Resources
Image* PopLib::IMAGE_ZOMBIE_NOTE2;

bool PopLib::ExtractDelayLoad_ZombieNote2Resources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE2 = aMgr.GetImageThrow("IMAGE_ZOMBIE_NOTE2");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNote3 Resources
Image* PopLib::IMAGE_ZOMBIE_NOTE3;

bool PopLib::ExtractDelayLoad_ZombieNote3Resources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE3 = aMgr.GetImageThrow("IMAGE_ZOMBIE_NOTE3");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNote4 Resources
Image* PopLib::IMAGE_ZOMBIE_NOTE4;

bool PopLib::ExtractDelayLoad_ZombieNote4Resources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE4 = aMgr.GetImageThrow("IMAGE_ZOMBIE_NOTE4");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNoteHelp Resources
Image* PopLib::IMAGE_ZOMBIE_NOTE_HELP;

bool PopLib::ExtractDelayLoad_ZombieNoteHelpResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE_HELP = aMgr.GetImageThrow("IMAGE_ZOMBIE_NOTE_HELP");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// DelayLoad_Zombiquarium Resources
Image* PopLib::IMAGE_AQUARIUM1;
Image* PopLib::IMAGE_WAVECENTER;
Image* PopLib::IMAGE_WAVESIDE;

bool PopLib::ExtractDelayLoad_ZombiquariumResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_AQUARIUM1 = aMgr.GetImageThrow("IMAGE_AQUARIUM1");
		IMAGE_WAVECENTER = aMgr.GetImageThrow("IMAGE_WAVECENTER");
		IMAGE_WAVESIDE = aMgr.GetImageThrow("IMAGE_WAVESIDE");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Init Resources
Image* PopLib::IMAGE_BLANK;
Image* PopLib::IMAGE_PARTNER_LOGO;
Image* PopLib::IMAGE_POPCAP_LOGO;

bool PopLib::ExtractInitResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_BLANK = aMgr.GetImageThrow("IMAGE_BLANK");
		IMAGE_PARTNER_LOGO = aMgr.GetImageThrow("IMAGE_PARTNER_LOGO");
		IMAGE_POPCAP_LOGO = aMgr.GetImageThrow("IMAGE_POPCAP_LOGO");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LoaderBar Resources
Font* PopLib::FONT_BRIANNETOD16;
Image* PopLib::IMAGE_LOADBAR_DIRT;
Image* PopLib::IMAGE_LOADBAR_GRASS;
Image* PopLib::IMAGE_PVZ_LOGO;
Image* PopLib::IMAGE_REANIM_SODROLLCAP;
Image* PopLib::IMAGE_TITLESCREEN;
int PopLib::SOUND_BUTTONCLICK;
int PopLib::SOUND_LOADINGBAR_FLOWER;
int PopLib::SOUND_LOADINGBAR_ZOMBIE;

bool PopLib::ExtractLoaderBarResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		FONT_BRIANNETOD16 = aMgr.GetFontThrow("FONT_BRIANNETOD16");
		IMAGE_LOADBAR_DIRT = aMgr.GetImageThrow("IMAGE_LOADBAR_DIRT");
		IMAGE_LOADBAR_GRASS = aMgr.GetImageThrow("IMAGE_LOADBAR_GRASS");
		IMAGE_PVZ_LOGO = aMgr.GetImageThrow("IMAGE_PVZ_LOGO");
		IMAGE_REANIM_SODROLLCAP = aMgr.GetImageThrow("IMAGE_REANIM_SODROLLCAP");
		IMAGE_TITLESCREEN = aMgr.GetImageThrow("IMAGE_TITLESCREEN");
		SOUND_BUTTONCLICK = aMgr.GetSoundThrow("SOUND_BUTTONCLICK");
		SOUND_LOADINGBAR_FLOWER = aMgr.GetSoundThrow("SOUND_LOADINGBAR_FLOWER");
		SOUND_LOADINGBAR_ZOMBIE = aMgr.GetSoundThrow("SOUND_LOADINGBAR_ZOMBIE");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LoadingFonts Resources
Font* PopLib::FONT_BRIANNETOD12;
Font* PopLib::FONT_CONTINUUMBOLD14;
Font* PopLib::FONT_CONTINUUMBOLD14OUTLINE;
Font* PopLib::FONT_DWARVENTODCRAFT12;
Font* PopLib::FONT_DWARVENTODCRAFT15;
Font* PopLib::FONT_DWARVENTODCRAFT18;
Font* PopLib::FONT_DWARVENTODCRAFT18BRIGHTGREENINSET;
Font* PopLib::FONT_DWARVENTODCRAFT18GREENINSET;
Font* PopLib::FONT_DWARVENTODCRAFT18YELLOW;
Font* PopLib::FONT_DWARVENTODCRAFT24;
Font* PopLib::FONT_DWARVENTODCRAFT36BRIGHTGREENINSET;
Font* PopLib::FONT_DWARVENTODCRAFT36GREENINSET;
Font* PopLib::FONT_HOUSEOFTERROR16;
Font* PopLib::FONT_HOUSEOFTERROR20;
Font* PopLib::FONT_HOUSEOFTERROR28;
Image* PopLib::FONT_IMAGE_HOUSEOFTERROR28;
Font* PopLib::FONT_PICO129;
Font* PopLib::FONT_TINYBOLD;

bool PopLib::ExtractLoadingFontsResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		FONT_BRIANNETOD12 = aMgr.GetFontThrow("FONT_BRIANNETOD12");
		FONT_CONTINUUMBOLD14 = aMgr.GetFontThrow("FONT_CONTINUUMBOLD14");
		FONT_CONTINUUMBOLD14OUTLINE = aMgr.GetFontThrow("FONT_CONTINUUMBOLD14OUTLINE");
		FONT_DWARVENTODCRAFT12 = aMgr.GetFontThrow("FONT_DWARVENTODCRAFT12");
		FONT_DWARVENTODCRAFT15 = aMgr.GetFontThrow("FONT_DWARVENTODCRAFT15");
		FONT_DWARVENTODCRAFT18 = aMgr.GetFontThrow("FONT_DWARVENTODCRAFT18");
		FONT_DWARVENTODCRAFT18BRIGHTGREENINSET = aMgr.GetFontThrow("FONT_DWARVENTODCRAFT18BRIGHTGREENINSET");
		FONT_DWARVENTODCRAFT18GREENINSET = aMgr.GetFontThrow("FONT_DWARVENTODCRAFT18GREENINSET");
		FONT_DWARVENTODCRAFT18YELLOW = aMgr.GetFontThrow("FONT_DWARVENTODCRAFT18YELLOW");
		FONT_DWARVENTODCRAFT24 = aMgr.GetFontThrow("FONT_DWARVENTODCRAFT24");
		FONT_DWARVENTODCRAFT36BRIGHTGREENINSET = aMgr.GetFontThrow("FONT_DWARVENTODCRAFT36BRIGHTGREENINSET");
		FONT_DWARVENTODCRAFT36GREENINSET = aMgr.GetFontThrow("FONT_DWARVENTODCRAFT36GREENINSET");
		FONT_HOUSEOFTERROR16 = aMgr.GetFontThrow("FONT_HOUSEOFTERROR16");
		FONT_HOUSEOFTERROR20 = aMgr.GetFontThrow("FONT_HOUSEOFTERROR20");
		FONT_HOUSEOFTERROR28 = aMgr.GetFontThrow("FONT_HOUSEOFTERROR28");
		FONT_IMAGE_HOUSEOFTERROR28 = aMgr.GetImageThrow("FONT_IMAGE_HOUSEOFTERROR28");
		FONT_PICO129 = aMgr.GetFontThrow("FONT_PICO129");
		FONT_TINYBOLD = aMgr.GetFontThrow("FONT_TINYBOLD");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LoadingImages Resources
Image* PopLib::IMAGE_ALMANAC;
Image* PopLib::IMAGE_ALMANAC_IMITATER;
Image* PopLib::IMAGE_AWARDPICKUPGLOW;
Image* PopLib::IMAGE_BEGHOULED_TWIST_OVERLAY;
Image* PopLib::IMAGE_BRAIN;
Image* PopLib::IMAGE_BUG_SPRAY;
Image* PopLib::IMAGE_BUNGEECORD;
Image* PopLib::IMAGE_BUNGEETARGET;
Image* PopLib::IMAGE_BUTTON_DOWN_LEFT;
Image* PopLib::IMAGE_BUTTON_DOWN_MIDDLE;
Image* PopLib::IMAGE_BUTTON_DOWN_RIGHT;
Image* PopLib::IMAGE_BUTTON_LEFT;
Image* PopLib::IMAGE_BUTTON_MIDDLE;
Image* PopLib::IMAGE_BUTTON_RIGHT;
Image* PopLib::IMAGE_CARKEYS;
Image* PopLib::IMAGE_CHOCOLATE;
Image* PopLib::IMAGE_COBCANNON_POPCORN;
Image* PopLib::IMAGE_COBCANNON_TARGET;
Image* PopLib::IMAGE_COINBANK;
Image* PopLib::IMAGE_CONVEYORBELT;
Image* PopLib::IMAGE_CONVEYORBELT_BACKDROP;
Image* PopLib::IMAGE_CRATER;
Image* PopLib::IMAGE_CRATER_FADING;
Image* PopLib::IMAGE_CRATER_ROOF_CENTER;
Image* PopLib::IMAGE_CRATER_ROOF_LEFT;
Image* PopLib::IMAGE_CRATER_WATER_DAY;
Image* PopLib::IMAGE_CRATER_WATER_NIGHT;
Image* PopLib::IMAGE_DIALOG_BIGBOTTOMLEFT;
Image* PopLib::IMAGE_DIALOG_BIGBOTTOMMIDDLE;
Image* PopLib::IMAGE_DIALOG_BIGBOTTOMRIGHT;
Image* PopLib::IMAGE_DIALOG_BOTTOMLEFT;
Image* PopLib::IMAGE_DIALOG_BOTTOMMIDDLE;
Image* PopLib::IMAGE_DIALOG_BOTTOMRIGHT;
Image* PopLib::IMAGE_DIALOG_CENTERLEFT;
Image* PopLib::IMAGE_DIALOG_CENTERMIDDLE;
Image* PopLib::IMAGE_DIALOG_CENTERRIGHT;
Image* PopLib::IMAGE_DIALOG_HEADER;
Image* PopLib::IMAGE_DIALOG_TOPLEFT;
Image* PopLib::IMAGE_DIALOG_TOPMIDDLE;
Image* PopLib::IMAGE_DIALOG_TOPRIGHT;
Image* PopLib::IMAGE_DIRTBIG;
Image* PopLib::IMAGE_DIRTSMALL;
Image* PopLib::IMAGE_DOOMSHROOM_EXPLOSION_BASE;
Image* PopLib::IMAGE_DUST_PUFFS;
Image* PopLib::IMAGE_EDITBOX;
Image* PopLib::IMAGE_FERTILIZER;
Image* PopLib::IMAGE_FLAGMETER;
Image* PopLib::IMAGE_FLAGMETERLEVELPROGRESS;
Image* PopLib::IMAGE_FLAGMETERPARTS;
Image* PopLib::IMAGE_ICE;
Image* PopLib::IMAGE_ICETRAP;
Image* PopLib::IMAGE_ICETRAP2;
Image* PopLib::IMAGE_ICETRAP_PARTICLES;
Image* PopLib::IMAGE_ICE_CAP;
Image* PopLib::IMAGE_ICE_SPARKLES;
Image* PopLib::IMAGE_ICON_POOLCLEANER;
Image* PopLib::IMAGE_ICON_RAKE;
Image* PopLib::IMAGE_ICON_ROOFCLEANER;
Image* PopLib::IMAGE_IMITATERCLOUDS;
Image* PopLib::IMAGE_IMITATERPUFFS;
Image* PopLib::IMAGE_IMITATERSEED;
Image* PopLib::IMAGE_IMITATERSEEDDISABLED;
Image* PopLib::IMAGE_MELONPULT_PARTICLES;
Image* PopLib::IMAGE_MINIGAME_TROPHY;
Image* PopLib::IMAGE_MONEYBAG;
Image* PopLib::IMAGE_MONEYBAG_HI_RES;
Image* PopLib::IMAGE_NIGHT_GRAVE_GRAPHIC;
Image* PopLib::IMAGE_OPTIONS_BACKTOGAMEBUTTON0;
Image* PopLib::IMAGE_OPTIONS_BACKTOGAMEBUTTON2;
Image* PopLib::IMAGE_OPTIONS_CHECKBOX0;
Image* PopLib::IMAGE_OPTIONS_CHECKBOX1;
Image* PopLib::IMAGE_OPTIONS_MENUBACK;
Image* PopLib::IMAGE_OPTIONS_SLIDERKNOB2;
Image* PopLib::IMAGE_OPTIONS_SLIDERSLOT;
Image* PopLib::IMAGE_PACKET_PLANTS;
Image* PopLib::IMAGE_PEA_PARTICLES;
Image* PopLib::IMAGE_PEA_SHADOWS;
Image* PopLib::IMAGE_PEA_SPLATS;
Image* PopLib::IMAGE_PHONOGRAPH;
Image* PopLib::IMAGE_PINATA;
Image* PopLib::IMAGE_PLANTSHADOW;
Image* PopLib::IMAGE_PLANTSHADOW2;
Image* PopLib::IMAGE_PLANTSPEECHBUBBLE;
Image* PopLib::IMAGE_POOL;
Image* PopLib::IMAGE_POOLSPARKLY;
Image* PopLib::IMAGE_POOL_BASE;
Image* PopLib::IMAGE_POOL_BASE_NIGHT;
Image* PopLib::IMAGE_POOL_CAUSTIC_EFFECT;
Image* PopLib::IMAGE_POOL_NIGHT;
Image* PopLib::IMAGE_POOL_SHADING;
Image* PopLib::IMAGE_POOL_SHADING_NIGHT;
Image* PopLib::IMAGE_POTATOMINE_PARTICLES;
Image* PopLib::IMAGE_PRESENT;
Image* PopLib::IMAGE_PRESENTOPEN;
Image* PopLib::IMAGE_PROJECTILECACTUS;
Image* PopLib::IMAGE_PROJECTILEPEA;
Image* PopLib::IMAGE_PROJECTILESNOWPEA;
Image* PopLib::IMAGE_PROJECTILE_STAR;
Image* PopLib::IMAGE_PUFFSHROOM_PUFF1;
Image* PopLib::IMAGE_RAIN;
Image* PopLib::IMAGE_REANIM_CABBAGEPULT_CABBAGE;
Image* PopLib::IMAGE_REANIM_COBCANNON_COB;
Image* PopLib::IMAGE_REANIM_COINGLOW;
Image* PopLib::IMAGE_REANIM_COIN_GOLD_DOLLAR;
Image* PopLib::IMAGE_REANIM_COIN_SILVER_DOLLAR;
Image* PopLib::IMAGE_REANIM_CORNPULT_BUTTER;
Image* PopLib::IMAGE_REANIM_CORNPULT_BUTTER_SPLAT;
Image* PopLib::IMAGE_REANIM_CORNPULT_KERNAL;
Image* PopLib::IMAGE_REANIM_CRAZYDAVE_MOUTH1;
Image* PopLib::IMAGE_REANIM_CRAZYDAVE_MOUTH4;
Image* PopLib::IMAGE_REANIM_CRAZYDAVE_MOUTH5;
Image* PopLib::IMAGE_REANIM_CRAZYDAVE_MOUTH6;
Image* PopLib::IMAGE_REANIM_DIAMOND;
Image* PopLib::IMAGE_REANIM_GARLIC_BODY2;
Image* PopLib::IMAGE_REANIM_GARLIC_BODY3;
Image* PopLib::IMAGE_REANIM_MELONPULT_MELON;
Image* PopLib::IMAGE_REANIM_POT_TOP_DARK;
Image* PopLib::IMAGE_REANIM_PUMPKIN_DAMAGE1;
Image* PopLib::IMAGE_REANIM_PUMPKIN_DAMAGE3;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_BG;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT;
Image* PopLib::IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS;
Image* PopLib::IMAGE_REANIM_STINKY_TURN3;
Image* PopLib::IMAGE_REANIM_TALLNUT_CRACKED1;
Image* PopLib::IMAGE_REANIM_TALLNUT_CRACKED2;
Image* PopLib::IMAGE_REANIM_TREE_BG;
Image* PopLib::IMAGE_REANIM_WALLNUT_BODY;
Image* PopLib::IMAGE_REANIM_WALLNUT_CRACKED1;
Image* PopLib::IMAGE_REANIM_WALLNUT_CRACKED2;
Image* PopLib::IMAGE_REANIM_WINTERMELON_PROJECTILE;
Image* PopLib::IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BUCKET1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BUCKET2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BUCKET3;
Image* PopLib::IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED;
Image* PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL;
Image* PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL;
Image* PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL;
Image* PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_CONE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_CONE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_CONE3;
Image* PopLib::IMAGE_REANIM_ZOMBIE_DANCER_INNERARM_HAND;
Image* PopLib::IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT;
Image* PopLib::IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3;
Image* PopLib::IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_FLAG1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_FLAG3;
Image* PopLib::IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET;
Image* PopLib::IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3;
Image* PopLib::IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND;
Image* PopLib::IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3;
Image* PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING;
Image* PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT;
Image* PopLib::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3;
Image* PopLib::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4;
Image* PopLib::IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE;
Image* PopLib::IMAGE_REANIM_ZOMBIE_IMP_ARM2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_JACKBOX_BOX;
Image* PopLib::IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_HAND;
Image* PopLib::IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_LADDER_1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_LADDER_5;
Image* PopLib::IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_MUSTACHE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_MUSTACHE3;
Image* PopLib::IMAGE_REANIM_ZOMBIE_OUTERARM_HAND;
Image* PopLib::IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER;
Image* PopLib::IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD;
Image* PopLib::IMAGE_REANIM_ZOMBIE_PAPER_PAPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_PAPER_PAPER3;
Image* PopLib::IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_SCREENDOOR1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_SCREENDOOR2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_SCREENDOOR3;
Image* PopLib::IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD;
Image* PopLib::IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND;
Image* PopLib::IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1;
Image* PopLib::IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2;
Image* PopLib::IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT;
Image* PopLib::IMAGE_ROCKSMALL;
Image* PopLib::IMAGE_SCARY_POT;
Image* PopLib::IMAGE_SEEDBANK;
Image* PopLib::IMAGE_SEEDCHOOSER_BACKGROUND;
Image* PopLib::IMAGE_SEEDCHOOSER_BUTTON;
Image* PopLib::IMAGE_SEEDCHOOSER_BUTTON2;
Image* PopLib::IMAGE_SEEDCHOOSER_BUTTON2_GLOW;
Image* PopLib::IMAGE_SEEDCHOOSER_BUTTON_DISABLED;
Image* PopLib::IMAGE_SEEDCHOOSER_BUTTON_GLOW;
Image* PopLib::IMAGE_SEEDCHOOSER_IMITATERADDON;
Image* PopLib::IMAGE_SEEDPACKETFLASH;
Image* PopLib::IMAGE_SEEDPACKETSILHOUETTE;
Image* PopLib::IMAGE_SEEDPACKET_LARGER;
Image* PopLib::IMAGE_SEEDS;
Image* PopLib::IMAGE_SELECTORSCREEN_ALMANAC;
Image* PopLib::IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT;
Image* PopLib::IMAGE_SELECTORSCREEN_HELP1;
Image* PopLib::IMAGE_SELECTORSCREEN_HELP2;
Image* PopLib::IMAGE_SELECTORSCREEN_LEVELNUMBERS;
Image* PopLib::IMAGE_SELECTORSCREEN_OPTIONS1;
Image* PopLib::IMAGE_SELECTORSCREEN_OPTIONS2;
Image* PopLib::IMAGE_SELECTORSCREEN_QUIT1;
Image* PopLib::IMAGE_SELECTORSCREEN_QUIT2;
Image* PopLib::IMAGE_SELECTORSCREEN_STORE;
Image* PopLib::IMAGE_SELECTORSCREEN_STOREHIGHLIGHT;
Image* PopLib::IMAGE_SELECTORSCREEN_ZENGARDEN;
Image* PopLib::IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT;
Image* PopLib::IMAGE_SHOVEL;
Image* PopLib::IMAGE_SHOVELBANK;
Image* PopLib::IMAGE_SHOVEL_HI_RES;
Image* PopLib::IMAGE_SLOTMACHINE_OVERLAY;
Image* PopLib::IMAGE_SNOWFLAKES;
Image* PopLib::IMAGE_SNOWPEA_PARTICLES;
Image* PopLib::IMAGE_SNOWPEA_PUFF;
Image* PopLib::IMAGE_SNOWPEA_SPLATS;
Image* PopLib::IMAGE_SPOTLIGHT;
Image* PopLib::IMAGE_SPOTLIGHT2;
Image* PopLib::IMAGE_STAR_PARTICLES;
Image* PopLib::IMAGE_STAR_SPLATS;
Image* PopLib::IMAGE_STORE_SPEECHBUBBLE;
Image* PopLib::IMAGE_STORE_SPEECHBUBBLE2;
Image* PopLib::IMAGE_SUNBANK;
Image* PopLib::IMAGE_SUNFLOWER_TROPHY;
Image* PopLib::IMAGE_TACO;
Image* PopLib::IMAGE_TOMBSTONES;
Image* PopLib::IMAGE_TOMBSTONE_MOUNDS;
Image* PopLib::IMAGE_TREEFOOD;
Image* PopLib::IMAGE_TROPHY;
Image* PopLib::IMAGE_TROPHY_HI_RES;
Image* PopLib::IMAGE_VASE_CHUNKS;
Image* PopLib::IMAGE_WALLNUTPARTICLESLARGE;
Image* PopLib::IMAGE_WALLNUTPARTICLESSMALL;
Image* PopLib::IMAGE_WALLNUT_BOWLINGSTRIPE;
Image* PopLib::IMAGE_WATERDROP;
Image* PopLib::IMAGE_WATERINGCAN;
Image* PopLib::IMAGE_WATERINGCANGOLD;
Image* PopLib::IMAGE_WATERPARTICLE;
Image* PopLib::IMAGE_WHITEPIXEL;
Image* PopLib::IMAGE_WHITEWATER;
Image* PopLib::IMAGE_WHITEWATER_SHADOW;
Image* PopLib::IMAGE_WINTERMELON_PARTICLES;
Image* PopLib::IMAGE_ZAMBONISMOKE;
Image* PopLib::IMAGE_ZENSHOPBUTTON;
Image* PopLib::IMAGE_ZENSHOPBUTTON_HIGHLIGHT;
Image* PopLib::IMAGE_ZEN_GARDENGLOVE;
Image* PopLib::IMAGE_ZEN_GOLDTOOLRETICLE;
Image* PopLib::IMAGE_ZEN_MONEYSIGN;
Image* PopLib::IMAGE_ZEN_NEED_ICONS;
Image* PopLib::IMAGE_ZEN_NEXTGARDEN;
Image* PopLib::IMAGE_ZEN_WHEELBARROW;
Image* PopLib::IMAGE_ZOMBIEBACKUPDANCERHEAD;
Image* PopLib::IMAGE_ZOMBIEBALLOONHEAD;
Image* PopLib::IMAGE_ZOMBIEBOBSLEDHEAD;
Image* PopLib::IMAGE_ZOMBIEDANCERHEAD;
Image* PopLib::IMAGE_ZOMBIEDIGGERARM;
Image* PopLib::IMAGE_ZOMBIEDIGGERHEAD;
Image* PopLib::IMAGE_ZOMBIEDOLPHINRIDERHEAD;
Image* PopLib::IMAGE_ZOMBIEFOOTBALLHEAD;
Image* PopLib::IMAGE_ZOMBIEFUTUREGLASSES;
Image* PopLib::IMAGE_ZOMBIEIMPHEAD;
Image* PopLib::IMAGE_ZOMBIEJACKBOXARM;
Image* PopLib::IMAGE_ZOMBIELADDERHEAD;
Image* PopLib::IMAGE_ZOMBIEPOGO;
Image* PopLib::IMAGE_ZOMBIEPOLEVAULTERHEAD;
Image* PopLib::IMAGE_ZOMBIEYETIHEAD;
Image* PopLib::IMAGE_ZOMBIE_BOBSLED1;
Image* PopLib::IMAGE_ZOMBIE_BOBSLED2;
Image* PopLib::IMAGE_ZOMBIE_BOBSLED3;
Image* PopLib::IMAGE_ZOMBIE_BOBSLED4;
Image* PopLib::IMAGE_ZOMBIE_BOBSLED_INSIDE;
Image* PopLib::IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES;
Image* PopLib::IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES;
Image* PopLib::IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES;
Image* PopLib::IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES;
Image* PopLib::IMAGE_ZOMBIE_NOTE_SMALL;
Image* PopLib::IMAGE_ZOMBIE_SEAWEED;
Image* PopLib::IMAGE_ZOMBOSS_PARTICLES;

bool PopLib::ExtractLoadingImagesResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		IMAGE_ALMANAC = aMgr.GetImageThrow("IMAGE_ALMANAC");
		IMAGE_ALMANAC_IMITATER = aMgr.GetImageThrow("IMAGE_ALMANAC_IMITATER");
		IMAGE_AWARDPICKUPGLOW = aMgr.GetImageThrow("IMAGE_AWARDPICKUPGLOW");
		IMAGE_BEGHOULED_TWIST_OVERLAY = aMgr.GetImageThrow("IMAGE_BEGHOULED_TWIST_OVERLAY");
		IMAGE_BRAIN = aMgr.GetImageThrow("IMAGE_BRAIN");
		IMAGE_BUG_SPRAY = aMgr.GetImageThrow("IMAGE_BUG_SPRAY");
		IMAGE_BUNGEECORD = aMgr.GetImageThrow("IMAGE_BUNGEECORD");
		IMAGE_BUNGEETARGET = aMgr.GetImageThrow("IMAGE_BUNGEETARGET");
		IMAGE_BUTTON_DOWN_LEFT = aMgr.GetImageThrow("IMAGE_BUTTON_DOWN_LEFT");
		IMAGE_BUTTON_DOWN_MIDDLE = aMgr.GetImageThrow("IMAGE_BUTTON_DOWN_MIDDLE");
		IMAGE_BUTTON_DOWN_RIGHT = aMgr.GetImageThrow("IMAGE_BUTTON_DOWN_RIGHT");
		IMAGE_BUTTON_LEFT = aMgr.GetImageThrow("IMAGE_BUTTON_LEFT");
		IMAGE_BUTTON_MIDDLE = aMgr.GetImageThrow("IMAGE_BUTTON_MIDDLE");
		IMAGE_BUTTON_RIGHT = aMgr.GetImageThrow("IMAGE_BUTTON_RIGHT");
		IMAGE_CARKEYS = aMgr.GetImageThrow("IMAGE_CARKEYS");
		IMAGE_CHOCOLATE = aMgr.GetImageThrow("IMAGE_CHOCOLATE");
		IMAGE_COBCANNON_POPCORN = aMgr.GetImageThrow("IMAGE_COBCANNON_POPCORN");
		IMAGE_COBCANNON_TARGET = aMgr.GetImageThrow("IMAGE_COBCANNON_TARGET");
		IMAGE_COINBANK = aMgr.GetImageThrow("IMAGE_COINBANK");
		IMAGE_CONVEYORBELT = aMgr.GetImageThrow("IMAGE_CONVEYORBELT");
		IMAGE_CONVEYORBELT_BACKDROP = aMgr.GetImageThrow("IMAGE_CONVEYORBELT_BACKDROP");
		IMAGE_CRATER = aMgr.GetImageThrow("IMAGE_CRATER");
		IMAGE_CRATER_FADING = aMgr.GetImageThrow("IMAGE_CRATER_FADING");
		IMAGE_CRATER_ROOF_CENTER = aMgr.GetImageThrow("IMAGE_CRATER_ROOF_CENTER");
		IMAGE_CRATER_ROOF_LEFT = aMgr.GetImageThrow("IMAGE_CRATER_ROOF_LEFT");
		IMAGE_CRATER_WATER_DAY = aMgr.GetImageThrow("IMAGE_CRATER_WATER_DAY");
		IMAGE_CRATER_WATER_NIGHT = aMgr.GetImageThrow("IMAGE_CRATER_WATER_NIGHT");
		IMAGE_DIALOG_BIGBOTTOMLEFT = aMgr.GetImageThrow("IMAGE_DIALOG_BIGBOTTOMLEFT");
		IMAGE_DIALOG_BIGBOTTOMMIDDLE = aMgr.GetImageThrow("IMAGE_DIALOG_BIGBOTTOMMIDDLE");
		IMAGE_DIALOG_BIGBOTTOMRIGHT = aMgr.GetImageThrow("IMAGE_DIALOG_BIGBOTTOMRIGHT");
		IMAGE_DIALOG_BOTTOMLEFT = aMgr.GetImageThrow("IMAGE_DIALOG_BOTTOMLEFT");
		IMAGE_DIALOG_BOTTOMMIDDLE = aMgr.GetImageThrow("IMAGE_DIALOG_BOTTOMMIDDLE");
		IMAGE_DIALOG_BOTTOMRIGHT = aMgr.GetImageThrow("IMAGE_DIALOG_BOTTOMRIGHT");
		IMAGE_DIALOG_CENTERLEFT = aMgr.GetImageThrow("IMAGE_DIALOG_CENTERLEFT");
		IMAGE_DIALOG_CENTERMIDDLE = aMgr.GetImageThrow("IMAGE_DIALOG_CENTERMIDDLE");
		IMAGE_DIALOG_CENTERRIGHT = aMgr.GetImageThrow("IMAGE_DIALOG_CENTERRIGHT");
		IMAGE_DIALOG_HEADER = aMgr.GetImageThrow("IMAGE_DIALOG_HEADER");
		IMAGE_DIALOG_TOPLEFT = aMgr.GetImageThrow("IMAGE_DIALOG_TOPLEFT");
		IMAGE_DIALOG_TOPMIDDLE = aMgr.GetImageThrow("IMAGE_DIALOG_TOPMIDDLE");
		IMAGE_DIALOG_TOPRIGHT = aMgr.GetImageThrow("IMAGE_DIALOG_TOPRIGHT");
		IMAGE_DIRTBIG = aMgr.GetImageThrow("IMAGE_DIRTBIG");
		IMAGE_DIRTSMALL = aMgr.GetImageThrow("IMAGE_DIRTSMALL");
		IMAGE_DOOMSHROOM_EXPLOSION_BASE = aMgr.GetImageThrow("IMAGE_DOOMSHROOM_EXPLOSION_BASE");
		IMAGE_DUST_PUFFS = aMgr.GetImageThrow("IMAGE_DUST_PUFFS");
		IMAGE_EDITBOX = aMgr.GetImageThrow("IMAGE_EDITBOX");
		IMAGE_FERTILIZER = aMgr.GetImageThrow("IMAGE_FERTILIZER");
		IMAGE_FLAGMETER = aMgr.GetImageThrow("IMAGE_FLAGMETER");
		IMAGE_FLAGMETERLEVELPROGRESS = aMgr.GetImageThrow("IMAGE_FLAGMETERLEVELPROGRESS");
		IMAGE_FLAGMETERPARTS = aMgr.GetImageThrow("IMAGE_FLAGMETERPARTS");
		IMAGE_ICE = aMgr.GetImageThrow("IMAGE_ICE");
		IMAGE_ICETRAP = aMgr.GetImageThrow("IMAGE_ICETRAP");
		IMAGE_ICETRAP2 = aMgr.GetImageThrow("IMAGE_ICETRAP2");
		IMAGE_ICETRAP_PARTICLES = aMgr.GetImageThrow("IMAGE_ICETRAP_PARTICLES");
		IMAGE_ICE_CAP = aMgr.GetImageThrow("IMAGE_ICE_CAP");
		IMAGE_ICE_SPARKLES = aMgr.GetImageThrow("IMAGE_ICE_SPARKLES");
		IMAGE_ICON_POOLCLEANER = aMgr.GetImageThrow("IMAGE_ICON_POOLCLEANER");
		IMAGE_ICON_RAKE = aMgr.GetImageThrow("IMAGE_ICON_RAKE");
		IMAGE_ICON_ROOFCLEANER = aMgr.GetImageThrow("IMAGE_ICON_ROOFCLEANER");
		IMAGE_IMITATERCLOUDS = aMgr.GetImageThrow("IMAGE_IMITATERCLOUDS");
		IMAGE_IMITATERPUFFS = aMgr.GetImageThrow("IMAGE_IMITATERPUFFS");
		IMAGE_IMITATERSEED = aMgr.GetImageThrow("IMAGE_IMITATERSEED");
		IMAGE_IMITATERSEEDDISABLED = aMgr.GetImageThrow("IMAGE_IMITATERSEEDDISABLED");
		IMAGE_MELONPULT_PARTICLES = aMgr.GetImageThrow("IMAGE_MELONPULT_PARTICLES");
		IMAGE_MINIGAME_TROPHY = aMgr.GetImageThrow("IMAGE_MINIGAME_TROPHY");
		IMAGE_MONEYBAG = aMgr.GetImageThrow("IMAGE_MONEYBAG");
		IMAGE_MONEYBAG_HI_RES = aMgr.GetImageThrow("IMAGE_MONEYBAG_HI_RES");
		IMAGE_NIGHT_GRAVE_GRAPHIC = aMgr.GetImageThrow("IMAGE_NIGHT_GRAVE_GRAPHIC");
		IMAGE_OPTIONS_BACKTOGAMEBUTTON0 = aMgr.GetImageThrow("IMAGE_OPTIONS_BACKTOGAMEBUTTON0");
		IMAGE_OPTIONS_BACKTOGAMEBUTTON2 = aMgr.GetImageThrow("IMAGE_OPTIONS_BACKTOGAMEBUTTON2");
		IMAGE_OPTIONS_CHECKBOX0 = aMgr.GetImageThrow("IMAGE_OPTIONS_CHECKBOX0");
		IMAGE_OPTIONS_CHECKBOX1 = aMgr.GetImageThrow("IMAGE_OPTIONS_CHECKBOX1");
		IMAGE_OPTIONS_MENUBACK = aMgr.GetImageThrow("IMAGE_OPTIONS_MENUBACK");
		IMAGE_OPTIONS_SLIDERKNOB2 = aMgr.GetImageThrow("IMAGE_OPTIONS_SLIDERKNOB2");
		IMAGE_OPTIONS_SLIDERSLOT = aMgr.GetImageThrow("IMAGE_OPTIONS_SLIDERSLOT");
		IMAGE_PACKET_PLANTS = aMgr.GetImageThrow("IMAGE_PACKET_PLANTS");
		IMAGE_PEA_PARTICLES = aMgr.GetImageThrow("IMAGE_PEA_PARTICLES");
		IMAGE_PEA_SHADOWS = aMgr.GetImageThrow("IMAGE_PEA_SHADOWS");
		IMAGE_PEA_SPLATS = aMgr.GetImageThrow("IMAGE_PEA_SPLATS");
		IMAGE_PHONOGRAPH = aMgr.GetImageThrow("IMAGE_PHONOGRAPH");
		IMAGE_PINATA = aMgr.GetImageThrow("IMAGE_PINATA");
		IMAGE_PLANTSHADOW = aMgr.GetImageThrow("IMAGE_PLANTSHADOW");
		IMAGE_PLANTSHADOW2 = aMgr.GetImageThrow("IMAGE_PLANTSHADOW2");
		IMAGE_PLANTSPEECHBUBBLE = aMgr.GetImageThrow("IMAGE_PLANTSPEECHBUBBLE");
		IMAGE_POOL = aMgr.GetImageThrow("IMAGE_POOL");
		IMAGE_POOLSPARKLY = aMgr.GetImageThrow("IMAGE_POOLSPARKLY");
		IMAGE_POOL_BASE = aMgr.GetImageThrow("IMAGE_POOL_BASE");
		IMAGE_POOL_BASE_NIGHT = aMgr.GetImageThrow("IMAGE_POOL_BASE_NIGHT");
		IMAGE_POOL_CAUSTIC_EFFECT = aMgr.GetImageThrow("IMAGE_POOL_CAUSTIC_EFFECT");
		IMAGE_POOL_NIGHT = aMgr.GetImageThrow("IMAGE_POOL_NIGHT");
		IMAGE_POOL_SHADING = aMgr.GetImageThrow("IMAGE_POOL_SHADING");
		IMAGE_POOL_SHADING_NIGHT = aMgr.GetImageThrow("IMAGE_POOL_SHADING_NIGHT");
		IMAGE_POTATOMINE_PARTICLES = aMgr.GetImageThrow("IMAGE_POTATOMINE_PARTICLES");
		IMAGE_PRESENT = aMgr.GetImageThrow("IMAGE_PRESENT");
		IMAGE_PRESENTOPEN = aMgr.GetImageThrow("IMAGE_PRESENTOPEN");
		IMAGE_PROJECTILECACTUS = aMgr.GetImageThrow("IMAGE_PROJECTILECACTUS");
		IMAGE_PROJECTILEPEA = aMgr.GetImageThrow("IMAGE_PROJECTILEPEA");
		IMAGE_PROJECTILESNOWPEA = aMgr.GetImageThrow("IMAGE_PROJECTILESNOWPEA");
		IMAGE_PROJECTILE_STAR = aMgr.GetImageThrow("IMAGE_PROJECTILE_STAR");
		IMAGE_PUFFSHROOM_PUFF1 = aMgr.GetImageThrow("IMAGE_PUFFSHROOM_PUFF1");
		IMAGE_RAIN = aMgr.GetImageThrow("IMAGE_RAIN");
		IMAGE_REANIM_CABBAGEPULT_CABBAGE = aMgr.GetImageThrow("IMAGE_REANIM_CABBAGEPULT_CABBAGE");
		IMAGE_REANIM_COBCANNON_COB = aMgr.GetImageThrow("IMAGE_REANIM_COBCANNON_COB");
		IMAGE_REANIM_COINGLOW = aMgr.GetImageThrow("IMAGE_REANIM_COINGLOW");
		IMAGE_REANIM_COIN_GOLD_DOLLAR = aMgr.GetImageThrow("IMAGE_REANIM_COIN_GOLD_DOLLAR");
		IMAGE_REANIM_COIN_SILVER_DOLLAR = aMgr.GetImageThrow("IMAGE_REANIM_COIN_SILVER_DOLLAR");
		IMAGE_REANIM_CORNPULT_BUTTER = aMgr.GetImageThrow("IMAGE_REANIM_CORNPULT_BUTTER");
		IMAGE_REANIM_CORNPULT_BUTTER_SPLAT = aMgr.GetImageThrow("IMAGE_REANIM_CORNPULT_BUTTER_SPLAT");
		IMAGE_REANIM_CORNPULT_KERNAL = aMgr.GetImageThrow("IMAGE_REANIM_CORNPULT_KERNAL");
		IMAGE_REANIM_CRAZYDAVE_MOUTH1 = aMgr.GetImageThrow("IMAGE_REANIM_CRAZYDAVE_MOUTH1");
		IMAGE_REANIM_CRAZYDAVE_MOUTH4 = aMgr.GetImageThrow("IMAGE_REANIM_CRAZYDAVE_MOUTH4");
		IMAGE_REANIM_CRAZYDAVE_MOUTH5 = aMgr.GetImageThrow("IMAGE_REANIM_CRAZYDAVE_MOUTH5");
		IMAGE_REANIM_CRAZYDAVE_MOUTH6 = aMgr.GetImageThrow("IMAGE_REANIM_CRAZYDAVE_MOUTH6");
		IMAGE_REANIM_DIAMOND = aMgr.GetImageThrow("IMAGE_REANIM_DIAMOND");
		IMAGE_REANIM_GARLIC_BODY2 = aMgr.GetImageThrow("IMAGE_REANIM_GARLIC_BODY2");
		IMAGE_REANIM_GARLIC_BODY3 = aMgr.GetImageThrow("IMAGE_REANIM_GARLIC_BODY3");
		IMAGE_REANIM_MELONPULT_MELON = aMgr.GetImageThrow("IMAGE_REANIM_MELONPULT_MELON");
		IMAGE_REANIM_POT_TOP_DARK = aMgr.GetImageThrow("IMAGE_REANIM_POT_TOP_DARK");
		IMAGE_REANIM_PUMPKIN_DAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_PUMPKIN_DAMAGE1");
		IMAGE_REANIM_PUMPKIN_DAMAGE3 = aMgr.GetImageThrow("IMAGE_REANIM_PUMPKIN_DAMAGE3");
		IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON");
		IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT");
		IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW");
		IMAGE_REANIM_SELECTORSCREEN_BG = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_BG");
		IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON");
		IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT");
		IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW");
		IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON");
		IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT");
		IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON");
		IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT");
		IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON");
		IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT");
		IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS = aMgr.GetImageThrow("IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS");
		IMAGE_REANIM_STINKY_TURN3 = aMgr.GetImageThrow("IMAGE_REANIM_STINKY_TURN3");
		IMAGE_REANIM_TALLNUT_CRACKED1 = aMgr.GetImageThrow("IMAGE_REANIM_TALLNUT_CRACKED1");
		IMAGE_REANIM_TALLNUT_CRACKED2 = aMgr.GetImageThrow("IMAGE_REANIM_TALLNUT_CRACKED2");
		IMAGE_REANIM_TREE_BG = aMgr.GetImageThrow("IMAGE_REANIM_TREE_BG");
		IMAGE_REANIM_WALLNUT_BODY = aMgr.GetImageThrow("IMAGE_REANIM_WALLNUT_BODY");
		IMAGE_REANIM_WALLNUT_CRACKED1 = aMgr.GetImageThrow("IMAGE_REANIM_WALLNUT_CRACKED1");
		IMAGE_REANIM_WALLNUT_CRACKED2 = aMgr.GetImageThrow("IMAGE_REANIM_WALLNUT_CRACKED2");
		IMAGE_REANIM_WINTERMELON_PROJECTILE = aMgr.GetImageThrow("IMAGE_REANIM_WINTERMELON_PROJECTILE");
		IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE = aMgr.GetImageThrow("IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE");
		IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND");
		IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE");
		IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1");
		IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2");
		IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1");
		IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2");
		IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL");
		IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1");
		IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2");
		IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE");
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1");
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2");
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1");
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2");
		IMAGE_REANIM_ZOMBIE_BUCKET1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BUCKET1");
		IMAGE_REANIM_ZOMBIE_BUCKET2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BUCKET2");
		IMAGE_REANIM_ZOMBIE_BUCKET3 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BUCKET3");
		IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED");
		IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL");
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_CATAPULT_POLE");
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE");
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL");
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL");
		IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE");
		IMAGE_REANIM_ZOMBIE_CONE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_CONE1");
		IMAGE_REANIM_ZOMBIE_CONE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_CONE2");
		IMAGE_REANIM_ZOMBIE_CONE3 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_CONE3");
		IMAGE_REANIM_ZOMBIE_DANCER_INNERARM_HAND = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_DANCER_INNERARM_HAND");
		IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT");
		IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2");
		IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3");
		IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE");
		IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_FLAG1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_FLAG1");
		IMAGE_REANIM_ZOMBIE_FLAG3 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_FLAG3");
		IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET");
		IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2");
		IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3");
		IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND");
		IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2");
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3");
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING");
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2");
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2");
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE");
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE");
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2");
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE");
		IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT");
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1");
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2");
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3");
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4");
		IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE");
		IMAGE_REANIM_ZOMBIE_IMP_ARM2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_IMP_ARM2");
		IMAGE_REANIM_ZOMBIE_JACKBOX_BOX = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_JACKBOX_BOX");
		IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2");
		IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_HAND = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_HAND");
		IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_LADDER_1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_LADDER_1");
		IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1");
		IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2");
		IMAGE_REANIM_ZOMBIE_LADDER_5 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_LADDER_5");
		IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_MUSTACHE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_MUSTACHE2");
		IMAGE_REANIM_ZOMBIE_MUSTACHE3 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_MUSTACHE3");
		IMAGE_REANIM_ZOMBIE_OUTERARM_HAND = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_OUTERARM_HAND");
		IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER");
		IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD");
		IMAGE_REANIM_ZOMBIE_PAPER_PAPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_PAPER_PAPER2");
		IMAGE_REANIM_ZOMBIE_PAPER_PAPER3 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_PAPER_PAPER3");
		IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1");
		IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2");
		IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1");
		IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2");
		IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2");
		IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_SCREENDOOR1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_SCREENDOOR1");
		IMAGE_REANIM_ZOMBIE_SCREENDOOR2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_SCREENDOOR2");
		IMAGE_REANIM_ZOMBIE_SCREENDOOR3 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_SCREENDOOR3");
		IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD");
		IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND");
		IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2");
		IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1");
		IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2");
		IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1");
		IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2 = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2");
		IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT = aMgr.GetImageThrow("IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT");
		IMAGE_ROCKSMALL = aMgr.GetImageThrow("IMAGE_ROCKSMALL");
		IMAGE_SCARY_POT = aMgr.GetImageThrow("IMAGE_SCARY_POT");
		IMAGE_SEEDBANK = aMgr.GetImageThrow("IMAGE_SEEDBANK");
		IMAGE_SEEDCHOOSER_BACKGROUND = aMgr.GetImageThrow("IMAGE_SEEDCHOOSER_BACKGROUND");
		IMAGE_SEEDCHOOSER_BUTTON = aMgr.GetImageThrow("IMAGE_SEEDCHOOSER_BUTTON");
		IMAGE_SEEDCHOOSER_BUTTON2 = aMgr.GetImageThrow("IMAGE_SEEDCHOOSER_BUTTON2");
		IMAGE_SEEDCHOOSER_BUTTON2_GLOW = aMgr.GetImageThrow("IMAGE_SEEDCHOOSER_BUTTON2_GLOW");
		IMAGE_SEEDCHOOSER_BUTTON_DISABLED = aMgr.GetImageThrow("IMAGE_SEEDCHOOSER_BUTTON_DISABLED");
		IMAGE_SEEDCHOOSER_BUTTON_GLOW = aMgr.GetImageThrow("IMAGE_SEEDCHOOSER_BUTTON_GLOW");
		IMAGE_SEEDCHOOSER_IMITATERADDON = aMgr.GetImageThrow("IMAGE_SEEDCHOOSER_IMITATERADDON");
		IMAGE_SEEDPACKETFLASH = aMgr.GetImageThrow("IMAGE_SEEDPACKETFLASH");
		IMAGE_SEEDPACKETSILHOUETTE = aMgr.GetImageThrow("IMAGE_SEEDPACKETSILHOUETTE");
		IMAGE_SEEDPACKET_LARGER = aMgr.GetImageThrow("IMAGE_SEEDPACKET_LARGER");
		IMAGE_SEEDS = aMgr.GetImageThrow("IMAGE_SEEDS");
		IMAGE_SELECTORSCREEN_ALMANAC = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_ALMANAC");
		IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT");
		IMAGE_SELECTORSCREEN_HELP1 = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_HELP1");
		IMAGE_SELECTORSCREEN_HELP2 = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_HELP2");
		IMAGE_SELECTORSCREEN_LEVELNUMBERS = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_LEVELNUMBERS");
		IMAGE_SELECTORSCREEN_OPTIONS1 = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_OPTIONS1");
		IMAGE_SELECTORSCREEN_OPTIONS2 = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_OPTIONS2");
		IMAGE_SELECTORSCREEN_QUIT1 = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_QUIT1");
		IMAGE_SELECTORSCREEN_QUIT2 = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_QUIT2");
		IMAGE_SELECTORSCREEN_STORE = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_STORE");
		IMAGE_SELECTORSCREEN_STOREHIGHLIGHT = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_STOREHIGHLIGHT");
		IMAGE_SELECTORSCREEN_ZENGARDEN = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_ZENGARDEN");
		IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT = aMgr.GetImageThrow("IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT");
		IMAGE_SHOVEL = aMgr.GetImageThrow("IMAGE_SHOVEL");
		IMAGE_SHOVELBANK = aMgr.GetImageThrow("IMAGE_SHOVELBANK");
		IMAGE_SHOVEL_HI_RES = aMgr.GetImageThrow("IMAGE_SHOVEL_HI_RES");
		IMAGE_SLOTMACHINE_OVERLAY = aMgr.GetImageThrow("IMAGE_SLOTMACHINE_OVERLAY");
		IMAGE_SNOWFLAKES = aMgr.GetImageThrow("IMAGE_SNOWFLAKES");
		IMAGE_SNOWPEA_PARTICLES = aMgr.GetImageThrow("IMAGE_SNOWPEA_PARTICLES");
		IMAGE_SNOWPEA_PUFF = aMgr.GetImageThrow("IMAGE_SNOWPEA_PUFF");
		IMAGE_SNOWPEA_SPLATS = aMgr.GetImageThrow("IMAGE_SNOWPEA_SPLATS");
		IMAGE_SPOTLIGHT = aMgr.GetImageThrow("IMAGE_SPOTLIGHT");
		IMAGE_SPOTLIGHT2 = aMgr.GetImageThrow("IMAGE_SPOTLIGHT2");
		IMAGE_STAR_PARTICLES = aMgr.GetImageThrow("IMAGE_STAR_PARTICLES");
		IMAGE_STAR_SPLATS = aMgr.GetImageThrow("IMAGE_STAR_SPLATS");
		IMAGE_STORE_SPEECHBUBBLE = aMgr.GetImageThrow("IMAGE_STORE_SPEECHBUBBLE");
		IMAGE_STORE_SPEECHBUBBLE2 = aMgr.GetImageThrow("IMAGE_STORE_SPEECHBUBBLE2");
		IMAGE_SUNBANK = aMgr.GetImageThrow("IMAGE_SUNBANK");
		IMAGE_SUNFLOWER_TROPHY = aMgr.GetImageThrow("IMAGE_SUNFLOWER_TROPHY");
		IMAGE_TACO = aMgr.GetImageThrow("IMAGE_TACO");
		IMAGE_TOMBSTONES = aMgr.GetImageThrow("IMAGE_TOMBSTONES");
		IMAGE_TOMBSTONE_MOUNDS = aMgr.GetImageThrow("IMAGE_TOMBSTONE_MOUNDS");
		IMAGE_TREEFOOD = aMgr.GetImageThrow("IMAGE_TREEFOOD");
		IMAGE_TROPHY = aMgr.GetImageThrow("IMAGE_TROPHY");
		IMAGE_TROPHY_HI_RES = aMgr.GetImageThrow("IMAGE_TROPHY_HI_RES");
		IMAGE_VASE_CHUNKS = aMgr.GetImageThrow("IMAGE_VASE_CHUNKS");
		IMAGE_WALLNUTPARTICLESLARGE = aMgr.GetImageThrow("IMAGE_WALLNUTPARTICLESLARGE");
		IMAGE_WALLNUTPARTICLESSMALL = aMgr.GetImageThrow("IMAGE_WALLNUTPARTICLESSMALL");
		IMAGE_WALLNUT_BOWLINGSTRIPE = aMgr.GetImageThrow("IMAGE_WALLNUT_BOWLINGSTRIPE");
		IMAGE_WATERDROP = aMgr.GetImageThrow("IMAGE_WATERDROP");
		IMAGE_WATERINGCAN = aMgr.GetImageThrow("IMAGE_WATERINGCAN");
		IMAGE_WATERINGCANGOLD = aMgr.GetImageThrow("IMAGE_WATERINGCANGOLD");
		IMAGE_WATERPARTICLE = aMgr.GetImageThrow("IMAGE_WATERPARTICLE");
		IMAGE_WHITEPIXEL = aMgr.GetImageThrow("IMAGE_WHITEPIXEL");
		IMAGE_WHITEWATER = aMgr.GetImageThrow("IMAGE_WHITEWATER");
		IMAGE_WHITEWATER_SHADOW = aMgr.GetImageThrow("IMAGE_WHITEWATER_SHADOW");
		IMAGE_WINTERMELON_PARTICLES = aMgr.GetImageThrow("IMAGE_WINTERMELON_PARTICLES");
		IMAGE_ZAMBONISMOKE = aMgr.GetImageThrow("IMAGE_ZAMBONISMOKE");
		IMAGE_ZENSHOPBUTTON = aMgr.GetImageThrow("IMAGE_ZENSHOPBUTTON");
		IMAGE_ZENSHOPBUTTON_HIGHLIGHT = aMgr.GetImageThrow("IMAGE_ZENSHOPBUTTON_HIGHLIGHT");
		IMAGE_ZEN_GARDENGLOVE = aMgr.GetImageThrow("IMAGE_ZEN_GARDENGLOVE");
		IMAGE_ZEN_GOLDTOOLRETICLE = aMgr.GetImageThrow("IMAGE_ZEN_GOLDTOOLRETICLE");
		IMAGE_ZEN_MONEYSIGN = aMgr.GetImageThrow("IMAGE_ZEN_MONEYSIGN");
		IMAGE_ZEN_NEED_ICONS = aMgr.GetImageThrow("IMAGE_ZEN_NEED_ICONS");
		IMAGE_ZEN_NEXTGARDEN = aMgr.GetImageThrow("IMAGE_ZEN_NEXTGARDEN");
		IMAGE_ZEN_WHEELBARROW = aMgr.GetImageThrow("IMAGE_ZEN_WHEELBARROW");
		IMAGE_ZOMBIEBACKUPDANCERHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIEBACKUPDANCERHEAD");
		IMAGE_ZOMBIEBALLOONHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIEBALLOONHEAD");
		IMAGE_ZOMBIEBOBSLEDHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIEBOBSLEDHEAD");
		IMAGE_ZOMBIEDANCERHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIEDANCERHEAD");
		IMAGE_ZOMBIEDIGGERARM = aMgr.GetImageThrow("IMAGE_ZOMBIEDIGGERARM");
		IMAGE_ZOMBIEDIGGERHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIEDIGGERHEAD");
		IMAGE_ZOMBIEDOLPHINRIDERHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIEDOLPHINRIDERHEAD");
		IMAGE_ZOMBIEFOOTBALLHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIEFOOTBALLHEAD");
		IMAGE_ZOMBIEFUTUREGLASSES = aMgr.GetImageThrow("IMAGE_ZOMBIEFUTUREGLASSES");
		IMAGE_ZOMBIEIMPHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIEIMPHEAD");
		IMAGE_ZOMBIEJACKBOXARM = aMgr.GetImageThrow("IMAGE_ZOMBIEJACKBOXARM");
		IMAGE_ZOMBIELADDERHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIELADDERHEAD");
		IMAGE_ZOMBIEPOGO = aMgr.GetImageThrow("IMAGE_ZOMBIEPOGO");
		IMAGE_ZOMBIEPOLEVAULTERHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIEPOLEVAULTERHEAD");
		IMAGE_ZOMBIEYETIHEAD = aMgr.GetImageThrow("IMAGE_ZOMBIEYETIHEAD");
		IMAGE_ZOMBIE_BOBSLED1 = aMgr.GetImageThrow("IMAGE_ZOMBIE_BOBSLED1");
		IMAGE_ZOMBIE_BOBSLED2 = aMgr.GetImageThrow("IMAGE_ZOMBIE_BOBSLED2");
		IMAGE_ZOMBIE_BOBSLED3 = aMgr.GetImageThrow("IMAGE_ZOMBIE_BOBSLED3");
		IMAGE_ZOMBIE_BOBSLED4 = aMgr.GetImageThrow("IMAGE_ZOMBIE_BOBSLED4");
		IMAGE_ZOMBIE_BOBSLED_INSIDE = aMgr.GetImageThrow("IMAGE_ZOMBIE_BOBSLED_INSIDE");
		IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES = aMgr.GetImageThrow("IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES");
		IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES = aMgr.GetImageThrow("IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES");
		IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES = aMgr.GetImageThrow("IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES");
		IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES = aMgr.GetImageThrow("IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES");
		IMAGE_ZOMBIE_NOTE_SMALL = aMgr.GetImageThrow("IMAGE_ZOMBIE_NOTE_SMALL");
		IMAGE_ZOMBIE_SEAWEED = aMgr.GetImageThrow("IMAGE_ZOMBIE_SEAWEED");
		IMAGE_ZOMBOSS_PARTICLES = aMgr.GetImageThrow("IMAGE_ZOMBOSS_PARTICLES");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LoadingSounds Resources
int PopLib::SOUND_AWOOGA;
int PopLib::SOUND_BALLOONINFLATE;
int PopLib::SOUND_BALLOON_POP;
int PopLib::SOUND_BASKETBALL;
int PopLib::SOUND_BIGCHOMP;
int PopLib::SOUND_BLEEP;
int PopLib::SOUND_BLOVER;
int PopLib::SOUND_BOING;
int PopLib::SOUND_BONK;
int PopLib::SOUND_BOSSBOULDERATTACK;
int PopLib::SOUND_BOSSEXPLOSION;
int PopLib::SOUND_BOWLING;
int PopLib::SOUND_BOWLINGIMPACT;
int PopLib::SOUND_BOWLINGIMPACT2;
int PopLib::SOUND_BUGSPRAY;
int PopLib::SOUND_BUNGEE_SCREAM;
int PopLib::SOUND_BUNGEE_SCREAM2;
int PopLib::SOUND_BUNGEE_SCREAM3;
int PopLib::SOUND_BUTTER;
int PopLib::SOUND_BUZZER;
int PopLib::SOUND_CERAMIC;
int PopLib::SOUND_CHERRYBOMB;
int PopLib::SOUND_CHIME;
int PopLib::SOUND_CHOMP;
int PopLib::SOUND_CHOMP2;
int PopLib::SOUND_CHOMPSOFT;
int PopLib::SOUND_COBLAUNCH;
int PopLib::SOUND_COFFEE;
int PopLib::SOUND_COIN;
int PopLib::SOUND_CRAZYDAVECRAZY;
int PopLib::SOUND_CRAZYDAVEEXTRALONG1;
int PopLib::SOUND_CRAZYDAVEEXTRALONG2;
int PopLib::SOUND_CRAZYDAVEEXTRALONG3;
int PopLib::SOUND_CRAZYDAVELONG1;
int PopLib::SOUND_CRAZYDAVELONG2;
int PopLib::SOUND_CRAZYDAVELONG3;
int PopLib::SOUND_CRAZYDAVESCREAM;
int PopLib::SOUND_CRAZYDAVESCREAM2;
int PopLib::SOUND_CRAZYDAVESHORT1;
int PopLib::SOUND_CRAZYDAVESHORT2;
int PopLib::SOUND_CRAZYDAVESHORT3;
int PopLib::SOUND_DANCER;
int PopLib::SOUND_DIAMOND;
int PopLib::SOUND_DIGGER_ZOMBIE;
int PopLib::SOUND_DIRT_RISE;
int PopLib::SOUND_DOLPHIN_APPEARS;
int PopLib::SOUND_DOLPHIN_BEFORE_JUMPING;
int PopLib::SOUND_DOOMSHROOM;
int PopLib::SOUND_EVILLAUGH;
int PopLib::SOUND_EXPLOSION;
int PopLib::SOUND_FERTILIZER;
int PopLib::SOUND_FINALFANFARE;
int PopLib::SOUND_FINALWAVE;
int PopLib::SOUND_FIREPEA;
int PopLib::SOUND_FLOOP;
int PopLib::SOUND_FROZEN;
int PopLib::SOUND_FUME;
int PopLib::SOUND_GARGANTUAR_THUMP;
int PopLib::SOUND_GARGANTUDEATH;
int PopLib::SOUND_GRASSSTEP;
int PopLib::SOUND_GRAVEBUSTERCHOMP;
int PopLib::SOUND_GRAVEBUTTON;
int PopLib::SOUND_GRAVESTONE_RUMBLE;
int PopLib::SOUND_GROAN;
int PopLib::SOUND_GROAN2;
int PopLib::SOUND_GROAN3;
int PopLib::SOUND_GROAN4;
int PopLib::SOUND_GROAN5;
int PopLib::SOUND_GROAN6;
int PopLib::SOUND_GULP;
int PopLib::SOUND_HATCHBACK_CLOSE;
int PopLib::SOUND_HATCHBACK_OPEN;
int PopLib::SOUND_HUGE_WAVE;
int PopLib::SOUND_HYDRAULIC;
int PopLib::SOUND_HYDRAULIC_SHORT;
int PopLib::SOUND_IGNITE;
int PopLib::SOUND_IGNITE2;
int PopLib::SOUND_IMP;
int PopLib::SOUND_IMP2;
int PopLib::SOUND_JACKINTHEBOX;
int PopLib::SOUND_JACK_SURPRISE;
int PopLib::SOUND_JACK_SURPRISE2;
int PopLib::SOUND_JALAPENO;
int PopLib::SOUND_JUICY;
int PopLib::SOUND_KERNELPULT;
int PopLib::SOUND_KERNELPULT2;
int PopLib::SOUND_LADDER_ZOMBIE;
int PopLib::SOUND_LAWNMOWER;
int PopLib::SOUND_LIGHTFILL;
int PopLib::SOUND_LIMBS_POP;
int PopLib::SOUND_LOSEMUSIC;
int PopLib::SOUND_LOWGROAN;
int PopLib::SOUND_LOWGROAN2;
int PopLib::SOUND_MAGNETSHROOM;
int PopLib::SOUND_MELONIMPACT;
int PopLib::SOUND_MELONIMPACT2;
int PopLib::SOUND_MINDCONTROLLED;
int PopLib::SOUND_MONEYFALLS;
int PopLib::SOUND_NEWSPAPER_RARRGH;
int PopLib::SOUND_NEWSPAPER_RARRGH2;
int PopLib::SOUND_NEWSPAPER_RIP;
int PopLib::SOUND_PAPER;
int PopLib::SOUND_PAUSE;
int PopLib::SOUND_PHONOGRAPH;
int PopLib::SOUND_PLANT;
int PopLib::SOUND_PLANT2;
int PopLib::SOUND_PLANTERN;
int PopLib::SOUND_PLANTGROW;
int PopLib::SOUND_PLANT_WATER;
int PopLib::SOUND_PLASTICHIT;
int PopLib::SOUND_PLASTICHIT2;
int PopLib::SOUND_POGO_ZOMBIE;
int PopLib::SOUND_POINTS;
int PopLib::SOUND_POLEVAULT;
int PopLib::SOUND_POOL_CLEANER;
int PopLib::SOUND_PORTAL;
int PopLib::SOUND_POTATO_MINE;
int PopLib::SOUND_PRIZE;
int PopLib::SOUND_PUFF;
int PopLib::SOUND_RAIN;
int PopLib::SOUND_READYSETPLANT;
int PopLib::SOUND_REVERSE_EXPLOSION;
int PopLib::SOUND_ROLL_IN;
int PopLib::SOUND_RVTHROW;
int PopLib::SOUND_SCREAM;
int PopLib::SOUND_SEEDLIFT;
int PopLib::SOUND_SHIELDHIT;
int PopLib::SOUND_SHIELDHIT2;
int PopLib::SOUND_SHOOP;
int PopLib::SOUND_SHOVEL;
int PopLib::SOUND_SIREN;
int PopLib::SOUND_SLOT_MACHINE;
int PopLib::SOUND_SLURP;
int PopLib::SOUND_SNOW_PEA_SPARKLES;
int PopLib::SOUND_SPLAT;
int PopLib::SOUND_SPLAT2;
int PopLib::SOUND_SPLAT3;
int PopLib::SOUND_SQUASH_HMM;
int PopLib::SOUND_SQUASH_HMM2;
int PopLib::SOUND_SUKHBIR;
int PopLib::SOUND_SUKHBIR2;
int PopLib::SOUND_SUKHBIR3;
int PopLib::SOUND_SUKHBIR4;
int PopLib::SOUND_SUKHBIR5;
int PopLib::SOUND_SUKHBIR6;
int PopLib::SOUND_SWING;
int PopLib::SOUND_TAP;
int PopLib::SOUND_TAP2;
int PopLib::SOUND_TAPGLASS;
int PopLib::SOUND_THROW;
int PopLib::SOUND_THROW2;
int PopLib::SOUND_THUNDER;
int PopLib::SOUND_VASE_BREAKING;
int PopLib::SOUND_WAKEUP;
int PopLib::SOUND_WATERING;
int PopLib::SOUND_WINMUSIC;
int PopLib::SOUND_YUCK;
int PopLib::SOUND_YUCK2;
int PopLib::SOUND_ZAMBONI;
int PopLib::SOUND_ZOMBAQUARIUM_DIE;
int PopLib::SOUND_ZOMBIESPLASH;
int PopLib::SOUND_ZOMBIE_ENTERING_WATER;
int PopLib::SOUND_ZOMBIE_FALLING_1;
int PopLib::SOUND_ZOMBIE_FALLING_2;

bool PopLib::ExtractLoadingSoundsResources(ResourceManager* theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager& aMgr = *theManager;
	try
	{
		SOUND_AWOOGA = aMgr.GetSoundThrow("SOUND_AWOOGA");
		SOUND_BALLOONINFLATE = aMgr.GetSoundThrow("SOUND_BALLOONINFLATE");
		SOUND_BALLOON_POP = aMgr.GetSoundThrow("SOUND_BALLOON_POP");
		SOUND_BASKETBALL = aMgr.GetSoundThrow("SOUND_BASKETBALL");
		SOUND_BIGCHOMP = aMgr.GetSoundThrow("SOUND_BIGCHOMP");
		SOUND_BLEEP = aMgr.GetSoundThrow("SOUND_BLEEP");
		SOUND_BLOVER = aMgr.GetSoundThrow("SOUND_BLOVER");
		SOUND_BOING = aMgr.GetSoundThrow("SOUND_BOING");
		SOUND_BONK = aMgr.GetSoundThrow("SOUND_BONK");
		SOUND_BOSSBOULDERATTACK = aMgr.GetSoundThrow("SOUND_BOSSBOULDERATTACK");
		SOUND_BOSSEXPLOSION = aMgr.GetSoundThrow("SOUND_BOSSEXPLOSION");
		SOUND_BOWLING = aMgr.GetSoundThrow("SOUND_BOWLING");
		SOUND_BOWLINGIMPACT = aMgr.GetSoundThrow("SOUND_BOWLINGIMPACT");
		SOUND_BOWLINGIMPACT2 = aMgr.GetSoundThrow("SOUND_BOWLINGIMPACT2");
		SOUND_BUGSPRAY = aMgr.GetSoundThrow("SOUND_BUGSPRAY");
		SOUND_BUNGEE_SCREAM = aMgr.GetSoundThrow("SOUND_BUNGEE_SCREAM");
		SOUND_BUNGEE_SCREAM2 = aMgr.GetSoundThrow("SOUND_BUNGEE_SCREAM2");
		SOUND_BUNGEE_SCREAM3 = aMgr.GetSoundThrow("SOUND_BUNGEE_SCREAM3");
		SOUND_BUTTER = aMgr.GetSoundThrow("SOUND_BUTTER");
		SOUND_BUZZER = aMgr.GetSoundThrow("SOUND_BUZZER");
		SOUND_CERAMIC = aMgr.GetSoundThrow("SOUND_CERAMIC");
		SOUND_CHERRYBOMB = aMgr.GetSoundThrow("SOUND_CHERRYBOMB");
		SOUND_CHIME = aMgr.GetSoundThrow("SOUND_CHIME");
		SOUND_CHOMP = aMgr.GetSoundThrow("SOUND_CHOMP");
		SOUND_CHOMP2 = aMgr.GetSoundThrow("SOUND_CHOMP2");
		SOUND_CHOMPSOFT = aMgr.GetSoundThrow("SOUND_CHOMPSOFT");
		SOUND_COBLAUNCH = aMgr.GetSoundThrow("SOUND_COBLAUNCH");
		SOUND_COFFEE = aMgr.GetSoundThrow("SOUND_COFFEE");
		SOUND_COIN = aMgr.GetSoundThrow("SOUND_COIN");
		SOUND_CRAZYDAVECRAZY = aMgr.GetSoundThrow("SOUND_CRAZYDAVECRAZY");
		SOUND_CRAZYDAVEEXTRALONG1 = aMgr.GetSoundThrow("SOUND_CRAZYDAVEEXTRALONG1");
		SOUND_CRAZYDAVEEXTRALONG2 = aMgr.GetSoundThrow("SOUND_CRAZYDAVEEXTRALONG2");
		SOUND_CRAZYDAVEEXTRALONG3 = aMgr.GetSoundThrow("SOUND_CRAZYDAVEEXTRALONG3");
		SOUND_CRAZYDAVELONG1 = aMgr.GetSoundThrow("SOUND_CRAZYDAVELONG1");
		SOUND_CRAZYDAVELONG2 = aMgr.GetSoundThrow("SOUND_CRAZYDAVELONG2");
		SOUND_CRAZYDAVELONG3 = aMgr.GetSoundThrow("SOUND_CRAZYDAVELONG3");
		SOUND_CRAZYDAVESCREAM = aMgr.GetSoundThrow("SOUND_CRAZYDAVESCREAM");
		SOUND_CRAZYDAVESCREAM2 = aMgr.GetSoundThrow("SOUND_CRAZYDAVESCREAM2");
		SOUND_CRAZYDAVESHORT1 = aMgr.GetSoundThrow("SOUND_CRAZYDAVESHORT1");
		SOUND_CRAZYDAVESHORT2 = aMgr.GetSoundThrow("SOUND_CRAZYDAVESHORT2");
		SOUND_CRAZYDAVESHORT3 = aMgr.GetSoundThrow("SOUND_CRAZYDAVESHORT3");
		SOUND_DANCER = aMgr.GetSoundThrow("SOUND_DANCER");
		SOUND_DIAMOND = aMgr.GetSoundThrow("SOUND_DIAMOND");
		SOUND_DIGGER_ZOMBIE = aMgr.GetSoundThrow("SOUND_DIGGER_ZOMBIE");
		SOUND_DIRT_RISE = aMgr.GetSoundThrow("SOUND_DIRT_RISE");
		SOUND_DOLPHIN_APPEARS = aMgr.GetSoundThrow("SOUND_DOLPHIN_APPEARS");
		SOUND_DOLPHIN_BEFORE_JUMPING = aMgr.GetSoundThrow("SOUND_DOLPHIN_BEFORE_JUMPING");
		SOUND_DOOMSHROOM = aMgr.GetSoundThrow("SOUND_DOOMSHROOM");
		SOUND_EVILLAUGH = aMgr.GetSoundThrow("SOUND_EVILLAUGH");
		SOUND_EXPLOSION = aMgr.GetSoundThrow("SOUND_EXPLOSION");
		SOUND_FERTILIZER = aMgr.GetSoundThrow("SOUND_FERTILIZER");
		SOUND_FINALFANFARE = aMgr.GetSoundThrow("SOUND_FINALFANFARE");
		SOUND_FINALWAVE = aMgr.GetSoundThrow("SOUND_FINALWAVE");
		SOUND_FIREPEA = aMgr.GetSoundThrow("SOUND_FIREPEA");
		SOUND_FLOOP = aMgr.GetSoundThrow("SOUND_FLOOP");
		SOUND_FROZEN = aMgr.GetSoundThrow("SOUND_FROZEN");
		SOUND_FUME = aMgr.GetSoundThrow("SOUND_FUME");
		SOUND_GARGANTUAR_THUMP = aMgr.GetSoundThrow("SOUND_GARGANTUAR_THUMP");
		SOUND_GARGANTUDEATH = aMgr.GetSoundThrow("SOUND_GARGANTUDEATH");
		SOUND_GRASSSTEP = aMgr.GetSoundThrow("SOUND_GRASSSTEP");
		SOUND_GRAVEBUSTERCHOMP = aMgr.GetSoundThrow("SOUND_GRAVEBUSTERCHOMP");
		SOUND_GRAVEBUTTON = aMgr.GetSoundThrow("SOUND_GRAVEBUTTON");
		SOUND_GRAVESTONE_RUMBLE = aMgr.GetSoundThrow("SOUND_GRAVESTONE_RUMBLE");
		SOUND_GROAN = aMgr.GetSoundThrow("SOUND_GROAN");
		SOUND_GROAN2 = aMgr.GetSoundThrow("SOUND_GROAN2");
		SOUND_GROAN3 = aMgr.GetSoundThrow("SOUND_GROAN3");
		SOUND_GROAN4 = aMgr.GetSoundThrow("SOUND_GROAN4");
		SOUND_GROAN5 = aMgr.GetSoundThrow("SOUND_GROAN5");
		SOUND_GROAN6 = aMgr.GetSoundThrow("SOUND_GROAN6");
		SOUND_GULP = aMgr.GetSoundThrow("SOUND_GULP");
		SOUND_HATCHBACK_CLOSE = aMgr.GetSoundThrow("SOUND_HATCHBACK_CLOSE");
		SOUND_HATCHBACK_OPEN = aMgr.GetSoundThrow("SOUND_HATCHBACK_OPEN");
		SOUND_HUGE_WAVE = aMgr.GetSoundThrow("SOUND_HUGE_WAVE");
		SOUND_HYDRAULIC = aMgr.GetSoundThrow("SOUND_HYDRAULIC");
		SOUND_HYDRAULIC_SHORT = aMgr.GetSoundThrow("SOUND_HYDRAULIC_SHORT");
		SOUND_IGNITE = aMgr.GetSoundThrow("SOUND_IGNITE");
		SOUND_IGNITE2 = aMgr.GetSoundThrow("SOUND_IGNITE2");
		SOUND_IMP = aMgr.GetSoundThrow("SOUND_IMP");
		SOUND_IMP2 = aMgr.GetSoundThrow("SOUND_IMP2");
		SOUND_JACKINTHEBOX = aMgr.GetSoundThrow("SOUND_JACKINTHEBOX");
		SOUND_JACK_SURPRISE = aMgr.GetSoundThrow("SOUND_JACK_SURPRISE");
		SOUND_JACK_SURPRISE2 = aMgr.GetSoundThrow("SOUND_JACK_SURPRISE2");
		SOUND_JALAPENO = aMgr.GetSoundThrow("SOUND_JALAPENO");
		SOUND_JUICY = aMgr.GetSoundThrow("SOUND_JUICY");
		SOUND_KERNELPULT = aMgr.GetSoundThrow("SOUND_KERNELPULT");
		SOUND_KERNELPULT2 = aMgr.GetSoundThrow("SOUND_KERNELPULT2");
		SOUND_LADDER_ZOMBIE = aMgr.GetSoundThrow("SOUND_LADDER_ZOMBIE");
		SOUND_LAWNMOWER = aMgr.GetSoundThrow("SOUND_LAWNMOWER");
		SOUND_LIGHTFILL = aMgr.GetSoundThrow("SOUND_LIGHTFILL");
		SOUND_LIMBS_POP = aMgr.GetSoundThrow("SOUND_LIMBS_POP");
		SOUND_LOSEMUSIC = aMgr.GetSoundThrow("SOUND_LOSEMUSIC");
		SOUND_LOWGROAN = aMgr.GetSoundThrow("SOUND_LOWGROAN");
		SOUND_LOWGROAN2 = aMgr.GetSoundThrow("SOUND_LOWGROAN2");
		SOUND_MAGNETSHROOM = aMgr.GetSoundThrow("SOUND_MAGNETSHROOM");
		SOUND_MELONIMPACT = aMgr.GetSoundThrow("SOUND_MELONIMPACT");
		SOUND_MELONIMPACT2 = aMgr.GetSoundThrow("SOUND_MELONIMPACT2");
		SOUND_MINDCONTROLLED = aMgr.GetSoundThrow("SOUND_MINDCONTROLLED");
		SOUND_MONEYFALLS = aMgr.GetSoundThrow("SOUND_MONEYFALLS");
		SOUND_NEWSPAPER_RARRGH = aMgr.GetSoundThrow("SOUND_NEWSPAPER_RARRGH");
		SOUND_NEWSPAPER_RARRGH2 = aMgr.GetSoundThrow("SOUND_NEWSPAPER_RARRGH2");
		SOUND_NEWSPAPER_RIP = aMgr.GetSoundThrow("SOUND_NEWSPAPER_RIP");
		SOUND_PAPER = aMgr.GetSoundThrow("SOUND_PAPER");
		SOUND_PAUSE = aMgr.GetSoundThrow("SOUND_PAUSE");
		SOUND_PHONOGRAPH = aMgr.GetSoundThrow("SOUND_PHONOGRAPH");
		SOUND_PLANT = aMgr.GetSoundThrow("SOUND_PLANT");
		SOUND_PLANT2 = aMgr.GetSoundThrow("SOUND_PLANT2");
		SOUND_PLANTERN = aMgr.GetSoundThrow("SOUND_PLANTERN");
		SOUND_PLANTGROW = aMgr.GetSoundThrow("SOUND_PLANTGROW");
		SOUND_PLANT_WATER = aMgr.GetSoundThrow("SOUND_PLANT_WATER");
		SOUND_PLASTICHIT = aMgr.GetSoundThrow("SOUND_PLASTICHIT");
		SOUND_PLASTICHIT2 = aMgr.GetSoundThrow("SOUND_PLASTICHIT2");
		SOUND_POGO_ZOMBIE = aMgr.GetSoundThrow("SOUND_POGO_ZOMBIE");
		SOUND_POINTS = aMgr.GetSoundThrow("SOUND_POINTS");
		SOUND_POLEVAULT = aMgr.GetSoundThrow("SOUND_POLEVAULT");
		SOUND_POOL_CLEANER = aMgr.GetSoundThrow("SOUND_POOL_CLEANER");
		SOUND_PORTAL = aMgr.GetSoundThrow("SOUND_PORTAL");
		SOUND_POTATO_MINE = aMgr.GetSoundThrow("SOUND_POTATO_MINE");
		SOUND_PRIZE = aMgr.GetSoundThrow("SOUND_PRIZE");
		SOUND_PUFF = aMgr.GetSoundThrow("SOUND_PUFF");
		SOUND_RAIN = aMgr.GetSoundThrow("SOUND_RAIN");
		SOUND_READYSETPLANT = aMgr.GetSoundThrow("SOUND_READYSETPLANT");
		SOUND_REVERSE_EXPLOSION = aMgr.GetSoundThrow("SOUND_REVERSE_EXPLOSION");
		SOUND_ROLL_IN = aMgr.GetSoundThrow("SOUND_ROLL_IN");
		SOUND_RVTHROW = aMgr.GetSoundThrow("SOUND_RVTHROW");
		SOUND_SCREAM = aMgr.GetSoundThrow("SOUND_SCREAM");
		SOUND_SEEDLIFT = aMgr.GetSoundThrow("SOUND_SEEDLIFT");
		SOUND_SHIELDHIT = aMgr.GetSoundThrow("SOUND_SHIELDHIT");
		SOUND_SHIELDHIT2 = aMgr.GetSoundThrow("SOUND_SHIELDHIT2");
		SOUND_SHOOP = aMgr.GetSoundThrow("SOUND_SHOOP");
		SOUND_SHOVEL = aMgr.GetSoundThrow("SOUND_SHOVEL");
		SOUND_SIREN = aMgr.GetSoundThrow("SOUND_SIREN");
		SOUND_SLOT_MACHINE = aMgr.GetSoundThrow("SOUND_SLOT_MACHINE");
		SOUND_SLURP = aMgr.GetSoundThrow("SOUND_SLURP");
		SOUND_SNOW_PEA_SPARKLES = aMgr.GetSoundThrow("SOUND_SNOW_PEA_SPARKLES");
		SOUND_SPLAT = aMgr.GetSoundThrow("SOUND_SPLAT");
		SOUND_SPLAT2 = aMgr.GetSoundThrow("SOUND_SPLAT2");
		SOUND_SPLAT3 = aMgr.GetSoundThrow("SOUND_SPLAT3");
		SOUND_SQUASH_HMM = aMgr.GetSoundThrow("SOUND_SQUASH_HMM");
		SOUND_SQUASH_HMM2 = aMgr.GetSoundThrow("SOUND_SQUASH_HMM2");
		SOUND_SUKHBIR = aMgr.GetSoundThrow("SOUND_SUKHBIR");
		SOUND_SUKHBIR2 = aMgr.GetSoundThrow("SOUND_SUKHBIR2");
		SOUND_SUKHBIR3 = aMgr.GetSoundThrow("SOUND_SUKHBIR3");
		SOUND_SUKHBIR4 = aMgr.GetSoundThrow("SOUND_SUKHBIR4");
		SOUND_SUKHBIR5 = aMgr.GetSoundThrow("SOUND_SUKHBIR5");
		SOUND_SUKHBIR6 = aMgr.GetSoundThrow("SOUND_SUKHBIR6");
		SOUND_SWING = aMgr.GetSoundThrow("SOUND_SWING");
		SOUND_TAP = aMgr.GetSoundThrow("SOUND_TAP");
		SOUND_TAP2 = aMgr.GetSoundThrow("SOUND_TAP2");
		SOUND_TAPGLASS = aMgr.GetSoundThrow("SOUND_TAPGLASS");
		SOUND_THROW = aMgr.GetSoundThrow("SOUND_THROW");
		SOUND_THROW2 = aMgr.GetSoundThrow("SOUND_THROW2");
		SOUND_THUNDER = aMgr.GetSoundThrow("SOUND_THUNDER");
		SOUND_VASE_BREAKING = aMgr.GetSoundThrow("SOUND_VASE_BREAKING");
		SOUND_WAKEUP = aMgr.GetSoundThrow("SOUND_WAKEUP");
		SOUND_WATERING = aMgr.GetSoundThrow("SOUND_WATERING");
		SOUND_WINMUSIC = aMgr.GetSoundThrow("SOUND_WINMUSIC");
		SOUND_YUCK = aMgr.GetSoundThrow("SOUND_YUCK");
		SOUND_YUCK2 = aMgr.GetSoundThrow("SOUND_YUCK2");
		SOUND_ZAMBONI = aMgr.GetSoundThrow("SOUND_ZAMBONI");
		SOUND_ZOMBAQUARIUM_DIE = aMgr.GetSoundThrow("SOUND_ZOMBAQUARIUM_DIE");
		SOUND_ZOMBIESPLASH = aMgr.GetSoundThrow("SOUND_ZOMBIESPLASH");
		SOUND_ZOMBIE_ENTERING_WATER = aMgr.GetSoundThrow("SOUND_ZOMBIE_ENTERING_WATER");
		SOUND_ZOMBIE_FALLING_1 = aMgr.GetSoundThrow("SOUND_ZOMBIE_FALLING_1");
		SOUND_ZOMBIE_FALLING_2 = aMgr.GetSoundThrow("SOUND_ZOMBIE_FALLING_2");
	}
	catch (ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// [Beta v0.1.1 Only]
Image* PopLib::IMAGE_GOOGLYEYE;
Image* PopLib::IMAGE_SQUIRREL;

bool (*gExtractResourcesByName)(PopLib::ResourceManager* theResourceManager, const char* theName);

void* gResources[(int)PopLib::ResourceId::RESOURCE_ID_MAX] =
{
	/* Init：0x69E6B0 */
	&PopLib::IMAGE_BLANK,
	&PopLib::IMAGE_POPCAP_LOGO,
	&PopLib::IMAGE_PARTNER_LOGO,
	/* LoaderBar：0x69E6BC */
	&PopLib::IMAGE_TITLESCREEN,
	&PopLib::IMAGE_LOADBAR_DIRT,
	&PopLib::IMAGE_LOADBAR_GRASS,
	&PopLib::IMAGE_PVZ_LOGO,
	&PopLib::IMAGE_REANIM_SODROLLCAP,
	&PopLib::FONT_BRIANNETOD16,
	&PopLib::SOUND_BUTTONCLICK,
	&PopLib::SOUND_LOADINGBAR_FLOWER,
	&PopLib::SOUND_LOADINGBAR_ZOMBIE,
	/* LoadingFonts：0x69E6E0 */
	&PopLib::FONT_IMAGE_HOUSEOFTERROR28,
	&PopLib::FONT_HOUSEOFTERROR28,
	&PopLib::FONT_HOUSEOFTERROR20,
	&PopLib::FONT_HOUSEOFTERROR16,
	&PopLib::FONT_TINYBOLD,
	&PopLib::FONT_CONTINUUMBOLD14,
	&PopLib::FONT_CONTINUUMBOLD14OUTLINE,
	&PopLib::FONT_DWARVENTODCRAFT12,
	&PopLib::FONT_DWARVENTODCRAFT15,
	&PopLib::FONT_DWARVENTODCRAFT18,
	&PopLib::FONT_DWARVENTODCRAFT18BRIGHTGREENINSET,
	&PopLib::FONT_DWARVENTODCRAFT18GREENINSET,
	&PopLib::FONT_DWARVENTODCRAFT18YELLOW,
	&PopLib::FONT_DWARVENTODCRAFT24,
	&PopLib::FONT_DWARVENTODCRAFT36BRIGHTGREENINSET,
	&PopLib::FONT_DWARVENTODCRAFT36GREENINSET,
	&PopLib::FONT_PICO129,
	&PopLib::FONT_BRIANNETOD12,
	/* LoadingImages：0x69E728 */
	&PopLib::IMAGE_EDITBOX,
	&PopLib::IMAGE_DIALOG_TOPLEFT,
	&PopLib::IMAGE_DIALOG_TOPMIDDLE,
	&PopLib::IMAGE_DIALOG_TOPRIGHT,
	&PopLib::IMAGE_DIALOG_CENTERLEFT,
	&PopLib::IMAGE_DIALOG_CENTERMIDDLE,
	&PopLib::IMAGE_DIALOG_CENTERRIGHT,
	&PopLib::IMAGE_DIALOG_BOTTOMLEFT,
	&PopLib::IMAGE_DIALOG_BOTTOMMIDDLE,
	&PopLib::IMAGE_DIALOG_BOTTOMRIGHT,
	&PopLib::IMAGE_DIALOG_BIGBOTTOMLEFT,
	&PopLib::IMAGE_DIALOG_BIGBOTTOMMIDDLE,
	&PopLib::IMAGE_DIALOG_BIGBOTTOMRIGHT,
	&PopLib::IMAGE_DIALOG_HEADER,
	&PopLib::IMAGE_BUTTON_LEFT,
	&PopLib::IMAGE_BUTTON_MIDDLE,
	&PopLib::IMAGE_BUTTON_RIGHT,
	&PopLib::IMAGE_BUTTON_DOWN_LEFT,
	&PopLib::IMAGE_BUTTON_DOWN_MIDDLE,
	&PopLib::IMAGE_BUTTON_DOWN_RIGHT,
	/* <-- Screens --> : 0x69E778 */
	&PopLib::IMAGE_SEEDCHOOSER_BACKGROUND,
	&PopLib::IMAGE_SEEDCHOOSER_BUTTON,
	&PopLib::IMAGE_SEEDCHOOSER_BUTTON_DISABLED,
	&PopLib::IMAGE_SEEDCHOOSER_BUTTON_GLOW,
	&PopLib::IMAGE_SEEDCHOOSER_BUTTON2,
	&PopLib::IMAGE_SEEDCHOOSER_BUTTON2_GLOW,
	&PopLib::IMAGE_SEEDCHOOSER_IMITATERADDON,
	&PopLib::IMAGE_SEEDS,
	&PopLib::IMAGE_SEEDPACKET_LARGER,
	&PopLib::IMAGE_SEEDPACKETSILHOUETTE,
	&PopLib::IMAGE_FLAGMETER,
	&PopLib::IMAGE_FLAGMETERLEVELPROGRESS,
	&PopLib::IMAGE_FLAGMETERPARTS,
	&PopLib::IMAGE_TROPHY,
	&PopLib::IMAGE_TROPHY_HI_RES,
	&PopLib::IMAGE_MINIGAME_TROPHY,
	&PopLib::IMAGE_ZOMBIE_NOTE_SMALL,
	&PopLib::IMAGE_TACO,
	&PopLib::IMAGE_CARKEYS,
	&PopLib::IMAGE_ALMANAC,
	&PopLib::IMAGE_ICON_POOLCLEANER,
	&PopLib::IMAGE_ICON_ROOFCLEANER,
	&PopLib::IMAGE_ICON_RAKE,
	&PopLib::IMAGE_BRAIN,
	&PopLib::IMAGE_MONEYBAG,
	&PopLib::IMAGE_MONEYBAG_HI_RES,
	&PopLib::IMAGE_CHOCOLATE,
	/* <-- Buttons and other UI --> : 0x69E7E4 */
	&PopLib::IMAGE_OPTIONS_BACKTOGAMEBUTTON0,
	&PopLib::IMAGE_OPTIONS_BACKTOGAMEBUTTON2,
	&PopLib::IMAGE_OPTIONS_CHECKBOX0,
	&PopLib::IMAGE_OPTIONS_CHECKBOX1,
	&PopLib::IMAGE_OPTIONS_MENUBACK,
	&PopLib::IMAGE_OPTIONS_SLIDERKNOB2,
	&PopLib::IMAGE_OPTIONS_SLIDERSLOT,
	&PopLib::IMAGE_SELECTORSCREEN_HELP1,
	&PopLib::IMAGE_SELECTORSCREEN_HELP2,
	&PopLib::IMAGE_SELECTORSCREEN_OPTIONS1,
	&PopLib::IMAGE_SELECTORSCREEN_OPTIONS2,
	&PopLib::IMAGE_SELECTORSCREEN_QUIT1,
	&PopLib::IMAGE_SELECTORSCREEN_QUIT2,
	&PopLib::IMAGE_SELECTORSCREEN_ALMANAC,
	&PopLib::IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT,
	&PopLib::IMAGE_SELECTORSCREEN_STORE,
	&PopLib::IMAGE_SELECTORSCREEN_STOREHIGHLIGHT,
	&PopLib::IMAGE_SELECTORSCREEN_LEVELNUMBERS,
	&PopLib::IMAGE_SELECTORSCREEN_ZENGARDEN,
	&PopLib::IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT,
	&PopLib::IMAGE_STORE_SPEECHBUBBLE,
	&PopLib::IMAGE_STORE_SPEECHBUBBLE2,

	/* <-- Misc small items --> : 0x69E83C */
	&PopLib::IMAGE_SHOVEL,
	&PopLib::IMAGE_SHOVEL_HI_RES,
	&PopLib::IMAGE_TOMBSTONES,
	&PopLib::IMAGE_TOMBSTONE_MOUNDS,
	&PopLib::IMAGE_NIGHT_GRAVE_GRAPHIC,
	&PopLib::IMAGE_CRATER,
	&PopLib::IMAGE_CRATER_FADING,
	&PopLib::IMAGE_CRATER_ROOF_CENTER,
	&PopLib::IMAGE_CRATER_ROOF_LEFT,
	&PopLib::IMAGE_CRATER_WATER_DAY,
	&PopLib::IMAGE_CRATER_WATER_NIGHT,
	&PopLib::IMAGE_COBCANNON_TARGET,
	&PopLib::IMAGE_COBCANNON_POPCORN,
	&PopLib::IMAGE_FERTILIZER,
	&PopLib::IMAGE_WATERINGCAN,
	&PopLib::IMAGE_WATERINGCANGOLD,
	&PopLib::IMAGE_PHONOGRAPH,
	&PopLib::IMAGE_BEGHOULED_TWIST_OVERLAY,
	&PopLib::IMAGE_ZEN_GOLDTOOLRETICLE,
	&PopLib::IMAGE_ZEN_GARDENGLOVE,
	&PopLib::IMAGE_ZEN_MONEYSIGN,
	&PopLib::IMAGE_ZEN_NEXTGARDEN,
	&PopLib::IMAGE_ZEN_WHEELBARROW,
	&PopLib::IMAGE_ZENSHOPBUTTON,
	&PopLib::IMAGE_ZENSHOPBUTTON_HIGHLIGHT,
	&PopLib::IMAGE_PRESENT,
	&PopLib::IMAGE_PRESENTOPEN,
	&PopLib::IMAGE_SUNFLOWER_TROPHY,
	&PopLib::IMAGE_SLOTMACHINE_OVERLAY,
	&PopLib::IMAGE_SCARY_POT,
	&PopLib::IMAGE_BUG_SPRAY,
	&PopLib::IMAGE_PLANTSPEECHBUBBLE,
	&PopLib::IMAGE_WATERDROP,
	&PopLib::IMAGE_TREEFOOD,
	&PopLib::IMAGE_PACKET_PLANTS,
	&PopLib::IMAGE_ZEN_NEED_ICONS,
	/* <-- Various strips --> : 0x69E8CC */
	&PopLib::IMAGE_PROJECTILEPEA,
	&PopLib::IMAGE_PROJECTILESNOWPEA,
	&PopLib::IMAGE_PROJECTILECACTUS,
	&PopLib::IMAGE_DIRTSMALL,
	&PopLib::IMAGE_DIRTBIG,
	&PopLib::IMAGE_ROCKSMALL,
	&PopLib::IMAGE_WATERPARTICLE,
	&PopLib::IMAGE_WHITEWATER,
	&PopLib::IMAGE_WHITEWATER_SHADOW,
	&PopLib::IMAGE_MELONPULT_PARTICLES,
	&PopLib::IMAGE_WINTERMELON_PARTICLES,
	&PopLib::IMAGE_PROJECTILE_STAR,
	/* <-- Background --> : 0x69E8FC */
	&PopLib::IMAGE_SEEDBANK,
	&PopLib::IMAGE_CONVEYORBELT_BACKDROP,
	&PopLib::IMAGE_CONVEYORBELT,
	&PopLib::IMAGE_SHOVELBANK,
	&PopLib::IMAGE_SUNBANK,
	&PopLib::IMAGE_COINBANK,
	&PopLib::IMAGE_POOL,
	&PopLib::IMAGE_POOL_NIGHT,
	&PopLib::IMAGE_POOL_BASE,
	&PopLib::IMAGE_POOL_BASE_NIGHT,
	&PopLib::IMAGE_POOL_SHADING,
	&PopLib::IMAGE_POOL_SHADING_NIGHT,
	&PopLib::IMAGE_POOL_CAUSTIC_EFFECT,
	&PopLib::IMAGE_PLANTSHADOW,
	&PopLib::IMAGE_PLANTSHADOW2,
	&PopLib::IMAGE_PEA_SHADOWS,
	&PopLib::IMAGE_WALLNUT_BOWLINGSTRIPE,
	&PopLib::IMAGE_ICE,
	&PopLib::IMAGE_ICE_CAP,
	&PopLib::IMAGE_ICE_SPARKLES,
	/* 0x69E94C */
	&PopLib::IMAGE_IMITATERSEED,
	&PopLib::IMAGE_ALMANAC_IMITATER,
	&PopLib::IMAGE_IMITATERSEEDDISABLED,
	&PopLib::IMAGE_ICETRAP,
	&PopLib::IMAGE_ICETRAP2,
	&PopLib::IMAGE_ICETRAP_PARTICLES,
	/* <-- Zombies --> : 0x69E964 */
	&PopLib::IMAGE_ZOMBIE_BOBSLED1,
	&PopLib::IMAGE_ZOMBIE_BOBSLED2,
	&PopLib::IMAGE_ZOMBIE_BOBSLED3,
	&PopLib::IMAGE_ZOMBIE_BOBSLED4,
	&PopLib::IMAGE_ZOMBIE_BOBSLED_INSIDE,
	&PopLib::IMAGE_BUNGEECORD,
	&PopLib::IMAGE_BUNGEETARGET,
	&PopLib::IMAGE_SPOTLIGHT,
	&PopLib::IMAGE_SPOTLIGHT2,
	/* 0x69E988 */
	&PopLib::IMAGE_WHITEPIXEL,
	&PopLib::IMAGE_ZOMBIEPOLEVAULTERHEAD,
	&PopLib::IMAGE_ZOMBIEFOOTBALLHEAD,
	&PopLib::IMAGE_POOLSPARKLY,
	&PopLib::IMAGE_WALLNUTPARTICLESSMALL,
	&PopLib::IMAGE_WALLNUTPARTICLESLARGE,
	&PopLib::IMAGE_PEA_SPLATS,
	&PopLib::IMAGE_STAR_PARTICLES,
	&PopLib::IMAGE_STAR_SPLATS,
	&PopLib::IMAGE_PEA_PARTICLES,
	&PopLib::IMAGE_SNOWPEA_SPLATS,
	&PopLib::IMAGE_SNOWPEA_PARTICLES,
	&PopLib::IMAGE_SNOWPEA_PUFF,
	&PopLib::IMAGE_SNOWFLAKES,
	&PopLib::IMAGE_POTATOMINE_PARTICLES,
	&PopLib::IMAGE_PUFFSHROOM_PUFF1,
	&PopLib::IMAGE_ZAMBONISMOKE,
	&PopLib::IMAGE_ZOMBIEDANCERHEAD,
	&PopLib::IMAGE_ZOMBIEBALLOONHEAD,
	&PopLib::IMAGE_ZOMBIEIMPHEAD,
	&PopLib::IMAGE_ZOMBIEDIGGERHEAD,
	&PopLib::IMAGE_ZOMBIEDIGGERARM,
	&PopLib::IMAGE_ZOMBIEDOLPHINRIDERHEAD,
	&PopLib::IMAGE_ZOMBIEPOGO,
	&PopLib::IMAGE_ZOMBIEBACKUPDANCERHEAD,
	&PopLib::IMAGE_ZOMBIEBOBSLEDHEAD,
	&PopLib::IMAGE_ZOMBIELADDERHEAD,
	&PopLib::IMAGE_ZOMBIEYETIHEAD,
	&PopLib::IMAGE_SEEDPACKETFLASH,
	&PopLib::IMAGE_ZOMBIEJACKBOXARM,
	&PopLib::IMAGE_IMITATERCLOUDS,
	&PopLib::IMAGE_IMITATERPUFFS,
	&PopLib::IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES,
	&PopLib::IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES,
	&PopLib::IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES,
	&PopLib::IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES,
	&PopLib::IMAGE_DOOMSHROOM_EXPLOSION_BASE,
	&PopLib::IMAGE_RAIN,
	&PopLib::IMAGE_VASE_CHUNKS,
	&PopLib::IMAGE_ZOMBOSS_PARTICLES,
	&PopLib::IMAGE_AWARDPICKUPGLOW,
	&PopLib::IMAGE_ZOMBIE_SEAWEED,
	&PopLib::IMAGE_PINATA,
	&PopLib::IMAGE_ZOMBIEFUTUREGLASSES,
	&PopLib::IMAGE_DUST_PUFFS,
	/* 0x69EA3C */
	&PopLib::IMAGE_REANIM_WALLNUT_BODY,
	&PopLib::IMAGE_REANIM_WALLNUT_CRACKED1,
	&PopLib::IMAGE_REANIM_WALLNUT_CRACKED2,
	&PopLib::IMAGE_REANIM_TALLNUT_CRACKED1,
	&PopLib::IMAGE_REANIM_TALLNUT_CRACKED2,
	&PopLib::IMAGE_REANIM_PUMPKIN_DAMAGE1,
	&PopLib::IMAGE_REANIM_PUMPKIN_DAMAGE3,
	&PopLib::IMAGE_REANIM_ZOMBIE_CONE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_CONE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_CONE3,
	&PopLib::IMAGE_REANIM_ZOMBIE_BUCKET1,
	&PopLib::IMAGE_REANIM_ZOMBIE_BUCKET2,
	&PopLib::IMAGE_REANIM_ZOMBIE_BUCKET3,
	&PopLib::IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT,
	&PopLib::IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2,
	&PopLib::IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3,
	&PopLib::IMAGE_REANIM_ZOMBIE_SCREENDOOR1,
	&PopLib::IMAGE_REANIM_ZOMBIE_SCREENDOOR2,
	&PopLib::IMAGE_REANIM_ZOMBIE_SCREENDOOR3,
	&PopLib::IMAGE_REANIM_ZOMBIE_FLAG1,
	&PopLib::IMAGE_REANIM_ZOMBIE_FLAG3,
	&PopLib::IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET,
	&PopLib::IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2,
	&PopLib::IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3,
	&PopLib::IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND,
	&PopLib::IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER,
	&PopLib::IMAGE_REANIM_ZOMBIE_PAPER_PAPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_PAPER_PAPER3,
	&PopLib::IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD,
	&PopLib::IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT,
	&PopLib::IMAGE_REANIM_COIN_SILVER_DOLLAR,
	&PopLib::IMAGE_REANIM_COIN_GOLD_DOLLAR,
	&PopLib::IMAGE_REANIM_DIAMOND,
	&PopLib::IMAGE_REANIM_COINGLOW,
	&PopLib::IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_HAND,
	&PopLib::IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_DANCER_INNERARM_HAND,
	&PopLib::IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_OUTERARM_HAND,
	&PopLib::IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE,
	&PopLib::IMAGE_REANIM_ZOMBIE_IMP_ARM2,
	&PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2,
	&PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3,
	&PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING,
	&PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE,
	&PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2,
	&PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2,
	&PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE,
	&PopLib::IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE,
	&PopLib::IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND,
	&PopLib::IMAGE_REANIM_ZOMBIE_JACKBOX_BOX,
	&PopLib::IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED,
	&PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL,
	&PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE,
	&PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE,
	&PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL,
	&PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL,
	&PopLib::IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE,
	&PopLib::IMAGE_REANIM_ZOMBIE_LADDER_1,
	&PopLib::IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_LADDER_5,
	&PopLib::IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE,
	&PopLib::IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE,
	&PopLib::IMAGE_REANIM_CABBAGEPULT_CABBAGE,
	&PopLib::IMAGE_REANIM_CORNPULT_KERNAL,
	&PopLib::IMAGE_REANIM_CORNPULT_BUTTER,
	&PopLib::IMAGE_REANIM_CORNPULT_BUTTER_SPLAT,
	&PopLib::IMAGE_REANIM_MELONPULT_MELON,
	&PopLib::IMAGE_REANIM_WINTERMELON_PROJECTILE,
	&PopLib::IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE,
	&PopLib::IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT,
	&PopLib::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1,
	&PopLib::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2,
	&PopLib::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3,
	&PopLib::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4,
	&PopLib::IMAGE_REANIM_GARLIC_BODY2,
	&PopLib::IMAGE_REANIM_GARLIC_BODY3,
	&PopLib::IMAGE_REANIM_COBCANNON_COB,
	&PopLib::IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2,
	&PopLib::IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND,
	&PopLib::IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_BG,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW,
	&PopLib::IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW,
	&PopLib::IMAGE_REANIM_TREE_BG,
	&PopLib::IMAGE_REANIM_POT_TOP_DARK,
	&PopLib::IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE,
	&PopLib::IMAGE_REANIM_STINKY_TURN3,
	&PopLib::IMAGE_REANIM_CRAZYDAVE_MOUTH1,
	&PopLib::IMAGE_REANIM_CRAZYDAVE_MOUTH4,
	&PopLib::IMAGE_REANIM_CRAZYDAVE_MOUTH5,
	&PopLib::IMAGE_REANIM_CRAZYDAVE_MOUTH6,
	&PopLib::IMAGE_REANIM_ZOMBIE_MUSTACHE2,
	&PopLib::IMAGE_REANIM_ZOMBIE_MUSTACHE3,
	/* LoadingSounds */
	&PopLib::SOUND_AWOOGA,
	&PopLib::SOUND_BLEEP,
	&PopLib::SOUND_BUZZER,
	&PopLib::SOUND_CHOMP,
	&PopLib::SOUND_CHOMP2,
	&PopLib::SOUND_CHOMPSOFT,
	&PopLib::SOUND_EVILLAUGH,
	&PopLib::SOUND_FLOOP,
	&PopLib::SOUND_FROZEN,
	&PopLib::SOUND_GULP,
	&PopLib::SOUND_GROAN,
	&PopLib::SOUND_GROAN2,
	&PopLib::SOUND_GROAN3,
	&PopLib::SOUND_GROAN4,
	&PopLib::SOUND_GROAN5,
	&PopLib::SOUND_GROAN6,
	&PopLib::SOUND_LOSEMUSIC,
	&PopLib::SOUND_MINDCONTROLLED,
	&PopLib::SOUND_PAUSE,
	&PopLib::SOUND_PLANT,
	&PopLib::SOUND_PLANT2,
	&PopLib::SOUND_POINTS,
	&PopLib::SOUND_SEEDLIFT,
	&PopLib::SOUND_SIREN,
	&PopLib::SOUND_SLURP,
	&PopLib::SOUND_SPLAT,
	&PopLib::SOUND_SPLAT2,
	&PopLib::SOUND_SPLAT3,
	&PopLib::SOUND_SUKHBIR,
	&PopLib::SOUND_SUKHBIR2,
	&PopLib::SOUND_SUKHBIR3,
	&PopLib::SOUND_SUKHBIR4,
	&PopLib::SOUND_SUKHBIR5,
	&PopLib::SOUND_SUKHBIR6,
	&PopLib::SOUND_TAP,
	&PopLib::SOUND_TAP2,
	&PopLib::SOUND_THROW,
	&PopLib::SOUND_THROW2,
	&PopLib::SOUND_BLOVER,
	&PopLib::SOUND_WINMUSIC,
	&PopLib::SOUND_LAWNMOWER,
	&PopLib::SOUND_BOING,
	&PopLib::SOUND_JACKINTHEBOX,
	&PopLib::SOUND_DIAMOND,
	&PopLib::SOUND_DOLPHIN_APPEARS,
	&PopLib::SOUND_DOLPHIN_BEFORE_JUMPING,
	&PopLib::SOUND_POTATO_MINE,
	&PopLib::SOUND_ZAMBONI,
	&PopLib::SOUND_BALLOON_POP,
	&PopLib::SOUND_THUNDER,
	&PopLib::SOUND_ZOMBIESPLASH,
	&PopLib::SOUND_BOWLING,
	&PopLib::SOUND_BOWLINGIMPACT,
	&PopLib::SOUND_BOWLINGIMPACT2,
	&PopLib::SOUND_GRAVEBUSTERCHOMP,
	&PopLib::SOUND_GRAVEBUTTON,
	&PopLib::SOUND_LIMBS_POP,
	&PopLib::SOUND_PLANTERN,
	&PopLib::SOUND_POGO_ZOMBIE,
	&PopLib::SOUND_SNOW_PEA_SPARKLES,
	&PopLib::SOUND_PLANT_WATER,
	&PopLib::SOUND_ZOMBIE_ENTERING_WATER,
	&PopLib::SOUND_ZOMBIE_FALLING_1,
	&PopLib::SOUND_ZOMBIE_FALLING_2,
	&PopLib::SOUND_PUFF,
	&PopLib::SOUND_FUME,
	&PopLib::SOUND_HUGE_WAVE,
	&PopLib::SOUND_SLOT_MACHINE,
	&PopLib::SOUND_COIN,
	&PopLib::SOUND_ROLL_IN,
	&PopLib::SOUND_DIGGER_ZOMBIE,
	&PopLib::SOUND_HATCHBACK_CLOSE,
	&PopLib::SOUND_HATCHBACK_OPEN,
	&PopLib::SOUND_KERNELPULT,
	&PopLib::SOUND_KERNELPULT2,
	&PopLib::SOUND_ZOMBAQUARIUM_DIE,
	&PopLib::SOUND_BUNGEE_SCREAM,
	&PopLib::SOUND_BUNGEE_SCREAM2,
	&PopLib::SOUND_BUNGEE_SCREAM3,
	&PopLib::SOUND_BUTTER,
	&PopLib::SOUND_JACK_SURPRISE,
	&PopLib::SOUND_JACK_SURPRISE2,
	&PopLib::SOUND_NEWSPAPER_RARRGH,
	&PopLib::SOUND_NEWSPAPER_RARRGH2,
	&PopLib::SOUND_NEWSPAPER_RIP,
	&PopLib::SOUND_SQUASH_HMM,
	&PopLib::SOUND_SQUASH_HMM2,
	&PopLib::SOUND_VASE_BREAKING,
	&PopLib::SOUND_POOL_CLEANER,
	&PopLib::SOUND_MAGNETSHROOM,
	&PopLib::SOUND_LADDER_ZOMBIE,
	&PopLib::SOUND_GARGANTUAR_THUMP,
	&PopLib::SOUND_BASKETBALL,
	&PopLib::SOUND_FIREPEA,
	&PopLib::SOUND_IGNITE,
	&PopLib::SOUND_IGNITE2,
	&PopLib::SOUND_READYSETPLANT,
	&PopLib::SOUND_DOOMSHROOM,
	&PopLib::SOUND_EXPLOSION,
	&PopLib::SOUND_FINALWAVE,
	&PopLib::SOUND_REVERSE_EXPLOSION,
	&PopLib::SOUND_RVTHROW,
	&PopLib::SOUND_SHIELDHIT,
	&PopLib::SOUND_SHIELDHIT2,
	&PopLib::SOUND_BOSSEXPLOSION,
	&PopLib::SOUND_CHERRYBOMB,
	&PopLib::SOUND_BONK,
	&PopLib::SOUND_SWING,
	&PopLib::SOUND_RAIN,
	&PopLib::SOUND_LIGHTFILL,
	&PopLib::SOUND_PLASTICHIT,
	&PopLib::SOUND_PLASTICHIT2,
	&PopLib::SOUND_JALAPENO,
	&PopLib::SOUND_BALLOONINFLATE,
	&PopLib::SOUND_BIGCHOMP,
	&PopLib::SOUND_MELONIMPACT,
	&PopLib::SOUND_MELONIMPACT2,
	&PopLib::SOUND_PLANTGROW,
	&PopLib::SOUND_SHOOP,
	&PopLib::SOUND_TAPGLASS,
	&PopLib::SOUND_JUICY,
	&PopLib::SOUND_COFFEE,
	&PopLib::SOUND_WAKEUP,
	&PopLib::SOUND_LOWGROAN,
	&PopLib::SOUND_LOWGROAN2,
	&PopLib::SOUND_PRIZE,
	&PopLib::SOUND_YUCK,
	&PopLib::SOUND_YUCK2,
	&PopLib::SOUND_GRASSSTEP,
	&PopLib::SOUND_SHOVEL,
	&PopLib::SOUND_COBLAUNCH,
	&PopLib::SOUND_WATERING,
	&PopLib::SOUND_POLEVAULT,
	&PopLib::SOUND_GRAVESTONE_RUMBLE,
	&PopLib::SOUND_DIRT_RISE,
	&PopLib::SOUND_FERTILIZER,
	&PopLib::SOUND_PORTAL,
	&PopLib::SOUND_BUGSPRAY,
	&PopLib::SOUND_SCREAM,
	&PopLib::SOUND_PAPER,
	&PopLib::SOUND_MONEYFALLS,
	&PopLib::SOUND_IMP,
	&PopLib::SOUND_IMP2,
	&PopLib::SOUND_HYDRAULIC_SHORT,
	&PopLib::SOUND_HYDRAULIC,
	&PopLib::SOUND_GARGANTUDEATH,
	&PopLib::SOUND_CERAMIC,
	&PopLib::SOUND_BOSSBOULDERATTACK,
	&PopLib::SOUND_CHIME,
	&PopLib::SOUND_CRAZYDAVESHORT1,
	&PopLib::SOUND_CRAZYDAVESHORT2,
	&PopLib::SOUND_CRAZYDAVESHORT3,
	&PopLib::SOUND_CRAZYDAVELONG1,
	&PopLib::SOUND_CRAZYDAVELONG2,
	&PopLib::SOUND_CRAZYDAVELONG3,
	&PopLib::SOUND_CRAZYDAVEEXTRALONG1,
	&PopLib::SOUND_CRAZYDAVEEXTRALONG2,
	&PopLib::SOUND_CRAZYDAVEEXTRALONG3,
	&PopLib::SOUND_CRAZYDAVECRAZY,
	&PopLib::SOUND_PHONOGRAPH,
	&PopLib::SOUND_DANCER,
	&PopLib::SOUND_FINALFANFARE,
	&PopLib::SOUND_CRAZYDAVESCREAM,
	&PopLib::SOUND_CRAZYDAVESCREAM2,
	/* DelayLoad_Background1 */
	&PopLib::IMAGE_BACKGROUND1,
	&PopLib::IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY,
	&PopLib::IMAGE_BACKGROUND1_GAMEOVER_MASK,
	/* DelayLoad_BackgroundUnsodded */
	&PopLib::IMAGE_BACKGROUND1UNSODDED,
	&PopLib::IMAGE_SOD1ROW,
	&PopLib::IMAGE_SOD3ROW,
	/* DelayLoad_Background2 */
	&PopLib::IMAGE_BACKGROUND2,
	&PopLib::IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY,
	&PopLib::IMAGE_BACKGROUND2_GAMEOVER_MASK,
	/* DelayLoad_Background3 */
	&PopLib::IMAGE_BACKGROUND3,
	&PopLib::IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY,
	&PopLib::IMAGE_BACKGROUND3_GAMEOVER_MASK,
	/* DelayLoad_Background4 */
	&PopLib::IMAGE_BACKGROUND4,
	&PopLib::IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY,
	&PopLib::IMAGE_BACKGROUND4_GAMEOVER_MASK,
	&PopLib::IMAGE_FOG,
	&PopLib::IMAGE_FOG_SOFTWARE,
	/* DelayLoad_Background5 */
	&PopLib::IMAGE_BACKGROUND5,
	&PopLib::IMAGE_BACKGROUND5_GAMEOVER_MASK,
	/* DelayLoad_Background6 */
	&PopLib::IMAGE_BACKGROUND6BOSS,
	&PopLib::IMAGE_BACKGROUND6_GAMEOVER_MASK,
	/* DelayLoad_MushroomGarden */
	&PopLib::IMAGE_BACKGROUND_MUSHROOMGARDEN,
	/* DelayLoad_GreenHouseGarden */
	&PopLib::IMAGE_BACKGROUND_GREENHOUSE,
	/* DelayLoad_GreenHouseOverlay */
	&PopLib::IMAGE_BACKGROUND_GREENHOUSE_OVERLAY,
	/* DelayLoad_Zombiquarium */
	&PopLib::IMAGE_AQUARIUM1,
	&PopLib::IMAGE_WAVECENTER,
	&PopLib::IMAGE_WAVESIDE,
	/* DelayLoad_TreeOfWisdom */
	/* DelayLoad_AwardScreen */
	&PopLib::IMAGE_AWARDSCREEN_BACK,
	/* DelayLoad_ChallengeScreen */
	&PopLib::IMAGE_CHALLENGE_BACKGROUND,
	&PopLib::IMAGE_CHALLENGE_WINDOW,
	&PopLib::IMAGE_CHALLENGE_WINDOW_HIGHLIGHT,
	&PopLib::IMAGE_CHALLENGE_BLANK,
	&PopLib::IMAGE_CHALLENGE_THUMBNAILS,
	&PopLib::IMAGE_SURVIVAL_THUMBNAILS,
	&PopLib::IMAGE_LOCK,
	&PopLib::IMAGE_LOCK_OPEN,
	/* DelayLoad_Almanac */
	&PopLib::IMAGE_ALMANAC_INDEXBACK,
	&PopLib::IMAGE_ALMANAC_PLANTBACK,
	&PopLib::IMAGE_ALMANAC_ZOMBIEBACK,
	&PopLib::IMAGE_ALMANAC_PLANTCARD,
	&PopLib::IMAGE_ALMANAC_ZOMBIECARD,
	&PopLib::IMAGE_ALMANAC_ZOMBIEWINDOW,
	&PopLib::IMAGE_ALMANAC_ZOMBIEWINDOW2,
	&PopLib::IMAGE_ALMANAC_ZOMBIEBLANK,
	&PopLib::IMAGE_ALMANAC_GROUNDDAY,
	&PopLib::IMAGE_ALMANAC_GROUNDNIGHT,
	&PopLib::IMAGE_ALMANAC_GROUNDPOOL,
	&PopLib::IMAGE_ALMANAC_GROUNDNIGHTPOOL,
	&PopLib::IMAGE_ALMANAC_GROUNDROOF,
	&PopLib::IMAGE_ALMANAC_GROUNDICE,
	&PopLib::IMAGE_ALMANAC_CLOSEBUTTON,
	&PopLib::IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT,
	&PopLib::IMAGE_ALMANAC_INDEXBUTTON,
	&PopLib::IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT,
	/* DelayLoad_Store */
	&PopLib::IMAGE_STORE_BACKGROUND,
	&PopLib::IMAGE_STORE_BACKGROUNDNIGHT,
	&PopLib::IMAGE_STORE_CAR,
	&PopLib::IMAGE_STORE_CAR_NIGHT,
	&PopLib::IMAGE_STORE_CARCLOSED,
	&PopLib::IMAGE_STORE_CARCLOSED_NIGHT,
	&PopLib::IMAGE_STORE_HATCHBACKOPEN,
	&PopLib::IMAGE_STORE_SIGN,
	&PopLib::IMAGE_STORE_MAINMENUBUTTON,
	&PopLib::IMAGE_STORE_MAINMENUBUTTONDOWN,
	&PopLib::IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT,
	&PopLib::IMAGE_STORE_NEXTBUTTON,
	&PopLib::IMAGE_STORE_NEXTBUTTONHIGHLIGHT,
	&PopLib::IMAGE_STORE_NEXTBUTTONDISABLED,
	&PopLib::IMAGE_STORE_PREVBUTTON,
	&PopLib::IMAGE_STORE_PREVBUTTONHIGHLIGHT,
	&PopLib::IMAGE_STORE_PREVBUTTONDISABLED,
	&PopLib::IMAGE_STORE_PRICETAG,
	&PopLib::IMAGE_STORE_PACKETUPGRADE,
	&PopLib::IMAGE_STORE_MUSHROOMGARDENICON,
	&PopLib::IMAGE_STORE_AQUARIUMGARDENICON,
	&PopLib::IMAGE_STORE_TREEOFWISDOMICON,
	&PopLib::IMAGE_STORE_FIRSTAIDWALLNUTICON,
	&PopLib::IMAGE_STORE_PVZICON,
	/* DelayLoad_ZombieNote */
	&PopLib::IMAGE_ZOMBIE_NOTE,
	/* DelayLoad_ZombieNote1 */
	&PopLib::IMAGE_ZOMBIE_NOTE1,
	/* DelayLoad_ZombieNote2 */
	&PopLib::IMAGE_ZOMBIE_NOTE2,
	/* DelayLoad_ZombieNote3 */
	&PopLib::IMAGE_ZOMBIE_NOTE3,
	/* DelayLoad_ZombieNote4 */
	&PopLib::IMAGE_ZOMBIE_NOTE4,
	/* DelayLoad_ZombieFinalNote */
	&PopLib::IMAGE_ZOMBIE_FINAL_NOTE,
	/* DelayLoad_ZombieNoteHelp */
	&PopLib::IMAGE_ZOMBIE_NOTE_HELP,
	/* DelayLoad_Credits */
	&PopLib::FONT_BRIANNETOD32,
	&PopLib::FONT_BRIANNETOD32BLACK,
	&PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_SING1,
	&PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_SING2,
	&PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_SING3,
	&PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_SING4,
	&PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_SING5,
	&PopLib::IMAGE_REANIM_SUNFLOWER_HEAD_WINK,
	&PopLib::IMAGE_REANIM_CREDITS_DISCOLIGHTS,
	&PopLib::IMAGE_REANIM_CREDITS_FOGMACHINE,
	&PopLib::IMAGE_CREDITS_ZOMBIENOTE,
	&PopLib::IMAGE_CREDITS_PLAYBUTTON,
};

PopLib::Image* PopLib::GetImageById(ResourceId theId)
{
	return *(PopLib::Image**)gResources[(int)theId];
}

PopLib::Font* PopLib::GetFontById(ResourceId theId)
{
	return *(PopLib::Font**)gResources[(int)theId];
}

int PopLib::GetSoundById(ResourceId theId)
{
	return *(int*)gResources[(int)theId];
}

Image*& PopLib::GetImageRefById(ResourceId theId)
{
	return *(Image**)gResources[(int)theId];
}

Font*& PopLib::GetFontRefById(ResourceId theId)
{
	return *(Font**)gResources[(int)theId];
}

int& PopLib::GetSoundRefById(ResourceId theId)
{
	return *(int*)gResources[(int)theId];
}

PopLib::ResourceId PopLib::GetIdByImage(Image* theImage)
{
	return GetIdByVariable(theImage);
}

PopLib::ResourceId PopLib::GetIdByFont(Font* theFont)
{
	return GetIdByVariable(theFont);
}

PopLib::ResourceId PopLib::GetIdBySound(int theSound)
{
	return GetIdByVariable((void*)theSound);
}

//0x47FBC0
PopLib::ResourceId PopLib::GetIdByVariable(void* theVariable)
{
	static std::map<int, int> aMap;

	if (gNeedRecalcVariableToIdMap)
	{
		gNeedRecalcVariableToIdMap = false;
		aMap.clear();
		for (int i = 0; i < (int)ResourceId::RESOURCE_ID_MAX; i++)
			aMap[*(int*)gResources[i]] = i;
	}

	auto anIter = aMap.find((int)theVariable);
	return anIter == aMap.end() ? ResourceId::RESOURCE_ID_MAX : (ResourceId)anIter->second;
}
/*
	*aMap.end() => __asm 
	{ 
		mov eax,[aMap+04]
	}
	anIter == aMap.end() => __asm
	{ 
		mov edi,[aMap+04]  ; edi = *aMap.end()
		mov ebx,[anIter]   ; ebx = *anIter
		cmp ebx,edi        ; this 与 other 的 “==”操作，比较 *this 与 *other 是否相同
	}
*/