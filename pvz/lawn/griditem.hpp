#ifndef __GRIDITEM_H__
#define __GRIDITEM_H__

#include "constenums.hpp"

#define NUM_MOTION_TRAIL_FRAMES 12

class LawnApp;
class Board;
class Zombie;
namespace PopLib
{
	class Graphics;
};

class MotionTrailFrame
{
public:
	float					mPosX;
	float					mPosY;
	float					mAnimTime;
};

class GridItem
{
public:
	LawnApp*				mApp;											//+0x0
	Board*					mBoard;											//+0x4
	GridItemType			mGridItemType;									//+0x8
	GridItemState			mGridItemState;									//+0xC
	int						mGridX;											//+0x10
	int						mGridY;											//+0x14
	int						mGridItemCounter;								//+0x18
	int						mRenderOrder;									//+0x1C
	bool					mDead;											//+0x20
	float					mPosX;											//+0x24
	float					mPosY;											//+0x28
	float					mGoalX;											//+0x2C
	float					mGoalY;											//+0x30
	ReanimationID			mGridItemReanimID;								//+0x34
	ParticleSystemID		mGridItemParticleID;							//+0x38
	ZombieType				mZombieType;									//+0x3C
	SeedType				mSeedType;										//+0x40
	ScaryPotType			mScaryPotType;									//+0x44
	bool					mHighlighted;									//+0x48
	int						mTransparentCounter;							//+0x4C
	int						mSunCount;										//+0x50
	MotionTrailFrame		mMotionTrailFrames[NUM_MOTION_TRAIL_FRAMES];	//+0x54
	int						mMotionTrailCount;								//+0xE4

public:
	GridItem();

	void					DrawLadder(PopLib::Graphics* g);
	void					DrawCrater(PopLib::Graphics* g);
	void					DrawGraveStone(PopLib::Graphics* g);
	void					GridItemDie();
	void					AddGraveStoneParticles();
	void					DrawGridItem(PopLib::Graphics* g);
	void					DrawGridItemOverlay(PopLib::Graphics* g);
	void					OpenPortal();
	void					Update();
	void					ClosePortal();
	void					DrawScaryPot(PopLib::Graphics* g);
	void					UpdateScaryPot();
	void					UpdatePortal();
	void					DrawSquirrel(PopLib::Graphics* g);
	void					UpdateRake();
	Zombie*					RakeFindZombie();
	void					DrawIZombieBrain(PopLib::Graphics* g);
	void					UpdateBrain();
	void					DrawStinky(PopLib::Graphics* g);
	/*inline*/ bool			IsOpenPortal();
};

#endif
