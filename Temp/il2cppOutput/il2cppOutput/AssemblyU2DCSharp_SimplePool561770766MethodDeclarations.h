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

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void SimplePool::Init(UnityEngine.GameObject,System.Int32)
extern "C"  void SimplePool_Init_m3907790232 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, int32_t ___qty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePool::Preload(UnityEngine.GameObject,System.Int32)
extern "C"  void SimplePool_Preload_m2196855339 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, int32_t ___qty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject SimplePool::Spawn(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t4012695102 * SimplePool_Spawn_m1335819317 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Vector3_t3525329789  ___pos, Quaternion_t1891715979  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePool::Despawn(UnityEngine.GameObject)
extern "C"  void SimplePool_Despawn_m3167381693 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
