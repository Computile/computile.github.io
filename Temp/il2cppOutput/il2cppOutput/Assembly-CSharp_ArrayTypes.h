#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// SimplePool/Pool
struct Pool_t2493500;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_SimplePool_Pool2493500.h"

#pragma once
// SimplePool/Pool[]
struct PoolU5BU5D_t3068292949  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Pool_t2493500 * m_Items[1];

public:
	inline Pool_t2493500 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Pool_t2493500 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Pool_t2493500 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
