﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartPointManager
struct  StartPointManager_t1606019317  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] StartPointManager::startPoints
	TransformU5BU5D_t3764228911* ___startPoints_2;

public:
	inline static int32_t get_offset_of_startPoints_2() { return static_cast<int32_t>(offsetof(StartPointManager_t1606019317, ___startPoints_2)); }
	inline TransformU5BU5D_t3764228911* get_startPoints_2() const { return ___startPoints_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_startPoints_2() { return &___startPoints_2; }
	inline void set_startPoints_2(TransformU5BU5D_t3764228911* value)
	{
		___startPoints_2 = value;
		Il2CppCodeGenWriteBarrier(&___startPoints_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif