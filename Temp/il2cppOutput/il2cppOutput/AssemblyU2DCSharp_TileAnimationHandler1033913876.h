#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileAnimationHandler
struct  TileAnimationHandler_t1033913876  : public MonoBehaviour_t3012272455
{
public:
	// System.Single TileAnimationHandler::scaleSpeed
	float ___scaleSpeed_2;
	// System.Single TileAnimationHandler::growSize
	float ___growSize_3;
	// UnityEngine.Transform TileAnimationHandler::_transform
	Transform_t284553113 * ____transform_4;
	// UnityEngine.Vector3 TileAnimationHandler::growVector
	Vector3_t3525329789  ___growVector_5;

public:
	inline static int32_t get_offset_of_scaleSpeed_2() { return static_cast<int32_t>(offsetof(TileAnimationHandler_t1033913876, ___scaleSpeed_2)); }
	inline float get_scaleSpeed_2() const { return ___scaleSpeed_2; }
	inline float* get_address_of_scaleSpeed_2() { return &___scaleSpeed_2; }
	inline void set_scaleSpeed_2(float value)
	{
		___scaleSpeed_2 = value;
	}

	inline static int32_t get_offset_of_growSize_3() { return static_cast<int32_t>(offsetof(TileAnimationHandler_t1033913876, ___growSize_3)); }
	inline float get_growSize_3() const { return ___growSize_3; }
	inline float* get_address_of_growSize_3() { return &___growSize_3; }
	inline void set_growSize_3(float value)
	{
		___growSize_3 = value;
	}

	inline static int32_t get_offset_of__transform_4() { return static_cast<int32_t>(offsetof(TileAnimationHandler_t1033913876, ____transform_4)); }
	inline Transform_t284553113 * get__transform_4() const { return ____transform_4; }
	inline Transform_t284553113 ** get_address_of__transform_4() { return &____transform_4; }
	inline void set__transform_4(Transform_t284553113 * value)
	{
		____transform_4 = value;
		Il2CppCodeGenWriteBarrier(&____transform_4, value);
	}

	inline static int32_t get_offset_of_growVector_5() { return static_cast<int32_t>(offsetof(TileAnimationHandler_t1033913876, ___growVector_5)); }
	inline Vector3_t3525329789  get_growVector_5() const { return ___growVector_5; }
	inline Vector3_t3525329789 * get_address_of_growVector_5() { return &___growVector_5; }
	inline void set_growVector_5(Vector3_t3525329789  value)
	{
		___growVector_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
