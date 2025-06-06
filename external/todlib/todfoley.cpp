#include "todlib/todfoley.hpp"
#include <todlib/toddebug.hpp>
#include "todlib/todcommon.hpp"
#include <PopLib/audio/openalsoundmanager.hpp>

int gFoleyParamArraySize;        //[0x6A9F04]
FoleyParams* gFoleyParamArray;   //[0x6A9F00]

FoleyParams gLawnFoleyParamArray[(int)FoleyType::NUM_FOLEY] = {  //0x69FAD0
	{ FoleyType::FOLEY_SUN,                     10.0f,  { &PopLib::SOUND_POINTS}, 0U },
	{ FoleyType::FOLEY_SPLAT,                   10.0f,  { &PopLib::SOUND_SPLAT, &PopLib::SOUND_SPLAT2, &PopLib::SOUND_SPLAT3}, 0U },
	{ FoleyType::FOLEY_LAWNMOWER,               10.0f,  { &PopLib::SOUND_LAWNMOWER}, 0U },
	{ FoleyType::FOLEY_THROW,                   10.0f,  { &PopLib::SOUND_THROW, &PopLib::SOUND_THROW, &PopLib::SOUND_THROW, &PopLib::SOUND_THROW2 }, 0U },
	{ FoleyType::FOLEY_SPAWN_SUN,               10.0f,  { &PopLib::SOUND_THROW}, 0U },
	{ FoleyType::FOLEY_CHOMP,                   0.0f,   { &PopLib::SOUND_CHOMP, &PopLib::SOUND_CHOMP2}, 0U },
	{ FoleyType::FOLEY_CHOMP_SOFT,              4.0f,   { &PopLib::SOUND_CHOMPSOFT}, 0U },
	{ FoleyType::FOLEY_PLANT,                   0.0f,   { &PopLib::SOUND_PLANT, &PopLib::SOUND_PLANT2}, 0U },
	{ FoleyType::FOLEY_USE_SHOVEL,              0.0f,   { &PopLib::SOUND_PLANT2}, 0U },
	{ FoleyType::FOLEY_DROP,                    0.0f,   { &PopLib::SOUND_TAP2}, 0U },
	{ FoleyType::FOLEY_BLEEP,                   0.0f,   { &PopLib::SOUND_BLEEP}, 0U },
	{ FoleyType::FOLEY_GROAN,                   0.0f,   { &PopLib::SOUND_GROAN, &PopLib::SOUND_GROAN2, &PopLib::SOUND_GROAN3, &PopLib::SOUND_GROAN4, &PopLib::SOUND_GROAN5, &PopLib::SOUND_GROAN6 }, 0U },
	{ FoleyType::FOLEY_BRAINS,                  0.0f,   { &PopLib::SOUND_GROAN, &PopLib::SOUND_GROAN2, &PopLib::SOUND_GROAN3, &PopLib::SOUND_GROAN4, &PopLib::SOUND_GROAN5, &PopLib::SOUND_GROAN6, &PopLib::SOUND_SUKHBIR4, &PopLib::SOUND_SUKHBIR5, &PopLib::SOUND_SUKHBIR6 }, 0U },
	{ FoleyType::FOLEY_SUKHBIR,                 0.0f,   { &PopLib::SOUND_GROAN, &PopLib::SOUND_GROAN2, &PopLib::SOUND_GROAN3, &PopLib::SOUND_GROAN4, &PopLib::SOUND_GROAN5, &PopLib::SOUND_GROAN6, &PopLib::SOUND_SUKHBIR, &PopLib::SOUND_SUKHBIR2, &PopLib::SOUND_SUKHBIR3 }, 0U },
	{ FoleyType::FOLEY_JACKINTHEBOX,            0.0f,   { &PopLib::SOUND_JACKINTHEBOX}, 7U },
	{ FoleyType::FOLEY_ART_CHALLENGE,           0.0f,   { &PopLib::SOUND_DIAMOND}, 0U },
	{ FoleyType::FOLEY_ZAMBONI,                 5.0f,   { &PopLib::SOUND_ZAMBONI}, 0U },
	{ FoleyType::FOLEY_THUNDER,                 10.0f,  { &PopLib::SOUND_THUNDER}, 0U },
	{ FoleyType::FOLEY_FROZEN,                  0.0f,   { &PopLib::SOUND_FROZEN}, 0U },
	{ FoleyType::FOLEY_ZOMBIESPLASH,            10.0f,  { &PopLib::SOUND_PLANT_WATER, &PopLib::SOUND_ZOMBIE_ENTERING_WATER}, 0U },
	{ FoleyType::FOLEY_BOWLINGIMPACT,           -3.0f,  { &PopLib::SOUND_BOWLINGIMPACT}, 0U },
	{ FoleyType::FOLEY_SQUISH,                  0.0f,   { &PopLib::SOUND_CHOMP, &PopLib::SOUND_CHOMP2}, 0U },
	{ FoleyType::FOLEY_TIRE_POP,                0.0f,   { &PopLib::SOUND_BALLOON_POP}, 0U },
	{ FoleyType::FOLEY_EXPLOSION,               0.0f,   { &PopLib::SOUND_EXPLOSION}, 0U },
	{ FoleyType::FOLEY_SLURP,                   2.0f,   { &PopLib::SOUND_SLURP}, 0U },
	{ FoleyType::FOLEY_LIMBS_POP,               10.0f,  { &PopLib::SOUND_LIMBS_POP}, 0U },
	{ FoleyType::FOLEY_POGO_ZOMBIE,             4.0f,   { &PopLib::SOUND_POGO_ZOMBIE}, 0U },
	{ FoleyType::FOLEY_SNOW_PEA_SPARKLES,       10.0f,  { &PopLib::SOUND_SNOW_PEA_SPARKLES}, 0U },
	{ FoleyType::FOLEY_ZOMBIE_FALLING,          10.0f,  { &PopLib::SOUND_ZOMBIE_FALLING_1, &PopLib::SOUND_ZOMBIE_FALLING_2}, 0U },
	{ FoleyType::FOLEY_PUFF,                    10.0f,  { &PopLib::SOUND_PUFF}, 0U },
	{ FoleyType::FOLEY_FUME,                    10.0f,  { &PopLib::SOUND_FUME}, 0U },
	{ FoleyType::FOLEY_COIN,                    10.0f,  { &PopLib::SOUND_COIN}, 0U },
	{ FoleyType::FOLEY_KERNEL_SPLAT,            10.0f,  { &PopLib::SOUND_KERNELPULT, &PopLib::SOUND_KERNELPULT2}, 0U },
	{ FoleyType::FOLEY_DIGGER,                  0.0f,   { &PopLib::SOUND_DIGGER_ZOMBIE}, 7U },
	{ FoleyType::FOLEY_JACK_SURPRISE,           1.0f,   { &PopLib::SOUND_JACK_SURPRISE, &PopLib::SOUND_JACK_SURPRISE, &PopLib::SOUND_JACK_SURPRISE2}, 0U },
	{ FoleyType::FOLEY_VASE_BREAKING,           -5.0f,  { &PopLib::SOUND_VASE_BREAKING}, 0U },
	{ FoleyType::FOLEY_POOL_CLEANER,            2.0f,   { &PopLib::SOUND_POOL_CLEANER}, 0U },
	{ FoleyType::FOLEY_BASKETBALL,              10.0f,  { &PopLib::SOUND_BASKETBALL}, 0U },
	{ FoleyType::FOLEY_IGNITE,                  5.0f,   { &PopLib::SOUND_IGNITE, &PopLib::SOUND_IGNITE, &PopLib::SOUND_IGNITE, &PopLib::SOUND_IGNITE2}, 0U },
	{ FoleyType::FOLEY_FIREPEA,                 10.0f,  { &PopLib::SOUND_FIREPEA}, 0U },
	{ FoleyType::FOLEY_THUMP,                   2.0f,   { &PopLib::SOUND_GARGANTUAR_THUMP}, 0U },
	{ FoleyType::FOLEY_SQUASH_HMM,              2.0f,   { &PopLib::SOUND_SQUASH_HMM, &PopLib::SOUND_SQUASH_HMM, &PopLib::SOUND_SQUASH_HMM2}, 0U },
	{ FoleyType::FOLEY_MAGNETSHROOM,            2.0f,   { &PopLib::SOUND_MAGNETSHROOM}, 0U },
	{ FoleyType::FOLEY_BUTTER,                  2.0f,   { &PopLib::SOUND_BUTTER}, 0U },
	{ FoleyType::FOLEY_BUNGEE_SCREAM,           2.0f,   { &PopLib::SOUND_BUNGEE_SCREAM, &PopLib::SOUND_BUNGEE_SCREAM2, &PopLib::SOUND_BUNGEE_SCREAM3}, 0U },
	{ FoleyType::FOLEY_BOSS_EXPLOSION_SMALL,    2.0f,   { &PopLib::SOUND_EXPLOSION}, 0U },
	{ FoleyType::FOLEY_SHIELD_HIT,              10.0f,  { &PopLib::SOUND_SHIELDHIT, &PopLib::SOUND_SHIELDHIT2}, 0U },
	{ FoleyType::FOLEY_SWING,                   2.0f,   { &PopLib::SOUND_SWING}, 0U },
	{ FoleyType::FOLEY_BONK,                    2.0f,   { &PopLib::SOUND_BONK}, 0U },
	{ FoleyType::FOLEY_RAIN,                    0.0f,   { &PopLib::SOUND_RAIN}, 5U },
	{ FoleyType::FOLEY_DOLPHIN_BEFORE_JUMPING,  0.0f,   { &PopLib::SOUND_DOLPHIN_BEFORE_JUMPING}, 0U },
	{ FoleyType::FOLEY_DOLPHIN_APPEARS,         0.0f,   { &PopLib::SOUND_DOLPHIN_APPEARS}, 0U },
	{ FoleyType::FOLEY_PLANT_WATER,             0.0f,   { &PopLib::SOUND_PLANT_WATER}, 0U },
	{ FoleyType::FOLEY_ZOMBIE_ENTERING_WATER,   0.0f,   { &PopLib::SOUND_ZOMBIE_ENTERING_WATER}, 0U },
	{ FoleyType::FOLEY_GRAVEBUSTERCHOMP,        0.0f,   { &PopLib::SOUND_GRAVEBUSTERCHOMP}, 4U },
	{ FoleyType::FOLEY_CHERRYBOMB,              0.0f,   { &PopLib::SOUND_CHERRYBOMB}, 0U },
	{ FoleyType::FOLEY_JALAPENO_IGNITE,         0.0f,   { &PopLib::SOUND_JALAPENO}, 0U },
	{ FoleyType::FOLEY_REVERSE_EXPLOSION,       0.0f,   { &PopLib::SOUND_REVERSE_EXPLOSION}, 0U },
	{ FoleyType::FOLEY_PLASTIC_HIT,             5.0f,   { &PopLib::SOUND_PLASTICHIT, &PopLib::SOUND_PLASTICHIT2}, 0U },
	{ FoleyType::FOLEY_WINMUSIC,                0.0f,   { &PopLib::SOUND_WINMUSIC}, 8U },
	{ FoleyType::FOLEY_BALLOONINFLATE,          10.0f,  { &PopLib::SOUND_BALLOONINFLATE}, 0U },
	{ FoleyType::FOLEY_BIGCHOMP,                -2.0f,  { &PopLib::SOUND_BIGCHOMP}, 0U },
	{ FoleyType::FOLEY_MELONIMPACT,             -5.0f,  { &PopLib::SOUND_MELONIMPACT, &PopLib::SOUND_MELONIMPACT2}, 0U },
	{ FoleyType::FOLEY_PLANTGROW,               -2.0f,  { &PopLib::SOUND_PLANTGROW}, 0U },
	{ FoleyType::FOLEY_SHOOP,                   -5.0f,  { &PopLib::SOUND_SHOOP}, 0U },
	{ FoleyType::FOLEY_JUICY,                   2.0f,   { &PopLib::SOUND_JUICY}, 0U },
	{ FoleyType::FOLEY_NEWSPAPER_RARRGH,        -2.0f,  { &PopLib::SOUND_NEWSPAPER_RARRGH, &PopLib::SOUND_NEWSPAPER_RARRGH2, &PopLib::SOUND_NEWSPAPER_RARRGH2}, 0U },
	{ FoleyType::FOLEY_NEWSPAPER_RIP,           -2.0f,  { &PopLib::SOUND_NEWSPAPER_RIP}, 0U },
	{ FoleyType::FOLEY_FLOOP,                   0.0f,   { &PopLib::SOUND_FLOOP}, 0U },
	{ FoleyType::FOLEY_COFFEE,                  0.0f,   { &PopLib::SOUND_COFFEE}, 0U },
	{ FoleyType::FOLEY_LOW_GROAN,               2.0f,   { &PopLib::SOUND_LOWGROAN, &PopLib::SOUND_LOWGROAN2}, 0U },
	{ FoleyType::FOLEY_PRIZE,                   0.0f,   { &PopLib::SOUND_PRIZE}, 0U },
	{ FoleyType::FOLEY_YUCK,                    1.0f,   { &PopLib::SOUND_YUCK, &PopLib::SOUND_YUCK, &PopLib::SOUND_YUCK2}, 0U },
	{ FoleyType::FOLEY_UMBRELLA,                2.0f,   { &PopLib::SOUND_THROW2}, 0U },
	{ FoleyType::FOLEY_GRASSSTEP,               2.0f,   { &PopLib::SOUND_GRASSSTEP}, 0U },
	{ FoleyType::FOLEY_SHOVEL,                  5.0f,   { &PopLib::SOUND_SHOVEL}, 0U },
	{ FoleyType::FOLEY_COB_LAUNCH,              10.0f,  { &PopLib::SOUND_COBLAUNCH}, 0U },
	{ FoleyType::FOLEY_WATERING,                10.0f,  { &PopLib::SOUND_WATERING}, 0U },
	{ FoleyType::FOLEY_POLEVAULT,               5.0f,   { &PopLib::SOUND_POLEVAULT}, 0U },
	{ FoleyType::FOLEY_GRAVESTONE_RUMBLE,       10.0f,  { &PopLib::SOUND_GRAVESTONE_RUMBLE}, 0U },
	{ FoleyType::FOLEY_DIRT_RISE,               5.0f,   { &PopLib::SOUND_DIRT_RISE}, 0U },
	{ FoleyType::FOLEY_FERTILIZER,              0.0f,   { &PopLib::SOUND_FERTILIZER}, 0U },
	{ FoleyType::FOLEY_PORTAL,                  0.0f,   { &PopLib::SOUND_PORTAL}, 0U },
	{ FoleyType::FOLEY_WAKEUP,                  0.0f,   { &PopLib::SOUND_WAKEUP}, 0U },
	{ FoleyType::FOLEY_BUGSPRAY,                0.0f,   { &PopLib::SOUND_BUGSPRAY}, 0U },
	{ FoleyType::FOLEY_SCREAM,                  0.0f,   { &PopLib::SOUND_SCREAM}, 0U },
	{ FoleyType::FOLEY_PAPER,                   0.0f,   { &PopLib::SOUND_PAPER}, 0U },
	{ FoleyType::FOLEY_MONEYFALLS,              0.0f,   { &PopLib::SOUND_MONEYFALLS}, 0U },
	{ FoleyType::FOLEY_IMP,                     5.0f,   { &PopLib::SOUND_IMP, &PopLib::SOUND_IMP2}, 0U },
	{ FoleyType::FOLEY_HYDRAULIC_SHORT,         3.0f,   { &PopLib::SOUND_HYDRAULIC_SHORT}, 0U },
	{ FoleyType::FOLEY_HYDRAULIC,               0.0f,   { &PopLib::SOUND_HYDRAULIC}, 0U },
	{ FoleyType::FOLEY_GARGANTUDEATH,           3.0f,   { &PopLib::SOUND_GARGANTUDEATH}, 0U },
	{ FoleyType::FOLEY_CERAMIC,                 0.0f,   { &PopLib::SOUND_CERAMIC}, 0U },
	{ FoleyType::FOLEY_BOSS_BOULDER_ATTACK,     0.0f,   { &PopLib::SOUND_BOSSBOULDERATTACK}, 0U },
	{ FoleyType::FOLEY_CHIME,                   0.0f,   { &PopLib::SOUND_CHIME}, 0U },
	{ FoleyType::FOLEY_CRAZY_DAVE_SHORT,        0.0f,   { &PopLib::SOUND_CRAZYDAVESHORT1, &PopLib::SOUND_CRAZYDAVESHORT2, &PopLib::SOUND_CRAZYDAVESHORT3}, 16U },
	{ FoleyType::FOLEY_CRAZY_DAVE_LONG,         0.0f,   { &PopLib::SOUND_CRAZYDAVELONG1, &PopLib::SOUND_CRAZYDAVELONG2, &PopLib::SOUND_CRAZYDAVELONG3}, 16U },
	{ FoleyType::FOLEY_CRAZY_DAVE_EXTRA_LONG,   0.0f,   { &PopLib::SOUND_CRAZYDAVEEXTRALONG1, &PopLib::SOUND_CRAZYDAVEEXTRALONG2, &PopLib::SOUND_CRAZYDAVEEXTRALONG3}, 16U },
	{ FoleyType::FOLEY_CRAZY_DAVE_CRAZY,        0.0f,   { &PopLib::SOUND_CRAZYDAVECRAZY}, 0U },
	{ FoleyType::FOLEY_PHONOGRAPH,              0.0f,   { &PopLib::SOUND_PHONOGRAPH}, 0U },
	{ FoleyType::FOLEY_DANCER,                  0.0f,   { &PopLib::SOUND_DANCER}, 6U },
	{ FoleyType::FOLEY_FINAL_FANFARE,           0.0f,   { &PopLib::SOUND_FINALFANFARE}, 0U },
	{ FoleyType::FOLEY_CRAZY_DAVE_SCREAM,       0.0f,   { &PopLib::SOUND_CRAZYDAVESCREAM}, 0U },
	{ FoleyType::FOLEY_CRAZY_DAVE_SCREAM_2,     0.0f,   { &PopLib::SOUND_CRAZYDAVESCREAM2}, 0U }
};

FoleyInstance::FoleyInstance()
{
	mInstance = nullptr;
	mRefCount = 0;
	mPaused = false;
	mStartTime = 0;
	mPauseOffset = 0;
}

//0x514ED0
FoleyTypeData::FoleyTypeData()
{
	mLastVariationPlayed = -1;
}

int TodDSoundInstance::GetSoundPosition()
{
	ALint sampleOffset;
	alGetSourcei(mSoundSource, AL_SAMPLE_OFFSET, &sampleOffset);
	return sampleOffset;
}

void TodDSoundInstance::SetSoundPosition(int thePosition)
{
	alSourcei(mSoundSource, AL_SAMPLE_OFFSET, thePosition);
}

void TodFoleyInitialize(FoleyParams* theFoleyParamArray, int theFoleyParamArraySize)
{
	TOD_ASSERT(gFoleyParamArray == nullptr && gFoleyParamArraySize == 0);
	gFoleyParamArray = theFoleyParamArray;
	gFoleyParamArraySize = theFoleyParamArraySize;
}

void TodFoleyDispose()
{
	gFoleyParamArray = nullptr;
	gFoleyParamArraySize = 0;
}

//0x514F70
void SoundSystemReleaseFinishedInstances(TodFoley* theSoundSystem)
{
	for (int aFoleyType = 0; aFoleyType < gFoleyParamArraySize; aFoleyType++)
		for (int i = 0; i < MAX_FOLEY_INSTANCES; i++)
		{
			FoleyInstance* aFoleyInstance = &theSoundSystem->mFoleyTypeData[aFoleyType].mFoleyInstances[i];
			if (aFoleyInstance->mRefCount == 0)
			{
				TOD_ASSERT(aFoleyInstance->mInstance == nullptr);
			}
			else if (!aFoleyInstance->mPaused)
			{
				TOD_ASSERT(aFoleyInstance->mInstance);
				if (!aFoleyInstance->mInstance->IsPlaying())
				{
					aFoleyInstance->mInstance->Release();
					aFoleyInstance->mInstance = nullptr;
					aFoleyInstance->mRefCount = 0;
				}
			}
		}
}

//0x514FE0
bool SoundSystemHasFoleyPlayedTooRecently(TodFoley* theSoundSystem, FoleyType theFoleyType)
{
	FoleyTypeData* aFoleyData = &theSoundSystem->mFoleyTypeData[(int)theFoleyType];
	for (int i = 0; i < MAX_FOLEY_INSTANCES; i++)
	{
		FoleyInstance* aFoleyInstance = &aFoleyData->mFoleyInstances[i];
		if (aFoleyInstance->mRefCount != 0 && gAppBase->mUpdateCount - aFoleyInstance->mStartTime < 10)  // 若同种音效存在近 10 cs 内播放的实例
			return true;
	}
	return false;
}

FoleyParams* LookupFoley(FoleyType theFoleyType)
{
	TOD_ASSERT(theFoleyType >= 0 && theFoleyType < gFoleyParamArraySize);
	TOD_ASSERT(gFoleyParamArraySize < MAX_FOLEY_TYPES);
	FoleyParams* aFoleyParams = &gFoleyParamArray[(int)theFoleyType];
	TOD_ASSERT(aFoleyParams->mFoleyType == theFoleyType);
	return aFoleyParams;
}

FoleyInstance* SoundSystemFindInstance(TodFoley* theSoundSystem, FoleyType theFoleyType)
{
	FoleyTypeData* aFoleyData = &theSoundSystem->mFoleyTypeData[(int)theFoleyType];
	for (int i = 0; i < MAX_FOLEY_INSTANCES; i++)
	{
		FoleyInstance* aFoleyInstance = &aFoleyData->mFoleyInstances[i];
		if (aFoleyInstance->mRefCount > 0)
		{
			TOD_ASSERT(aFoleyInstance->mInstance);
			return aFoleyInstance;
		}
	}
	return nullptr;
}

FoleyInstance* SoundSystemGetFreeInstanceIndex(TodFoley* theSoundSystem, FoleyType theFoleyType)
{
	FoleyTypeData* aFoleyData = &theSoundSystem->mFoleyTypeData[(int)theFoleyType];
	for (int i = 0; i < MAX_FOLEY_INSTANCES; i++)
	{
		FoleyInstance* aFoleyInstance = &aFoleyData->mFoleyInstances[i];
		if (aFoleyInstance->mRefCount == 0)
		{
			TOD_ASSERT(aFoleyInstance->mInstance == nullptr);
			return aFoleyInstance;
		}
	}
	return nullptr;
}

//0x515020
void TodFoley::PlayFoleyPitch(FoleyType theFoleyType, float thePitch)
{
	FoleyParams* aFoleyParams = LookupFoley(theFoleyType);
	SoundSystemReleaseFinishedInstances(this);  // 释放已播放完成的音效实例
	if (SoundSystemHasFoleyPlayedTooRecently(this, theFoleyType) && !TestBit(aFoleyParams->mFoleyFlags, FoleyFlags::FOLEYFLAGS_LOOP))
		return;  // 非循环音效不可重叠播放

	if (TestBit(aFoleyParams->mFoleyFlags, FoleyFlags::FOLEYFLAGS_ONE_AT_A_TIME))  // 如果定义了不可叠加播放
	{
		FoleyInstance* aFoleyInstance = SoundSystemFindInstance(this, theFoleyType);
		if (aFoleyInstance != nullptr)
		{
			aFoleyInstance->mRefCount++;  // 增加 1 次引用计数
			aFoleyInstance->mStartTime = gAppBase->mUpdateCount;  // 刷新开始的时间
			return;
		}
	}
	FoleyInstance* aFoleyInstance = SoundSystemGetFreeInstanceIndex(this, theFoleyType);
	if (aFoleyInstance == nullptr)  // 如果已经存在 8 个音效实例
		return;

	int aVariations = 0;
	int aVariationsArray[10];
	FoleyTypeData* aFoleyData = &mFoleyTypeData[(int)theFoleyType];
	for (int i = 0; i < 10; i++)
	{
		if (!TestBit(aFoleyParams->mFoleyFlags, FoleyFlags::FOLEYFLAGS_DONT_REPEAT) || aFoleyData->mLastVariationPlayed != i)  // 如果未重复或不禁止重复
		{
			if (aFoleyParams->mSfxID[i] == nullptr)
				break;
			aVariationsArray[aVariations] = i;
			aVariations++;
		}
	}
	TOD_ASSERT(aVariations > 0);
	int aVariation = TodPickFromArray(aVariationsArray, aVariations);
	aFoleyData->mLastVariationPlayed = aVariation;
	SoundInstance* aSoundInstance = gAppBase->mSoundManager->GetSoundInstance(*aFoleyParams->mSfxID[aVariation]);
	if (aSoundInstance == nullptr)
		return;

	aFoleyInstance->mInstance = aSoundInstance;
	aFoleyInstance->mRefCount = 1;
	aFoleyInstance->mStartTime = gAppBase->mUpdateCount;
	aFoleyData->mLastVariationPlayed = aVariation;
	if (thePitch != 0.0f)  // 如果参数指定了音高
		aSoundInstance->AdjustPitch(thePitch);  // 调整音高
	if (TestBit(aFoleyParams->mFoleyFlags, FoleyFlags::FOLEYFLAGS_USES_MUSIC_VOLUME))  // 如果定义了使用音乐音量
		ApplyMusicVolume(aFoleyInstance);  // 将音效的音量调整为与音乐一致
	bool aIsLooping = TestBit(aFoleyParams->mFoleyFlags, FoleyFlags::FOLEYFLAGS_LOOP);
	aSoundInstance->Play(aIsLooping, false);  // 正式开始播放音效
}

//0x515240
void TodFoley::PlayFoley(FoleyType theFoleyType)
{
	FoleyParams* aFoleyParams = LookupFoley(theFoleyType);
	float aPitch = 0.0f;
	if (aFoleyParams->mPitchRange != 0.0f)  // 如果定义了音高范围
		aPitch = PopLib::Rand(aFoleyParams->mPitchRange);  // 在范围内随机选取一个音高
	PlayFoleyPitch(theFoleyType, aPitch);
}

//0x515290
void TodFoley::StopFoley(FoleyType theFoleyType)
{
	SoundSystemReleaseFinishedInstances(this);
	FoleyInstance* aFoleyInstance = SoundSystemFindInstance(this, theFoleyType);
	if (aFoleyInstance == nullptr)
		return;

	TOD_ASSERT(aFoleyInstance->mRefCount > 0);
	TOD_ASSERT(aFoleyInstance->mInstance);
	aFoleyInstance->mRefCount--;  // 减少 1 次引用计数
	if (aFoleyInstance->mRefCount == 0)  // 如果减少之后无引用，则直接释放
	{
		aFoleyInstance->mInstance->Release();
		aFoleyInstance->mInstance = nullptr;
	}
}

//0x5152D0
void TodFoley::GamePause(bool theEnteringPause)
{
	SoundSystemReleaseFinishedInstances(this);
	for (int aFoleyType = 0; aFoleyType < gFoleyParamArraySize; aFoleyType++)
	{
		FoleyParams* aFoleyParams = LookupFoley((FoleyType)aFoleyType);
		if (TestBit(aFoleyParams->mFoleyFlags, FoleyFlags::FOLEYFLAGS_MUTE_ON_PAUSE))  // 如果指定了暂停时静默
		{
			FoleyTypeData* aFoleyData = &mFoleyTypeData[aFoleyType];
			for (int i = 0; i < MAX_FOLEY_INSTANCES; i++)  // 设定每一个音效实例的暂停与否
			{
				FoleyInstance* aFoleyInstance = &aFoleyData->mFoleyInstances[i];
				if (aFoleyInstance->mRefCount != 0)  // 如果音效实例存在引用
				{
					TodDSoundInstance* aSoundInstance = (TodDSoundInstance*)aFoleyInstance->mInstance;
					if (theEnteringPause)
					{
						aFoleyInstance->mPaused = true;
						if (aSoundInstance->mSoundSource == NULL)
						{
							aFoleyInstance->mPauseOffset = 0;
							aSoundInstance->Stop();
						}
						else
						{
							aFoleyInstance->mPauseOffset = aSoundInstance->GetSoundPosition();  // 备份暂停时的播放进度
							aSoundInstance->Stop();
						}
					}
					else if (aFoleyInstance->mPaused)
					{
						aFoleyInstance->mPaused = false;
						bool aIsLooping = TestBit(aFoleyParams->mFoleyFlags, FoleyFlags::FOLEYFLAGS_LOOP);
						aSoundInstance->Play(aIsLooping, false);
						if (aSoundInstance->mSoundSource != NULL)
							aSoundInstance->SetSoundPosition(aFoleyInstance->mPauseOffset);  // 还原暂停前的播放进度
					}
				}
			}
		}
	}
}

//0x5153F0
void TodFoley::CancelPausedFoley()
{
	SoundSystemReleaseFinishedInstances(this);
	for (int aFoleyType = 0; aFoleyType < gFoleyParamArraySize; aFoleyType++)
	{
		FoleyTypeData* aFoleyData = &mFoleyTypeData[aFoleyType];
		for (int i = 0; i < MAX_FOLEY_INSTANCES; i++)  // 判断每一个音效实例的暂停与否
		{
			FoleyInstance* aFoleyInstance = &aFoleyData->mFoleyInstances[i];
			if (aFoleyInstance->mRefCount != 0 && aFoleyInstance->mPaused)  // 如果音效实例存在引用且处于暂停状态
			{
				aFoleyInstance->mRefCount = 0;
				aFoleyInstance->mInstance->Release();
				aFoleyInstance->mInstance = nullptr;
			}
		}
	}
}

//0x515460
void TodFoley::ApplyMusicVolume(FoleyInstance* theFoleyInstance)
{
	if (gAppBase->mSfxVolume < 1e-6)
		theFoleyInstance->mInstance->SetVolume(0.0);
	else
		theFoleyInstance->mInstance->SetVolume(gAppBase->mMusicVolume / gAppBase->mSfxVolume);  // 这样得到的音量在乘以音效音量后就与音乐音量相等
}

//0x5154A0
void TodFoley::RehookupSoundWithMusicVolume()
{
	SoundSystemReleaseFinishedInstances(this);
	for (int aFoleyType = 0; aFoleyType < gFoleyParamArraySize; aFoleyType++)
	{
		FoleyParams* aFoleyParams = LookupFoley((FoleyType)aFoleyType);
		if (TestBit(aFoleyParams->mFoleyFlags, FoleyFlags::FOLEYFLAGS_USES_MUSIC_VOLUME))  // 如果规定了使用音乐音量
		{
			FoleyTypeData* aFoleyData = &mFoleyTypeData[aFoleyType];
			for (int i = 0; i < MAX_FOLEY_INSTANCES; i++)  // 设定每一个音效实例的音量
			{
				FoleyInstance* aFoleyInstance = &aFoleyData->mFoleyInstances[i];
				if (aFoleyInstance->mRefCount != 0)  // 如果音效实例存在引用
					ApplyMusicVolume(aFoleyInstance);
			}
		}
	}
}

//0x515560
bool TodFoley::IsFoleyPlaying(FoleyType theFoleyType)
{
	SoundSystemReleaseFinishedInstances(this);
	return SoundSystemFindInstance(this, theFoleyType) != nullptr;
}
