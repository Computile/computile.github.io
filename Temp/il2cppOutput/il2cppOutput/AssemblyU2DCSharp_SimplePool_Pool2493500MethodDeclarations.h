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

// SimplePool/Pool
struct Pool_t2493500;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void SimplePool/Pool::.ctor(UnityEngine.GameObject,System.Int32)
extern "C"  void Pool__ctor_m1505437233 (Pool_t2493500 * __this, GameObject_t4012695102 * ___prefab, int32_t ___initialQty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject SimplePool/Pool::Spawn(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t4012695102 * Pool_Spawn_m1904683476 (Pool_t2493500 * __this, Vector3_t3525329789  ___pos, Quaternion_t1891715979  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePool/Pool::Despawn(UnityEngine.GameObject)
extern "C"  void Pool_Despawn_m443359710 (Pool_t2493500 * __this, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
