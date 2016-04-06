#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_t2288133841;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePool/Pool
struct  Pool_t2493500  : public Il2CppObject
{
public:
	// System.Int32 SimplePool/Pool::nextId
	int32_t ___nextId_0;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> SimplePool/Pool::inactive
	Stack_1_t2288133841 * ___inactive_1;
	// UnityEngine.GameObject SimplePool/Pool::prefab
	GameObject_t4012695102 * ___prefab_2;

public:
	inline static int32_t get_offset_of_nextId_0() { return static_cast<int32_t>(offsetof(Pool_t2493500, ___nextId_0)); }
	inline int32_t get_nextId_0() const { return ___nextId_0; }
	inline int32_t* get_address_of_nextId_0() { return &___nextId_0; }
	inline void set_nextId_0(int32_t value)
	{
		___nextId_0 = value;
	}

	inline static int32_t get_offset_of_inactive_1() { return static_cast<int32_t>(offsetof(Pool_t2493500, ___inactive_1)); }
	inline Stack_1_t2288133841 * get_inactive_1() const { return ___inactive_1; }
	inline Stack_1_t2288133841 ** get_address_of_inactive_1() { return &___inactive_1; }
	inline void set_inactive_1(Stack_1_t2288133841 * value)
	{
		___inactive_1 = value;
		Il2CppCodeGenWriteBarrier(&___inactive_1, value);
	}

	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(Pool_t2493500, ___prefab_2)); }
	inline GameObject_t4012695102 * get_prefab_2() const { return ___prefab_2; }
	inline GameObject_t4012695102 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(GameObject_t4012695102 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
