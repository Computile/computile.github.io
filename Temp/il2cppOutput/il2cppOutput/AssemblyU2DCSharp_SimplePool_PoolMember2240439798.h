#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimplePool/Pool
struct Pool_t2493500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePool/PoolMember
struct  PoolMember_t2240439798  : public MonoBehaviour_t3012272455
{
public:
	// SimplePool/Pool SimplePool/PoolMember::myPool
	Pool_t2493500 * ___myPool_2;

public:
	inline static int32_t get_offset_of_myPool_2() { return static_cast<int32_t>(offsetof(PoolMember_t2240439798, ___myPool_2)); }
	inline Pool_t2493500 * get_myPool_2() const { return ___myPool_2; }
	inline Pool_t2493500 ** get_address_of_myPool_2() { return &___myPool_2; }
	inline void set_myPool_2(Pool_t2493500 * value)
	{
		___myPool_2 = value;
		Il2CppCodeGenWriteBarrier(&___myPool_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
