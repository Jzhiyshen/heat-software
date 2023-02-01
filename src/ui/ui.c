// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.3
// PROJECT: heat

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void FadeOnUp_Animation(lv_obj_t * TargetObject, int delay);
void FadeOn_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_ScreenSplash(lv_event_t * e);
lv_obj_t * ui_ScreenSplash;
void ui_event_ScreenSplashLogo(lv_event_t * e);
lv_obj_t * ui_ScreenSplashLogo;
lv_obj_t * ui_ScreenSplashName;
lv_obj_t * ui_ScreenSplashDesign;
lv_obj_t * ui_ScreenMain;
lv_obj_t * ui_Screen1_Bar1;
lv_obj_t * ui_lab1;
lv_obj_t * ui_lab2;
lv_obj_t * ui_lab3;
void ui_event_control(lv_event_t * e);
lv_obj_t * ui_control;
lv_obj_t * ui_labBtStart;
lv_obj_t * ui_mode;
lv_obj_t * ui_currentTem;
lv_obj_t * ui_tarTem;
void ui_event_btSetting(lv_event_t * e);
lv_obj_t * ui_btSetting;
lv_obj_t * ui_roller1;
lv_obj_t * ui_ScreenSetting;
void ui_event_ScreenSetting_Image2(lv_event_t * e);
lv_obj_t * ui_ScreenSetting_Image2;
lv_obj_t * ui_ScreenSetting_Label2;
lv_obj_t * ui_textAreaTemHJ;
lv_obj_t * ui_ScreenSetting_Label3;
void ui_event_ScreenSettingButtonTemHJAdd(lv_event_t * e);
lv_obj_t * ui_ScreenSettingButtonTemHJAdd;
lv_obj_t * ui_ScreenSetting_Label4;
void ui_event_ScreenSettingButtonTemHJDec(lv_event_t * e);
lv_obj_t * ui_ScreenSettingButtonTemHJDec;
lv_obj_t * ui_ScreenSetting_Label1;
lv_obj_t * ui_ScreenSettingLabelBaoWen;
lv_obj_t * ui_ScreenSettingSwitchBaoWen;
lv_obj_t * ui_ScreenSettingLabelFan;
void ui_event_ScreenSettingSwitchFan(lv_event_t * e);
lv_obj_t * ui_ScreenSettingSwitchFan;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void FadeOnUp_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 400);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 20, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 400);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, true);
    lv_anim_start(&PropertyAnimation_1);

}
void FadeOn_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_1, -20, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_1);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_ScreenSplash(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        FadeOn_Animation(ui_ScreenSplashLogo, 500);
        FadeOnUp_Animation(ui_ScreenSplashName, 500);
        FadeOnUp_Animation(ui_ScreenSplashDesign, 1500);
        splash_finish(e);
    }
}
void ui_event_ScreenSplashLogo(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenMain, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_control(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        control_change(e);
    }
}
void ui_event_btSetting(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenSetting, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
}
void ui_event_ScreenSetting_Image2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenMain, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
}
void ui_event_ScreenSettingButtonTemHJAdd(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        add_tem_5(e);
    }
}
void ui_event_ScreenSettingButtonTemHJDec(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        dec_tem_5(e);
    }
}
void ui_event_ScreenSettingSwitchFan(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        fanChange(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_ScreenSplash_screen_init(void)
{
    ui_ScreenSplash = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenSplash, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScreenSplashLogo = lv_img_create(ui_ScreenSplash);
    lv_img_set_src(ui_ScreenSplashLogo, &ui_img_logo_png);
    lv_obj_set_width(ui_ScreenSplashLogo, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_ScreenSplashLogo, LV_SIZE_CONTENT);    /// 100
    lv_obj_set_x(ui_ScreenSplashLogo, 0);
    lv_obj_set_y(ui_ScreenSplashLogo, -59);
    lv_obj_set_align(ui_ScreenSplashLogo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ScreenSplashLogo, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ScreenSplashLogo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScreenSplashName = lv_label_create(ui_ScreenSplash);
    lv_obj_set_width(ui_ScreenSplashName, lv_pct(50));
    lv_obj_set_height(ui_ScreenSplashName, lv_pct(10));
    lv_obj_set_x(ui_ScreenSplashName, 0);
    lv_obj_set_y(ui_ScreenSplashName, 29);
    lv_obj_set_align(ui_ScreenSplashName, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScreenSplashName, "回流焊台");
    lv_obj_set_style_text_color(ui_ScreenSplashName, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ScreenSplashName, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ScreenSplashName, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ScreenSplashName, &ui_font_AutoFontCn30B, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ScreenSplashDesign = lv_label_create(ui_ScreenSplash);
    lv_obj_set_width(ui_ScreenSplashDesign, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreenSplashDesign, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScreenSplashDesign, 0);
    lv_obj_set_y(ui_ScreenSplashDesign, 75);
    lv_obj_set_align(ui_ScreenSplashDesign, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScreenSplashDesign, "Design by Jzhiyshen");
    lv_obj_set_style_text_color(ui_ScreenSplashDesign, lv_color_hex(0x5F5F5F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ScreenSplashDesign, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ScreenSplashDesign, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ScreenSplashLogo, ui_event_ScreenSplashLogo, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScreenSplash, ui_event_ScreenSplash, LV_EVENT_ALL, NULL);

}
void ui_ScreenMain_screen_init(void)
{
    ui_ScreenMain = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenMain, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen1_Bar1 = lv_obj_create(ui_ScreenMain);
    lv_obj_set_width(ui_Screen1_Bar1, 259);
    lv_obj_set_height(ui_Screen1_Bar1, 166);
    lv_obj_set_x(ui_Screen1_Bar1, -2);
    lv_obj_set_y(ui_Screen1_Bar1, -59);
    lv_obj_set_align(ui_Screen1_Bar1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Screen1_Bar1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Bar1, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Bar1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lab1 = lv_label_create(ui_ScreenMain);
    lv_obj_set_width(ui_lab1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lab1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lab1, -64);
    lv_obj_set_y(ui_lab1, -11);
    lv_obj_set_align(ui_lab1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lab1, "当前\n温度:");
    lv_obj_set_style_text_color(ui_lab1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lab1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lab1, &ui_font_AutoFontCn18B, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lab2 = lv_label_create(ui_ScreenMain);
    lv_obj_set_width(ui_lab2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lab2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lab2, -57);
    lv_obj_set_y(ui_lab2, -60);
    lv_obj_set_align(ui_lab2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lab2, "模式:");
    lv_obj_set_style_text_color(ui_lab2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lab2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lab2, &ui_font_AutoFontCn18B, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lab3 = lv_label_create(ui_ScreenMain);
    lv_obj_set_width(ui_lab3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lab3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lab3, -56);
    lv_obj_set_y(ui_lab3, -111);
    lv_obj_set_align(ui_lab3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lab3, "目标\n温度:");
    lv_obj_set_style_text_color(ui_lab3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lab3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lab3, &ui_font_AutoFontCn18B, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_control = lv_btn_create(ui_ScreenMain);
    lv_obj_set_width(ui_control, 100);
    lv_obj_set_height(ui_control, 100);
    lv_obj_set_x(ui_control, 66);
    lv_obj_set_y(ui_control, 84);
    lv_obj_set_align(ui_control, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_control, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_control, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_control, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_control, lv_color_hex(0x3981FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_control, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_control, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_control, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_control, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_control, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_control, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_control, lv_color_hex(0x5C98FF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_control, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_control, 30, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_control, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_labBtStart = lv_label_create(ui_control);
    lv_obj_set_width(ui_labBtStart, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_labBtStart, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_labBtStart, LV_ALIGN_CENTER);
    lv_label_set_text(ui_labBtStart, "启动");
    lv_obj_set_style_text_color(ui_labBtStart, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_labBtStart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_labBtStart, &ui_font_AutoFontCn30B, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_mode = lv_label_create(ui_ScreenMain);
    lv_obj_set_width(ui_mode, lv_pct(55));
    lv_obj_set_height(ui_mode, lv_pct(12));
    lv_obj_set_x(ui_mode, 25);
    lv_obj_set_y(ui_mode, -61);
    lv_obj_set_align(ui_mode, LV_ALIGN_CENTER);
    lv_label_set_text(ui_mode, "空闲");
    lv_obj_set_style_text_color(ui_mode, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_mode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_mode, &ui_font_AutoFontCn30B, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_currentTem = lv_label_create(ui_ScreenMain);
    lv_obj_set_width(ui_currentTem, lv_pct(60));
    lv_obj_set_height(ui_currentTem, lv_pct(16));
    lv_obj_set_x(ui_currentTem, 32);
    lv_obj_set_y(ui_currentTem, lv_pct(-5));
    lv_obj_set_align(ui_currentTem, LV_ALIGN_CENTER);
    lv_label_set_text(ui_currentTem, "000°");
    lv_obj_add_flag(ui_currentTem, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_currentTem, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_currentTem, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_currentTem, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_currentTem, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_tarTem = lv_label_create(ui_ScreenMain);
    lv_obj_set_width(ui_tarTem, lv_pct(30));
    lv_obj_set_height(ui_tarTem, lv_pct(12));
    lv_obj_set_x(ui_tarTem, 3);
    lv_obj_set_y(ui_tarTem, -110);
    lv_obj_set_align(ui_tarTem, LV_ALIGN_CENTER);
    lv_label_set_text(ui_tarTem, "40");
    lv_obj_set_style_text_color(ui_tarTem, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_tarTem, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_tarTem, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_tarTem, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btSetting = lv_img_create(ui_ScreenMain);
    lv_img_set_src(ui_btSetting, &ui_img_shezhi3_png);
    lv_obj_set_width(ui_btSetting, LV_SIZE_CONTENT);   /// 60
    lv_obj_set_height(ui_btSetting, LV_SIZE_CONTENT);    /// 60
    lv_obj_set_x(ui_btSetting, 93);
    lv_obj_set_y(ui_btSetting, -111);
    lv_obj_set_align(ui_btSetting, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btSetting, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_btSetting, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_btSetting, 160);
    lv_obj_set_style_img_recolor(ui_btSetting, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_btSetting, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_btSetting, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_opa(ui_btSetting, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_width(ui_btSetting, 2, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_pad(ui_btSetting, 5, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_roller1 = lv_roller_create(ui_ScreenMain);
    lv_roller_set_options(ui_roller1, "默认\n快速加热\n保温", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_roller1, lv_pct(55));
    lv_obj_set_height(ui_roller1, lv_pct(40));
    lv_obj_set_x(ui_roller1, -54);
    lv_obj_set_y(ui_roller1, 81);
    lv_obj_set_align(ui_roller1, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_roller1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_roller1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_roller1, &ui_font_AutoFontCn18B, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_roller1, lv_color_hex(0xFFFFFF), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_roller1, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_roller1, &ui_font_AutoFontCn18B, LV_PART_SELECTED | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_control, ui_event_control, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btSetting, ui_event_btSetting, LV_EVENT_ALL, NULL);

}
void ui_ScreenSetting_screen_init(void)
{
    ui_ScreenSetting = lv_obj_create(NULL);

    ui_ScreenSetting_Image2 = lv_img_create(ui_ScreenSetting);
    lv_img_set_src(ui_ScreenSetting_Image2, &ui_img_fanhui_png);
    lv_obj_set_width(ui_ScreenSetting_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreenSetting_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScreenSetting_Image2, 86);
    lv_obj_set_y(ui_ScreenSetting_Image2, -106);
    lv_obj_set_align(ui_ScreenSetting_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ScreenSetting_Image2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ScreenSetting_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_ScreenSetting_Image2, 180);
    lv_obj_set_style_outline_color(ui_ScreenSetting_Image2, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_opa(ui_ScreenSetting_Image2, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_width(ui_ScreenSetting_Image2, 3, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_pad(ui_ScreenSetting_Image2, 5, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_ScreenSetting_Label2 = lv_label_create(ui_ScreenSetting);
    lv_obj_set_width(ui_ScreenSetting_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreenSetting_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScreenSetting_Label2, 0);
    lv_obj_set_y(ui_ScreenSetting_Label2, -107);
    lv_obj_set_align(ui_ScreenSetting_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScreenSetting_Label2, "设置");
    lv_obj_set_style_text_color(ui_ScreenSetting_Label2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ScreenSetting_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ScreenSetting_Label2, &ui_font_AutoFontCn30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_textAreaTemHJ = lv_textarea_create(ui_ScreenSetting);
    lv_obj_set_width(ui_textAreaTemHJ, 84);
    lv_obj_set_height(ui_textAreaTemHJ, LV_SIZE_CONTENT);    /// 38
    lv_obj_set_x(ui_textAreaTemHJ, -18);
    lv_obj_set_y(ui_textAreaTemHJ, -45);
    lv_obj_set_align(ui_textAreaTemHJ, LV_ALIGN_CENTER);
    if("1234567890" == "") lv_textarea_set_accepted_chars(ui_textAreaTemHJ, NULL);
    else lv_textarea_set_accepted_chars(ui_textAreaTemHJ, "1234567890");
    lv_textarea_set_max_length(ui_textAreaTemHJ, 3);
    lv_textarea_set_text(ui_textAreaTemHJ, "60");
    lv_textarea_set_one_line(ui_textAreaTemHJ, true);
    lv_obj_set_style_text_color(ui_textAreaTemHJ, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_textAreaTemHJ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_textAreaTemHJ, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_textAreaTemHJ, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ScreenSetting_Label3 = lv_label_create(ui_ScreenSetting);
    lv_obj_set_width(ui_ScreenSetting_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreenSetting_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScreenSetting_Label3, -87);
    lv_obj_set_y(ui_ScreenSetting_Label3, -45);
    lv_obj_set_align(ui_ScreenSetting_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScreenSetting_Label3, "焊接\n温度");
    lv_obj_set_style_text_color(ui_ScreenSetting_Label3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ScreenSetting_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ScreenSetting_Label3, &ui_font_AutoFontCn18B, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ScreenSettingButtonTemHJAdd = lv_btn_create(ui_ScreenSetting);
    lv_obj_set_width(ui_ScreenSettingButtonTemHJAdd, 35);
    lv_obj_set_height(ui_ScreenSettingButtonTemHJAdd, 37);
    lv_obj_set_x(ui_ScreenSettingButtonTemHJAdd, 47);
    lv_obj_set_y(ui_ScreenSettingButtonTemHJAdd, -45);
    lv_obj_set_align(ui_ScreenSettingButtonTemHJAdd, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ScreenSettingButtonTemHJAdd, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ScreenSettingButtonTemHJAdd, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScreenSetting_Label4 = lv_label_create(ui_ScreenSettingButtonTemHJAdd);
    lv_obj_set_width(ui_ScreenSetting_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreenSetting_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ScreenSetting_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScreenSetting_Label4, "+");
    lv_obj_set_style_text_color(ui_ScreenSetting_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ScreenSetting_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ScreenSetting_Label4, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ScreenSettingButtonTemHJDec = lv_btn_create(ui_ScreenSetting);
    lv_obj_set_width(ui_ScreenSettingButtonTemHJDec, 35);
    lv_obj_set_height(ui_ScreenSettingButtonTemHJDec, 37);
    lv_obj_set_x(ui_ScreenSettingButtonTemHJDec, 88);
    lv_obj_set_y(ui_ScreenSettingButtonTemHJDec, -45);
    lv_obj_set_align(ui_ScreenSettingButtonTemHJDec, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ScreenSettingButtonTemHJDec, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ScreenSettingButtonTemHJDec, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ScreenSetting_Label1 = lv_label_create(ui_ScreenSettingButtonTemHJDec);
    lv_obj_set_width(ui_ScreenSetting_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreenSetting_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScreenSetting_Label1, 0);
    lv_obj_set_y(ui_ScreenSetting_Label1, -4);
    lv_obj_set_align(ui_ScreenSetting_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScreenSetting_Label1, "-");
    lv_obj_set_style_text_color(ui_ScreenSetting_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ScreenSetting_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ScreenSetting_Label1, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ScreenSettingLabelBaoWen = lv_label_create(ui_ScreenSetting);
    lv_obj_set_width(ui_ScreenSettingLabelBaoWen, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreenSettingLabelBaoWen, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScreenSettingLabelBaoWen, -56);
    lv_obj_set_y(ui_ScreenSettingLabelBaoWen, 3);
    lv_obj_set_align(ui_ScreenSettingLabelBaoWen, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScreenSettingLabelBaoWen, "保温模式");
    lv_obj_set_style_text_color(ui_ScreenSettingLabelBaoWen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ScreenSettingLabelBaoWen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ScreenSettingLabelBaoWen, &ui_font_AutoFontCn18B, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ScreenSettingSwitchBaoWen = lv_switch_create(ui_ScreenSetting);
    lv_obj_set_width(ui_ScreenSettingSwitchBaoWen, 60);
    lv_obj_set_height(ui_ScreenSettingSwitchBaoWen, 35);
    lv_obj_set_x(ui_ScreenSettingSwitchBaoWen, 57);
    lv_obj_set_y(ui_ScreenSettingSwitchBaoWen, 3);
    lv_obj_set_align(ui_ScreenSettingSwitchBaoWen, LV_ALIGN_CENTER);

    ui_ScreenSettingLabelFan = lv_label_create(ui_ScreenSetting);
    lv_obj_set_width(ui_ScreenSettingLabelFan, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ScreenSettingLabelFan, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ScreenSettingLabelFan, -55);
    lv_obj_set_y(ui_ScreenSettingLabelFan, 47);
    lv_obj_set_align(ui_ScreenSettingLabelFan, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ScreenSettingLabelFan, "自动风扇");
    lv_obj_set_style_text_color(ui_ScreenSettingLabelFan, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ScreenSettingLabelFan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ScreenSettingLabelFan, &ui_font_AutoFontCn18B, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ScreenSettingSwitchFan = lv_switch_create(ui_ScreenSetting);
    lv_obj_set_width(ui_ScreenSettingSwitchFan, 60);
    lv_obj_set_height(ui_ScreenSettingSwitchFan, 35);
    lv_obj_set_x(ui_ScreenSettingSwitchFan, 57);
    lv_obj_set_y(ui_ScreenSettingSwitchFan, 46);
    lv_obj_set_align(ui_ScreenSettingSwitchFan, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_ScreenSettingSwitchFan, LV_STATE_CHECKED);       /// States

    lv_obj_add_event_cb(ui_ScreenSetting_Image2, ui_event_ScreenSetting_Image2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScreenSettingButtonTemHJAdd, ui_event_ScreenSettingButtonTemHJAdd, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScreenSettingButtonTemHJDec, ui_event_ScreenSettingButtonTemHJDec, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScreenSettingSwitchFan, ui_event_ScreenSettingSwitchFan, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ScreenSplash_screen_init();
    ui_ScreenMain_screen_init();
    ui_ScreenSetting_screen_init();
    lv_disp_load_scr(ui_ScreenSplash);
}
