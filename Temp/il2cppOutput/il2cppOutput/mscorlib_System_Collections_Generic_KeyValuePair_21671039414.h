#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// SimplePool/Pool
struct Pool_t2493500;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,SimplePool/Pool>
struct  KeyValuePair_2_t1671039414 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	GameObject_t4012695102 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Pool_t2493500 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1671039414, ___key_0)); }
	inline GameObject_t4012695102 * get_key_0() const { return ___key_0; }
	inline GameObject_t4012695102 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(GameObject_t4012695102 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1671039414, ___value_1)); }
	inline Pool_t2493500 * get_value_1() const { return ___value_1; }
	inline Pool_t2493500 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Pool_t2493500 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
