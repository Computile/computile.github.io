#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GridController
struct GridController_t3370039202;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Tile
struct Tile_t2606798;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_GridController_Operation3666670919.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Tile2606798.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void GridController::.ctor()
extern "C"  void GridController__ctor_m3444476729 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::.cctor()
extern "C"  void GridController__cctor_m3217467284 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::Awake()
extern "C"  void GridController_Awake_m3682081948 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::Update()
extern "C"  void GridController_Update_m1131458292 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::UpdateOperationButtonSprite()
extern "C"  void GridController_UpdateOperationButtonSprite_m125516012 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GridController::GridToWorldPoint(System.Int32,System.Int32)
extern "C"  Vector2_t3525329788  GridController_GridToWorldPoint_m685343649 (Il2CppObject * __this /* static, unused */, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GridController::WorldToGridPoint(System.Single,System.Single)
extern "C"  Vector2_t3525329788  GridController_WorldToGridPoint_m3414135149 (Il2CppObject * __this /* static, unused */, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GridController/Operation GridController::GetOperationState()
extern "C"  int32_t GridController_GetOperationState_m1087980020 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::SetOperationState(System.String)
extern "C"  void GridController_SetOperationState_m1579451167 (Il2CppObject * __this /* static, unused */, String_t* ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GridController::CheckForMovesLeft()
extern "C"  bool GridController_CheckForMovesLeft_m4251162219 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::CheckVictoryCondition()
extern "C"  void GridController_CheckVictoryCondition_m76407912 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::GenerateRandomTile()
extern "C"  void GridController_GenerateRandomTile_m565963089 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::GenerateBlockerTile()
extern "C"  void GridController_GenerateBlockerTile_m2712800298 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GridController::SelectBlockerTile()
extern "C"  GameObject_t4012695102 * GridController_SelectBlockerTile_m2531712686 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GridController::GetObjectAtGridPosition(System.Int32,System.Int32)
extern "C"  GameObject_t4012695102 * GridController_GetObjectAtGridPosition_m1498846029 (GridController_t3370039202 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GridController::MoveTilesDown()
extern "C"  bool GridController_MoveTilesDown_m1237123225 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GridController::MoveTilesLeft()
extern "C"  bool GridController_MoveTilesLeft_m1456420542 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GridController::MoveTilesRight()
extern "C"  bool GridController_MoveTilesRight_m3344574311 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GridController::MoveTilesUp()
extern "C"  bool GridController_MoveTilesUp_m1266595282 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GridController::ExecuteOperation(Tile,Tile)
extern "C"  int32_t GridController_ExecuteOperation_m438823355 (GridController_t3370039202 * __this, Tile_t2606798 * ___thisTile, Tile_t2606798 * ___thatTile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::ReadyTilesForUpgrading()
extern "C"  void GridController_ReadyTilesForUpgrading_m4161896893 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::Reset()
extern "C"  void GridController_Reset_m1090909670 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::UpgradeTile(UnityEngine.GameObject,Tile,UnityEngine.GameObject,Tile,System.Int32)
extern "C"  void GridController_UpgradeTile_m2945889822 (GridController_t3370039202 * __this, GameObject_t4012695102 * ___toDestroy, Tile_t2606798 * ___destroyTile, GameObject_t4012695102 * ___toUpgrade, Tile_t2606798 * ___upgradeTile, int32_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::DestroyTiles(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void GridController_DestroyTiles_m1121052400 (GridController_t3370039202 * __this, GameObject_t4012695102 * ___thisDestory, GameObject_t4012695102 * ___thatDestory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::UpdateScore()
extern "C"  void GridController_UpdateScore_m975246560 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GridController::ToggleHints()
extern "C"  void GridController_ToggleHints_m3732618671 (GridController_t3370039202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
