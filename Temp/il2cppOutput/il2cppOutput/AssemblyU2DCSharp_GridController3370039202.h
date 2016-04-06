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
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_GridController_State80204913.h"
#include "AssemblyU2DCSharp_GridController_Operation3666670919.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridController
struct  GridController_t3370039202  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject GridController::canvas
	GameObject_t4012695102 * ___canvas_2;
	// UnityEngine.GameObject GridController::hintsCanvas
	GameObject_t4012695102 * ___hintsCanvas_3;
	// UnityEngine.GameObject GridController::gameOverPanel
	GameObject_t4012695102 * ___gameOverPanel_4;
	// UnityEngine.GameObject GridController::noTile
	GameObject_t4012695102 * ___noTile_5;
	// UnityEngine.GameObject GridController::blockerTile
	GameObject_t4012695102 * ___blockerTile_6;
	// UnityEngine.UI.Text GridController::scoreText
	Text_t3286458198 * ___scoreText_7;
	// UnityEngine.UI.Text GridController::scoreMultiplierText
	Text_t3286458198 * ___scoreMultiplierText_8;
	// UnityEngine.UI.Text GridController::gameoverScoreDetailsText
	Text_t3286458198 * ___gameoverScoreDetailsText_9;
	// UnityEngine.UI.Text GridController::gameoverScoreText
	Text_t3286458198 * ___gameoverScoreText_10;
	// UnityEngine.UI.Text GridController::gameoverTitle
	Text_t3286458198 * ___gameoverTitle_11;
	// UnityEngine.GameObject[] GridController::tilePrefabs
	GameObjectU5BU5D_t3499186955* ___tilePrefabs_12;
	// UnityEngine.LayerMask GridController::backgroundLayer
	LayerMask_t1862190090  ___backgroundLayer_13;
	// System.Single GridController::minSwipeDistance
	float ___minSwipeDistance_14;
	// System.Int32 GridController::score
	int32_t ___score_23;
	// System.Double GridController::scoreMultiplier
	double ___scoreMultiplier_24;
	// System.Double GridController::turnCounter
	double ___turnCounter_25;
	// System.Int32 GridController::pairTilesEvaluated
	int32_t ___pairTilesEvaluated_26;
	// System.Int32 GridController::pairTilesCleared
	int32_t ___pairTilesCleared_27;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GridController::tiles
	List_1_t514686775 * ___tiles_28;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GridController::blockerTileList
	List_1_t514686775 * ___blockerTileList_29;
	// System.Boolean GridController::blockerTilesRemoved
	bool ___blockerTilesRemoved_30;
	// UnityEngine.Rect GridController::resetButton
	Rect_t1525428817  ___resetButton_31;
	// UnityEngine.Rect GridController::gameOverButton
	Rect_t1525428817  ___gameOverButton_32;
	// UnityEngine.Vector2 GridController::touchStartPosition
	Vector2_t3525329788  ___touchStartPosition_33;
	// GridController/State GridController::state
	int32_t ___state_34;

public:
	inline static int32_t get_offset_of_canvas_2() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___canvas_2)); }
	inline GameObject_t4012695102 * get_canvas_2() const { return ___canvas_2; }
	inline GameObject_t4012695102 ** get_address_of_canvas_2() { return &___canvas_2; }
	inline void set_canvas_2(GameObject_t4012695102 * value)
	{
		___canvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_2, value);
	}

	inline static int32_t get_offset_of_hintsCanvas_3() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___hintsCanvas_3)); }
	inline GameObject_t4012695102 * get_hintsCanvas_3() const { return ___hintsCanvas_3; }
	inline GameObject_t4012695102 ** get_address_of_hintsCanvas_3() { return &___hintsCanvas_3; }
	inline void set_hintsCanvas_3(GameObject_t4012695102 * value)
	{
		___hintsCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___hintsCanvas_3, value);
	}

	inline static int32_t get_offset_of_gameOverPanel_4() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___gameOverPanel_4)); }
	inline GameObject_t4012695102 * get_gameOverPanel_4() const { return ___gameOverPanel_4; }
	inline GameObject_t4012695102 ** get_address_of_gameOverPanel_4() { return &___gameOverPanel_4; }
	inline void set_gameOverPanel_4(GameObject_t4012695102 * value)
	{
		___gameOverPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverPanel_4, value);
	}

	inline static int32_t get_offset_of_noTile_5() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___noTile_5)); }
	inline GameObject_t4012695102 * get_noTile_5() const { return ___noTile_5; }
	inline GameObject_t4012695102 ** get_address_of_noTile_5() { return &___noTile_5; }
	inline void set_noTile_5(GameObject_t4012695102 * value)
	{
		___noTile_5 = value;
		Il2CppCodeGenWriteBarrier(&___noTile_5, value);
	}

	inline static int32_t get_offset_of_blockerTile_6() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___blockerTile_6)); }
	inline GameObject_t4012695102 * get_blockerTile_6() const { return ___blockerTile_6; }
	inline GameObject_t4012695102 ** get_address_of_blockerTile_6() { return &___blockerTile_6; }
	inline void set_blockerTile_6(GameObject_t4012695102 * value)
	{
		___blockerTile_6 = value;
		Il2CppCodeGenWriteBarrier(&___blockerTile_6, value);
	}

	inline static int32_t get_offset_of_scoreText_7() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___scoreText_7)); }
	inline Text_t3286458198 * get_scoreText_7() const { return ___scoreText_7; }
	inline Text_t3286458198 ** get_address_of_scoreText_7() { return &___scoreText_7; }
	inline void set_scoreText_7(Text_t3286458198 * value)
	{
		___scoreText_7 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_7, value);
	}

	inline static int32_t get_offset_of_scoreMultiplierText_8() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___scoreMultiplierText_8)); }
	inline Text_t3286458198 * get_scoreMultiplierText_8() const { return ___scoreMultiplierText_8; }
	inline Text_t3286458198 ** get_address_of_scoreMultiplierText_8() { return &___scoreMultiplierText_8; }
	inline void set_scoreMultiplierText_8(Text_t3286458198 * value)
	{
		___scoreMultiplierText_8 = value;
		Il2CppCodeGenWriteBarrier(&___scoreMultiplierText_8, value);
	}

	inline static int32_t get_offset_of_gameoverScoreDetailsText_9() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___gameoverScoreDetailsText_9)); }
	inline Text_t3286458198 * get_gameoverScoreDetailsText_9() const { return ___gameoverScoreDetailsText_9; }
	inline Text_t3286458198 ** get_address_of_gameoverScoreDetailsText_9() { return &___gameoverScoreDetailsText_9; }
	inline void set_gameoverScoreDetailsText_9(Text_t3286458198 * value)
	{
		___gameoverScoreDetailsText_9 = value;
		Il2CppCodeGenWriteBarrier(&___gameoverScoreDetailsText_9, value);
	}

	inline static int32_t get_offset_of_gameoverScoreText_10() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___gameoverScoreText_10)); }
	inline Text_t3286458198 * get_gameoverScoreText_10() const { return ___gameoverScoreText_10; }
	inline Text_t3286458198 ** get_address_of_gameoverScoreText_10() { return &___gameoverScoreText_10; }
	inline void set_gameoverScoreText_10(Text_t3286458198 * value)
	{
		___gameoverScoreText_10 = value;
		Il2CppCodeGenWriteBarrier(&___gameoverScoreText_10, value);
	}

	inline static int32_t get_offset_of_gameoverTitle_11() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___gameoverTitle_11)); }
	inline Text_t3286458198 * get_gameoverTitle_11() const { return ___gameoverTitle_11; }
	inline Text_t3286458198 ** get_address_of_gameoverTitle_11() { return &___gameoverTitle_11; }
	inline void set_gameoverTitle_11(Text_t3286458198 * value)
	{
		___gameoverTitle_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameoverTitle_11, value);
	}

	inline static int32_t get_offset_of_tilePrefabs_12() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___tilePrefabs_12)); }
	inline GameObjectU5BU5D_t3499186955* get_tilePrefabs_12() const { return ___tilePrefabs_12; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_tilePrefabs_12() { return &___tilePrefabs_12; }
	inline void set_tilePrefabs_12(GameObjectU5BU5D_t3499186955* value)
	{
		___tilePrefabs_12 = value;
		Il2CppCodeGenWriteBarrier(&___tilePrefabs_12, value);
	}

	inline static int32_t get_offset_of_backgroundLayer_13() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___backgroundLayer_13)); }
	inline LayerMask_t1862190090  get_backgroundLayer_13() const { return ___backgroundLayer_13; }
	inline LayerMask_t1862190090 * get_address_of_backgroundLayer_13() { return &___backgroundLayer_13; }
	inline void set_backgroundLayer_13(LayerMask_t1862190090  value)
	{
		___backgroundLayer_13 = value;
	}

	inline static int32_t get_offset_of_minSwipeDistance_14() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___minSwipeDistance_14)); }
	inline float get_minSwipeDistance_14() const { return ___minSwipeDistance_14; }
	inline float* get_address_of_minSwipeDistance_14() { return &___minSwipeDistance_14; }
	inline void set_minSwipeDistance_14(float value)
	{
		___minSwipeDistance_14 = value;
	}

	inline static int32_t get_offset_of_score_23() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___score_23)); }
	inline int32_t get_score_23() const { return ___score_23; }
	inline int32_t* get_address_of_score_23() { return &___score_23; }
	inline void set_score_23(int32_t value)
	{
		___score_23 = value;
	}

	inline static int32_t get_offset_of_scoreMultiplier_24() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___scoreMultiplier_24)); }
	inline double get_scoreMultiplier_24() const { return ___scoreMultiplier_24; }
	inline double* get_address_of_scoreMultiplier_24() { return &___scoreMultiplier_24; }
	inline void set_scoreMultiplier_24(double value)
	{
		___scoreMultiplier_24 = value;
	}

	inline static int32_t get_offset_of_turnCounter_25() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___turnCounter_25)); }
	inline double get_turnCounter_25() const { return ___turnCounter_25; }
	inline double* get_address_of_turnCounter_25() { return &___turnCounter_25; }
	inline void set_turnCounter_25(double value)
	{
		___turnCounter_25 = value;
	}

	inline static int32_t get_offset_of_pairTilesEvaluated_26() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___pairTilesEvaluated_26)); }
	inline int32_t get_pairTilesEvaluated_26() const { return ___pairTilesEvaluated_26; }
	inline int32_t* get_address_of_pairTilesEvaluated_26() { return &___pairTilesEvaluated_26; }
	inline void set_pairTilesEvaluated_26(int32_t value)
	{
		___pairTilesEvaluated_26 = value;
	}

	inline static int32_t get_offset_of_pairTilesCleared_27() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___pairTilesCleared_27)); }
	inline int32_t get_pairTilesCleared_27() const { return ___pairTilesCleared_27; }
	inline int32_t* get_address_of_pairTilesCleared_27() { return &___pairTilesCleared_27; }
	inline void set_pairTilesCleared_27(int32_t value)
	{
		___pairTilesCleared_27 = value;
	}

	inline static int32_t get_offset_of_tiles_28() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___tiles_28)); }
	inline List_1_t514686775 * get_tiles_28() const { return ___tiles_28; }
	inline List_1_t514686775 ** get_address_of_tiles_28() { return &___tiles_28; }
	inline void set_tiles_28(List_1_t514686775 * value)
	{
		___tiles_28 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_28, value);
	}

	inline static int32_t get_offset_of_blockerTileList_29() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___blockerTileList_29)); }
	inline List_1_t514686775 * get_blockerTileList_29() const { return ___blockerTileList_29; }
	inline List_1_t514686775 ** get_address_of_blockerTileList_29() { return &___blockerTileList_29; }
	inline void set_blockerTileList_29(List_1_t514686775 * value)
	{
		___blockerTileList_29 = value;
		Il2CppCodeGenWriteBarrier(&___blockerTileList_29, value);
	}

	inline static int32_t get_offset_of_blockerTilesRemoved_30() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___blockerTilesRemoved_30)); }
	inline bool get_blockerTilesRemoved_30() const { return ___blockerTilesRemoved_30; }
	inline bool* get_address_of_blockerTilesRemoved_30() { return &___blockerTilesRemoved_30; }
	inline void set_blockerTilesRemoved_30(bool value)
	{
		___blockerTilesRemoved_30 = value;
	}

	inline static int32_t get_offset_of_resetButton_31() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___resetButton_31)); }
	inline Rect_t1525428817  get_resetButton_31() const { return ___resetButton_31; }
	inline Rect_t1525428817 * get_address_of_resetButton_31() { return &___resetButton_31; }
	inline void set_resetButton_31(Rect_t1525428817  value)
	{
		___resetButton_31 = value;
	}

	inline static int32_t get_offset_of_gameOverButton_32() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___gameOverButton_32)); }
	inline Rect_t1525428817  get_gameOverButton_32() const { return ___gameOverButton_32; }
	inline Rect_t1525428817 * get_address_of_gameOverButton_32() { return &___gameOverButton_32; }
	inline void set_gameOverButton_32(Rect_t1525428817  value)
	{
		___gameOverButton_32 = value;
	}

	inline static int32_t get_offset_of_touchStartPosition_33() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___touchStartPosition_33)); }
	inline Vector2_t3525329788  get_touchStartPosition_33() const { return ___touchStartPosition_33; }
	inline Vector2_t3525329788 * get_address_of_touchStartPosition_33() { return &___touchStartPosition_33; }
	inline void set_touchStartPosition_33(Vector2_t3525329788  value)
	{
		___touchStartPosition_33 = value;
	}

	inline static int32_t get_offset_of_state_34() { return static_cast<int32_t>(offsetof(GridController_t3370039202, ___state_34)); }
	inline int32_t get_state_34() const { return ___state_34; }
	inline int32_t* get_address_of_state_34() { return &___state_34; }
	inline void set_state_34(int32_t value)
	{
		___state_34 = value;
	}
};

struct GridController_t3370039202_StaticFields
{
public:
	// System.Int32 GridController::ROWS
	int32_t ___ROWS_15;
	// System.Int32 GridController::COLS
	int32_t ___COLS_16;
	// System.Single GridController::BORDER_OFFSET
	float ___BORDER_OFFSET_17;
	// System.Single GridController::HORIZONTAL_SPACING_OFFSET
	float ___HORIZONTAL_SPACING_OFFSET_18;
	// System.Single GridController::VERTICAL_SPACING_OFFSET
	float ___VERTICAL_SPACING_OFFSET_19;
	// System.Single GridController::BORDER_SPACING
	float ___BORDER_SPACING_20;
	// System.Single GridController::HALF_TILE_WIDTH
	float ___HALF_TILE_WIDTH_21;
	// System.Single GridController::SPACE_BETWEEN_TILES
	float ___SPACE_BETWEEN_TILES_22;
	// GridController/Operation GridController::operation
	int32_t ___operation_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GridController::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_36;

public:
	inline static int32_t get_offset_of_ROWS_15() { return static_cast<int32_t>(offsetof(GridController_t3370039202_StaticFields, ___ROWS_15)); }
	inline int32_t get_ROWS_15() const { return ___ROWS_15; }
	inline int32_t* get_address_of_ROWS_15() { return &___ROWS_15; }
	inline void set_ROWS_15(int32_t value)
	{
		___ROWS_15 = value;
	}

	inline static int32_t get_offset_of_COLS_16() { return static_cast<int32_t>(offsetof(GridController_t3370039202_StaticFields, ___COLS_16)); }
	inline int32_t get_COLS_16() const { return ___COLS_16; }
	inline int32_t* get_address_of_COLS_16() { return &___COLS_16; }
	inline void set_COLS_16(int32_t value)
	{
		___COLS_16 = value;
	}

	inline static int32_t get_offset_of_BORDER_OFFSET_17() { return static_cast<int32_t>(offsetof(GridController_t3370039202_StaticFields, ___BORDER_OFFSET_17)); }
	inline float get_BORDER_OFFSET_17() const { return ___BORDER_OFFSET_17; }
	inline float* get_address_of_BORDER_OFFSET_17() { return &___BORDER_OFFSET_17; }
	inline void set_BORDER_OFFSET_17(float value)
	{
		___BORDER_OFFSET_17 = value;
	}

	inline static int32_t get_offset_of_HORIZONTAL_SPACING_OFFSET_18() { return static_cast<int32_t>(offsetof(GridController_t3370039202_StaticFields, ___HORIZONTAL_SPACING_OFFSET_18)); }
	inline float get_HORIZONTAL_SPACING_OFFSET_18() const { return ___HORIZONTAL_SPACING_OFFSET_18; }
	inline float* get_address_of_HORIZONTAL_SPACING_OFFSET_18() { return &___HORIZONTAL_SPACING_OFFSET_18; }
	inline void set_HORIZONTAL_SPACING_OFFSET_18(float value)
	{
		___HORIZONTAL_SPACING_OFFSET_18 = value;
	}

	inline static int32_t get_offset_of_VERTICAL_SPACING_OFFSET_19() { return static_cast<int32_t>(offsetof(GridController_t3370039202_StaticFields, ___VERTICAL_SPACING_OFFSET_19)); }
	inline float get_VERTICAL_SPACING_OFFSET_19() const { return ___VERTICAL_SPACING_OFFSET_19; }
	inline float* get_address_of_VERTICAL_SPACING_OFFSET_19() { return &___VERTICAL_SPACING_OFFSET_19; }
	inline void set_VERTICAL_SPACING_OFFSET_19(float value)
	{
		___VERTICAL_SPACING_OFFSET_19 = value;
	}

	inline static int32_t get_offset_of_BORDER_SPACING_20() { return static_cast<int32_t>(offsetof(GridController_t3370039202_StaticFields, ___BORDER_SPACING_20)); }
	inline float get_BORDER_SPACING_20() const { return ___BORDER_SPACING_20; }
	inline float* get_address_of_BORDER_SPACING_20() { return &___BORDER_SPACING_20; }
	inline void set_BORDER_SPACING_20(float value)
	{
		___BORDER_SPACING_20 = value;
	}

	inline static int32_t get_offset_of_HALF_TILE_WIDTH_21() { return static_cast<int32_t>(offsetof(GridController_t3370039202_StaticFields, ___HALF_TILE_WIDTH_21)); }
	inline float get_HALF_TILE_WIDTH_21() const { return ___HALF_TILE_WIDTH_21; }
	inline float* get_address_of_HALF_TILE_WIDTH_21() { return &___HALF_TILE_WIDTH_21; }
	inline void set_HALF_TILE_WIDTH_21(float value)
	{
		___HALF_TILE_WIDTH_21 = value;
	}

	inline static int32_t get_offset_of_SPACE_BETWEEN_TILES_22() { return static_cast<int32_t>(offsetof(GridController_t3370039202_StaticFields, ___SPACE_BETWEEN_TILES_22)); }
	inline float get_SPACE_BETWEEN_TILES_22() const { return ___SPACE_BETWEEN_TILES_22; }
	inline float* get_address_of_SPACE_BETWEEN_TILES_22() { return &___SPACE_BETWEEN_TILES_22; }
	inline void set_SPACE_BETWEEN_TILES_22(float value)
	{
		___SPACE_BETWEEN_TILES_22 = value;
	}

	inline static int32_t get_offset_of_operation_35() { return static_cast<int32_t>(offsetof(GridController_t3370039202_StaticFields, ___operation_35)); }
	inline int32_t get_operation_35() const { return ___operation_35; }
	inline int32_t* get_address_of_operation_35() { return &___operation_35; }
	inline void set_operation_35(int32_t value)
	{
		___operation_35 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_36() { return static_cast<int32_t>(offsetof(GridController_t3370039202_StaticFields, ___U3CU3Ef__switchU24map0_36)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_36() const { return ___U3CU3Ef__switchU24map0_36; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_36() { return &___U3CU3Ef__switchU24map0_36; }
	inline void set_U3CU3Ef__switchU24map0_36(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
