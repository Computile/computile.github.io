#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile
struct  Tile_t2606798  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Tile::value
	int32_t ___value_2;
	// System.Boolean Tile::upgradedThisTurn
	bool ___upgradedThisTurn_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___value_2)); }
	inline int32_t get_value_2() const { return ___value_2; }
	inline int32_t* get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(int32_t value)
	{
		___value_2 = value;
	}

	inline static int32_t get_offset_of_upgradedThisTurn_3() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___upgradedThisTurn_3)); }
	inline bool get_upgradedThisTurn_3() const { return ___upgradedThisTurn_3; }
	inline bool* get_address_of_upgradedThisTurn_3() { return &___upgradedThisTurn_3; }
	inline void set_upgradedThisTurn_3(bool value)
	{
		___upgradedThisTurn_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
