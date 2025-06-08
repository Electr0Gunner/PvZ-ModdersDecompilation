#ifndef __POOLEFFECT_H__
#define __POOLEFFECT_H__

#include "constenums.hpp"

constexpr const int CAUSTIC_IMAGE_WIDTH = 128;
constexpr const int CAUSTIC_IMAGE_HEIGHT = 64;

namespace PopLib
{
	class MemoryImage;
	class Graphics;
};

class LawnApp;
class PoolEffect
{
public:
	unsigned char*		mCausticGrayscaleImage;
	PopLib::MemoryImage*	mCausticImage;
	LawnApp*			mApp;
	int					mPoolCounter;

public:
	void				PoolEffectInitialize();
	void				PoolEffectDispose();
	void				PoolEffectDraw(PopLib::Graphics* g, bool theIsNight);
	void				UpdateWaterEffect(PopLib::Graphics* g);
	unsigned int		BilinearLookupFixedPoint(unsigned int u, unsigned int v);
	//unsigned int		BilinearLookup(float u, float v);
	void				PoolEffectUpdate();
};

#endif
