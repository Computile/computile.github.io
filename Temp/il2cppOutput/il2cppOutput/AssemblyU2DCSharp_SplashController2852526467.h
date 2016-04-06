#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t4006040370;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_SplashController_State80204913.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SplashController
struct  SplashController_t2852526467  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Sprite SplashController::sprite1
	Sprite_t4006040370 * ___sprite1_2;
	// UnityEngine.Sprite SplashController::sprite2
	Sprite_t4006040370 * ___sprite2_3;
	// UnityEngine.Sprite SplashController::sprite3
	Sprite_t4006040370 * ___sprite3_4;
	// UnityEngine.Sprite SplashController::sprite4
	Sprite_t4006040370 * ___sprite4_5;

public:
	inline static int32_t get_offset_of_sprite1_2() { return static_cast<int32_t>(offsetof(SplashController_t2852526467, ___sprite1_2)); }
	inline Sprite_t4006040370 * get_sprite1_2() const { return ___sprite1_2; }
	inline Sprite_t4006040370 ** get_address_of_sprite1_2() { return &___sprite1_2; }
	inline void set_sprite1_2(Sprite_t4006040370 * value)
	{
		___sprite1_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprite1_2, value);
	}

	inline static int32_t get_offset_of_sprite2_3() { return static_cast<int32_t>(offsetof(SplashController_t2852526467, ___sprite2_3)); }
	inline Sprite_t4006040370 * get_sprite2_3() const { return ___sprite2_3; }
	inline Sprite_t4006040370 ** get_address_of_sprite2_3() { return &___sprite2_3; }
	inline void set_sprite2_3(Sprite_t4006040370 * value)
	{
		___sprite2_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprite2_3, value);
	}

	inline static int32_t get_offset_of_sprite3_4() { return static_cast<int32_t>(offsetof(SplashController_t2852526467, ___sprite3_4)); }
	inline Sprite_t4006040370 * get_sprite3_4() const { return ___sprite3_4; }
	inline Sprite_t4006040370 ** get_address_of_sprite3_4() { return &___sprite3_4; }
	inline void set_sprite3_4(Sprite_t4006040370 * value)
	{
		___sprite3_4 = value;
		Il2CppCodeGenWriteBarrier(&___sprite3_4, value);
	}

	inline static int32_t get_offset_of_sprite4_5() { return static_cast<int32_t>(offsetof(SplashController_t2852526467, ___sprite4_5)); }
	inline Sprite_t4006040370 * get_sprite4_5() const { return ___sprite4_5; }
	inline Sprite_t4006040370 ** get_address_of_sprite4_5() { return &___sprite4_5; }
	inline void set_sprite4_5(Sprite_t4006040370 * value)
	{
		___sprite4_5 = value;
		Il2CppCodeGenWriteBarrier(&___sprite4_5, value);
	}
};

struct SplashController_t2852526467_StaticFields
{
public:
	// SplashController/State SplashController::state
	int32_t ___state_6;
	// System.Single SplashController::LOGO_ANIMATION_DURATION
	float ___LOGO_ANIMATION_DURATION_7;
	// System.Int32 SplashController::SPLASH_DURATION
	int32_t ___SPLASH_DURATION_8;

public:
	inline static int32_t get_offset_of_state_6() { return static_cast<int32_t>(offsetof(SplashController_t2852526467_StaticFields, ___state_6)); }
	inline int32_t get_state_6() const { return ___state_6; }
	inline int32_t* get_address_of_state_6() { return &___state_6; }
	inline void set_state_6(int32_t value)
	{
		___state_6 = value;
	}

	inline static int32_t get_offset_of_LOGO_ANIMATION_DURATION_7() { return static_cast<int32_t>(offsetof(SplashController_t2852526467_StaticFields, ___LOGO_ANIMATION_DURATION_7)); }
	inline float get_LOGO_ANIMATION_DURATION_7() const { return ___LOGO_ANIMATION_DURATION_7; }
	inline float* get_address_of_LOGO_ANIMATION_DURATION_7() { return &___LOGO_ANIMATION_DURATION_7; }
	inline void set_LOGO_ANIMATION_DURATION_7(float value)
	{
		___LOGO_ANIMATION_DURATION_7 = value;
	}

	inline static int32_t get_offset_of_SPLASH_DURATION_8() { return static_cast<int32_t>(offsetof(SplashController_t2852526467_StaticFields, ___SPLASH_DURATION_8)); }
	inline int32_t get_SPLASH_DURATION_8() const { return ___SPLASH_DURATION_8; }
	inline int32_t* get_address_of_SPLASH_DURATION_8() { return &___SPLASH_DURATION_8; }
	inline void set_SPLASH_DURATION_8(int32_t value)
	{
		___SPLASH_DURATION_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
