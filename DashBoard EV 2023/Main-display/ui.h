// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: Dash1

#ifndef _DASH1_UI_H
#define _DASH1_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_RPMbar;
extern lv_obj_t * ui_GearLabel;
extern lv_obj_t * ui_GearName;
extern lv_obj_t * ui_TempName;
extern lv_obj_t * ui_TempValue;
extern lv_obj_t * ui_LambdaName;
extern lv_obj_t * ui_LambdaValue;
extern lv_obj_t * ui_VelName;
extern lv_obj_t * ui_ShiftLabel;
extern lv_obj_t * ui_VelValue;
extern lv_obj_t * ui_ShiftValue;
extern lv_obj_t * ui_Divisoria;
extern lv_obj_t * ui_Divisoria1;
extern lv_obj_t * ui_Div1;
extern lv_obj_t * ui_Div2;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Divisoria2;
extern lv_obj_t * ui_Panel1;


LV_IMG_DECLARE(ui_img_escudo_copy_png);    // assets\ESCUDO copy.png


LV_FONT_DECLARE(ui_font_OxaniumBold40);
LV_FONT_DECLARE(ui_font_SuiGeneris200);
LV_FONT_DECLARE(ui_font_SuiGeneris24);
LV_FONT_DECLARE(ui_font_SuiGeneris80);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
