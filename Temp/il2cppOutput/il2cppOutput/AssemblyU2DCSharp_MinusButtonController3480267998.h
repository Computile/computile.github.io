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
#include "AssemblyU2DCSharp_MinusButtonController_State80204913.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MinusButtonController
struct  MinusButtonController_t3480267998  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Sprite MinusButtonController::sprite1
	Sprite_t4006040370 * ___sprite1_2;
	// UnityEngine.Sprite MinusButtonController::sprite2
	Sprite_t4006040370 * ___sprite2_3;

public:
	inline static int32_t get_offset_of_sprite1_2() { return static_cast<int32_t>(offsetof(MinusButtonController_t3480267998, ___sprite1_2)); }
	inline Sprite_t4006040370 * get_sprite1_2() const { return ___sprite1_2; }
	inline Sprite_t4006040370 ** get_address_of_sprite1_2() { return &___sprite1_2; }
	inline void set_sprite1_2(Sprite_t4006040370 * value)
	{
		___sprite1_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprite1_2, value);
	}

	inline static int32_t get_offset_of_sprite2_3() { return static_cast<int32_t>(offsetof(MinusButtonController_t3480267998, ___sprite2_3)); }
	inline Sprite_t4006040370 * get_sprite2_3() const { return ___sprite2_3; }
	inline Sprite_t4006040370 ** get_address_of_sprite2_3() { return &___sprite2_3; }
	inline void set_sprite2_3(Sprite_t4006040370 * value)
	{
		___sprite2_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprite2_3, value);
	}
};

struct MinusButtonController_t3480267998_StaticFields
{
public:
	// MinusButtonController/State MinusButtonController::state
	int32_t ___state_4;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MinusButtonController_t3480267998_StaticFields, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
