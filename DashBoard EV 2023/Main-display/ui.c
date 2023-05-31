// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: Dash1

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void ui_event_Screen1(lv_event_t * e);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_RPMbar;
lv_obj_t * ui_GearLabel;
lv_obj_t * ui_GearName;
lv_obj_t * ui_TempName;
lv_obj_t * ui_TempValue;
lv_obj_t * ui_LambdaName;
lv_obj_t * ui_LambdaValue;
lv_obj_t * ui_VelName;
lv_obj_t * ui_ShiftLabel;
lv_obj_t * ui_VelValue;
lv_obj_t * ui_ShiftValue;
lv_obj_t * ui_Divisoria;
lv_obj_t * ui_Divisoria1;
lv_obj_t * ui_Div1;
lv_obj_t * ui_Div2;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Divisoria2;
lv_obj_t * ui_Panel1;
void ui_event_Screen2(lv_event_t * e);
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Image2;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0);
    }
}
void ui_event_Screen2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 300, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RPMbar = lv_bar_create(ui_Screen1);
    lv_bar_set_range(ui_RPMbar, 0, 7040);
    lv_bar_set_value(ui_RPMbar, 4000, LV_ANIM_OFF);
    lv_obj_set_width(ui_RPMbar, 800);
    lv_obj_set_height(ui_RPMbar, 110);
    lv_obj_set_x(ui_RPMbar, 0);
    lv_obj_set_y(ui_RPMbar, 40);
    lv_obj_set_align(ui_RPMbar, LV_ALIGN_TOP_MID);
    lv_obj_set_style_radius(ui_RPMbar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RPMbar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RPMbar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_RPMbar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RPMbar, lv_color_hex(0xFF0000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RPMbar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_GearLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_GearLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GearLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GearLabel, 0);
    lv_obj_set_y(ui_GearLabel, 97);
    lv_obj_set_align(ui_GearLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_GearLabel, "D");
    lv_obj_set_style_text_color(ui_GearLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GearLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GearLabel, &ui_font_SuiGeneris200, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GearName = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_GearName, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GearName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GearName, 0);
    lv_obj_set_y(ui_GearName, -30);
    lv_obj_set_align(ui_GearName, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_GearName, "GEAR");
    lv_obj_set_style_text_color(ui_GearName, lv_color_hex(0x00AEEE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GearName, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GearName, &ui_font_SuiGeneris24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempName = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_TempName, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempName, 15);
    lv_obj_set_y(ui_TempName, -50);
    lv_obj_set_align(ui_TempName, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TempName, "WATER TEMP");
    lv_obj_set_style_text_color(ui_TempName, lv_color_hex(0x00AEEE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TempName, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TempName, &ui_font_SuiGeneris24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempValue = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_TempValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempValue, 96);
    lv_obj_set_y(ui_TempValue, 25);
    lv_obj_set_align(ui_TempValue, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TempValue, "85");
    lv_obj_set_style_text_color(ui_TempValue, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TempValue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TempValue, &ui_font_SuiGeneris80, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LambdaName = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LambdaName, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LambdaName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LambdaName, 15);
    lv_obj_set_y(ui_LambdaName, 110);
    lv_obj_set_align(ui_LambdaName, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_LambdaName, "LAMBDA");
    lv_obj_set_style_text_color(ui_LambdaName, lv_color_hex(0x00AEEE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LambdaName, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LambdaName, &ui_font_SuiGeneris24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LambdaValue = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LambdaValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LambdaValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LambdaValue, 55);
    lv_obj_set_y(ui_LambdaValue, 180);
    lv_obj_set_align(ui_LambdaValue, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_LambdaValue, "0.95");
    lv_obj_set_style_text_color(ui_LambdaValue, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LambdaValue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LambdaValue, &ui_font_SuiGeneris80, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VelName = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_VelName, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VelName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VelName, -15);
    lv_obj_set_y(ui_VelName, -50);
    lv_obj_set_align(ui_VelName, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_VelName, "SPEED");
    lv_obj_set_style_text_color(ui_VelName, lv_color_hex(0x00AEEE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VelName, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VelName, &ui_font_SuiGeneris24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ShiftLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_ShiftLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ShiftLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ShiftLabel, -15);
    lv_obj_set_y(ui_ShiftLabel, 110);
    lv_obj_set_align(ui_ShiftLabel, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_ShiftLabel, "SHIFTER PRES.");
    lv_obj_set_style_text_color(ui_ShiftLabel, lv_color_hex(0x00AEEE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ShiftLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ShiftLabel, &ui_font_SuiGeneris24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VelValue = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_VelValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VelValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VelValue, -96);
    lv_obj_set_y(ui_VelValue, 25);
    lv_obj_set_align(ui_VelValue, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_VelValue, "24");
    lv_obj_set_style_text_color(ui_VelValue, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VelValue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_VelValue, &ui_font_SuiGeneris80, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ShiftValue = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_ShiftValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ShiftValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ShiftValue, -83);
    lv_obj_set_y(ui_ShiftValue, 180);
    lv_obj_set_align(ui_ShiftValue, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_ShiftValue, "4.5");
    lv_obj_set_style_text_color(ui_ShiftValue, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ShiftValue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ShiftValue, &ui_font_SuiGeneris80, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Divisoria = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Divisoria, 400);
    lv_obj_set_height(ui_Divisoria, 6);
    lv_obj_set_x(ui_Divisoria, 0);
    lv_obj_set_y(ui_Divisoria, 150);
    lv_obj_clear_flag(ui_Divisoria, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Divisoria, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Divisoria, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Divisoria, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Divisoria, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Divisoria, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Divisoria, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Divisoria, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Divisoria, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Divisoria1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Divisoria1, 400);
    lv_obj_set_height(ui_Divisoria1, 6);
    lv_obj_set_x(ui_Divisoria1, 400);
    lv_obj_set_y(ui_Divisoria1, 150);
    lv_obj_clear_flag(ui_Divisoria1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Divisoria1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Divisoria1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Divisoria1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Divisoria1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Divisoria1, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Divisoria1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Divisoria1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Divisoria1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Div1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Div1, 250);
    lv_obj_set_height(ui_Div1, 6);
    lv_obj_set_x(ui_Div1, 0);
    lv_obj_set_y(ui_Div1, 318);
    lv_obj_clear_flag(ui_Div1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Div1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Div1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Div1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Div1, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Div1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Div1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Div2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Div2, 250);
    lv_obj_set_height(ui_Div2, 6);
    lv_obj_set_x(ui_Div2, 0);
    lv_obj_set_y(ui_Div2, 310);
    lv_obj_set_align(ui_Div2, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_Div2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Div2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Div2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Div2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Div2, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Div2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Div2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image1, &ui_img_escudo_copy_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image1, 0);
    lv_obj_set_y(ui_Image1, -40);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image1, 30);
    lv_obj_set_style_img_recolor(ui_Image1, lv_color_hex(0x393939), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_Image1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 103);
    lv_obj_set_y(ui_Label1, 2);
    lv_label_set_text(ui_Label1, "1");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &ui_font_OxaniumBold40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 221);
    lv_obj_set_y(ui_Label2, 2);
    lv_label_set_text(ui_Label2, "2");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &ui_font_OxaniumBold40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 334);
    lv_obj_set_y(ui_Label3, 2);
    lv_label_set_text(ui_Label3, "3");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &ui_font_OxaniumBold40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 447);
    lv_obj_set_y(ui_Label4, 2);
    lv_label_set_text(ui_Label4, "4");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &ui_font_OxaniumBold40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 561);
    lv_obj_set_y(ui_Label5, 2);
    lv_label_set_text(ui_Label5, "5");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &ui_font_OxaniumBold40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 680);
    lv_obj_set_y(ui_Label6, 2);
    lv_label_set_text(ui_Label6, "6");
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &ui_font_OxaniumBold40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Divisoria2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Divisoria2, 800);
    lv_obj_set_height(ui_Divisoria2, 6);
    lv_obj_set_x(ui_Divisoria2, 0);
    lv_obj_set_y(ui_Divisoria2, 40);
    lv_obj_clear_flag(ui_Divisoria2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Divisoria2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Divisoria2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Divisoria2, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Divisoria2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 30);
    lv_obj_set_height(ui_Panel1, 30);
    lv_obj_set_x(ui_Panel1, -375);
    lv_obj_set_y(ui_Panel1, 217);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel1, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image2, &ui_img_escudo_copy_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image2, 150);

    lv_obj_add_event_cb(ui_Screen2, ui_event_Screen2, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
