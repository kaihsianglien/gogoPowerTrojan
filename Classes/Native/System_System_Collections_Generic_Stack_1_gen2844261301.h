﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct  Stack_1_t2844261301  : public Il2CppObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	GameObjectU5BU5D_t3057952154* ____array_1;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__array_1() { return static_cast<int32_t>(offsetof(Stack_1_t2844261301, ____array_1)); }
	inline GameObjectU5BU5D_t3057952154* get__array_1() const { return ____array_1; }
	inline GameObjectU5BU5D_t3057952154** get_address_of__array_1() { return &____array_1; }
	inline void set__array_1(GameObjectU5BU5D_t3057952154* value)
	{
		____array_1 = value;
		Il2CppCodeGenWriteBarrier(&____array_1, value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Stack_1_t2844261301, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(Stack_1_t2844261301, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
