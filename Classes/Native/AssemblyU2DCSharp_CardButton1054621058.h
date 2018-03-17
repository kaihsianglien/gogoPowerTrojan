﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// DetailPanelController
struct DetailPanelController_t1354705833;
// IconController
struct IconController_t3007737481;
// JSONObject
struct JSONObject_t1971882247;
// System.String
struct String_t;
// ShopScrollList
struct ShopScrollList_t1499868693;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardButton
struct  CardButton_t1054621058  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button CardButton::button
	Button_t2872111280 * ___button_2;
	// UnityEngine.UI.Text CardButton::nameLabel
	Text_t356221433 * ___nameLabel_3;
	// UnityEngine.UI.Text CardButton::priceLabel
	Text_t356221433 * ___priceLabel_4;
	// UnityEngine.UI.Text CardButton::countLabel
	Text_t356221433 * ___countLabel_5;
	// UnityEngine.UI.Image CardButton::iconImage
	Image_t2042527209 * ___iconImage_6;
	// DetailPanelController CardButton::detailPanelControl
	DetailPanelController_t1354705833 * ___detailPanelControl_7;
	// IconController CardButton::iconControl
	IconController_t3007737481 * ___iconControl_8;
	// JSONObject CardButton::cardInfo
	JSONObject_t1971882247 * ___cardInfo_9;
	// System.String CardButton::attribute
	String_t* ___attribute_10;
	// System.Int32 CardButton::id
	int32_t ___id_11;
	// ShopScrollList CardButton::shopList
	ShopScrollList_t1499868693 * ___shopList_12;
	// UnityEngine.GameObject CardButton::detailPanel
	GameObject_t1756533147 * ___detailPanel_13;
	// UnityEngine.GameObject CardButton::confirmPanel
	GameObject_t1756533147 * ___confirmPanel_14;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___button_2)); }
	inline Button_t2872111280 * get_button_2() const { return ___button_2; }
	inline Button_t2872111280 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t2872111280 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}

	inline static int32_t get_offset_of_nameLabel_3() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___nameLabel_3)); }
	inline Text_t356221433 * get_nameLabel_3() const { return ___nameLabel_3; }
	inline Text_t356221433 ** get_address_of_nameLabel_3() { return &___nameLabel_3; }
	inline void set_nameLabel_3(Text_t356221433 * value)
	{
		___nameLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___nameLabel_3, value);
	}

	inline static int32_t get_offset_of_priceLabel_4() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___priceLabel_4)); }
	inline Text_t356221433 * get_priceLabel_4() const { return ___priceLabel_4; }
	inline Text_t356221433 ** get_address_of_priceLabel_4() { return &___priceLabel_4; }
	inline void set_priceLabel_4(Text_t356221433 * value)
	{
		___priceLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___priceLabel_4, value);
	}

	inline static int32_t get_offset_of_countLabel_5() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___countLabel_5)); }
	inline Text_t356221433 * get_countLabel_5() const { return ___countLabel_5; }
	inline Text_t356221433 ** get_address_of_countLabel_5() { return &___countLabel_5; }
	inline void set_countLabel_5(Text_t356221433 * value)
	{
		___countLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___countLabel_5, value);
	}

	inline static int32_t get_offset_of_iconImage_6() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___iconImage_6)); }
	inline Image_t2042527209 * get_iconImage_6() const { return ___iconImage_6; }
	inline Image_t2042527209 ** get_address_of_iconImage_6() { return &___iconImage_6; }
	inline void set_iconImage_6(Image_t2042527209 * value)
	{
		___iconImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___iconImage_6, value);
	}

	inline static int32_t get_offset_of_detailPanelControl_7() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___detailPanelControl_7)); }
	inline DetailPanelController_t1354705833 * get_detailPanelControl_7() const { return ___detailPanelControl_7; }
	inline DetailPanelController_t1354705833 ** get_address_of_detailPanelControl_7() { return &___detailPanelControl_7; }
	inline void set_detailPanelControl_7(DetailPanelController_t1354705833 * value)
	{
		___detailPanelControl_7 = value;
		Il2CppCodeGenWriteBarrier(&___detailPanelControl_7, value);
	}

	inline static int32_t get_offset_of_iconControl_8() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___iconControl_8)); }
	inline IconController_t3007737481 * get_iconControl_8() const { return ___iconControl_8; }
	inline IconController_t3007737481 ** get_address_of_iconControl_8() { return &___iconControl_8; }
	inline void set_iconControl_8(IconController_t3007737481 * value)
	{
		___iconControl_8 = value;
		Il2CppCodeGenWriteBarrier(&___iconControl_8, value);
	}

	inline static int32_t get_offset_of_cardInfo_9() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___cardInfo_9)); }
	inline JSONObject_t1971882247 * get_cardInfo_9() const { return ___cardInfo_9; }
	inline JSONObject_t1971882247 ** get_address_of_cardInfo_9() { return &___cardInfo_9; }
	inline void set_cardInfo_9(JSONObject_t1971882247 * value)
	{
		___cardInfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___cardInfo_9, value);
	}

	inline static int32_t get_offset_of_attribute_10() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___attribute_10)); }
	inline String_t* get_attribute_10() const { return ___attribute_10; }
	inline String_t** get_address_of_attribute_10() { return &___attribute_10; }
	inline void set_attribute_10(String_t* value)
	{
		___attribute_10 = value;
		Il2CppCodeGenWriteBarrier(&___attribute_10, value);
	}

	inline static int32_t get_offset_of_id_11() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___id_11)); }
	inline int32_t get_id_11() const { return ___id_11; }
	inline int32_t* get_address_of_id_11() { return &___id_11; }
	inline void set_id_11(int32_t value)
	{
		___id_11 = value;
	}

	inline static int32_t get_offset_of_shopList_12() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___shopList_12)); }
	inline ShopScrollList_t1499868693 * get_shopList_12() const { return ___shopList_12; }
	inline ShopScrollList_t1499868693 ** get_address_of_shopList_12() { return &___shopList_12; }
	inline void set_shopList_12(ShopScrollList_t1499868693 * value)
	{
		___shopList_12 = value;
		Il2CppCodeGenWriteBarrier(&___shopList_12, value);
	}

	inline static int32_t get_offset_of_detailPanel_13() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___detailPanel_13)); }
	inline GameObject_t1756533147 * get_detailPanel_13() const { return ___detailPanel_13; }
	inline GameObject_t1756533147 ** get_address_of_detailPanel_13() { return &___detailPanel_13; }
	inline void set_detailPanel_13(GameObject_t1756533147 * value)
	{
		___detailPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&___detailPanel_13, value);
	}

	inline static int32_t get_offset_of_confirmPanel_14() { return static_cast<int32_t>(offsetof(CardButton_t1054621058, ___confirmPanel_14)); }
	inline GameObject_t1756533147 * get_confirmPanel_14() const { return ___confirmPanel_14; }
	inline GameObject_t1756533147 ** get_address_of_confirmPanel_14() { return &___confirmPanel_14; }
	inline void set_confirmPanel_14(GameObject_t1756533147 * value)
	{
		___confirmPanel_14 = value;
		Il2CppCodeGenWriteBarrier(&___confirmPanel_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
