// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

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

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_TextHTemp;
extern lv_obj_t * ui_HighTemp;
extern lv_obj_t * ui_SOCBar;
extern lv_obj_t * ui_Divisoria;
extern lv_obj_t * ui_Divisoria2;
extern lv_obj_t * ui_DivisoriaSup;
extern lv_obj_t * ui_TextZeroPercent;
extern lv_obj_t * ui_TextHalfPercent;
extern lv_obj_t * ui_TextOneHundredPercent;
extern lv_obj_t * ui_TextLTemp;
extern lv_obj_t * ui_LowTemp;
extern lv_obj_t * ui_TextLVolt;
extern lv_obj_t * ui_TextHVolt;
extern lv_obj_t * ui_TextPackVolt;
extern lv_obj_t * ui_PackVoltage;
extern lv_obj_t * ui_HighVoltage;
extern lv_obj_t * ui_LowVoltage;
extern lv_obj_t * ui_LogoFormula;
extern lv_obj_t * ui_TextPackCurrent;
extern lv_obj_t * ui_PackCurrent;
extern lv_obj_t * ui_CardSD;
extern lv_obj_t * ui_BordaSD1;
extern lv_obj_t * ui_BordaSD2;
extern lv_obj_t * ui_BordaSD3;
extern lv_obj_t * ui_BordaSD4;
extern lv_obj_t * ui_BordaSD5;
extern lv_obj_t * ui_SOC;
extern lv_obj_t * ui_TextSpeed;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_escudo_copy_png);    // assets\ESCUDO copy.png
LV_IMG_DECLARE(ui_img_imcard2_png);    // assets\ImCard2.png
LV_IMG_DECLARE(ui_img_cardsd2_png);    // assets\CardSD2.png

LV_FONT_DECLARE(ui_font_OxaniumBold40);
LV_FONT_DECLARE(ui_font_SuiGeneris22);
LV_FONT_DECLARE(ui_font_SuiGeneris24);
LV_FONT_DECLARE(ui_font_SuiGeneris32);
LV_FONT_DECLARE(ui_font_SuiGeneris40);
LV_FONT_DECLARE(ui_font_SuiGeneris55extended);
LV_FONT_DECLARE(ui_font_SuiGeneris80);
LV_FONT_DECLARE(ui_font_SuiGeneris90);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
