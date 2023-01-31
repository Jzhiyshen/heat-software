// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: heat

#ifndef _HEAT_UI_H
#define _HEAT_UI_H

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

void FadeOnUp_Animation(lv_obj_t * TargetObject, int delay);
void FadeOn_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_ScreenSplash(lv_event_t * e);
extern lv_obj_t * ui_ScreenSplash;
void ui_event_ScreenSplashLogo(lv_event_t * e);
extern lv_obj_t * ui_ScreenSplashLogo;
extern lv_obj_t * ui_ScreenSplashName;
extern lv_obj_t * ui_ScreenSplashDesign;
extern lv_obj_t * ui_ScreenMain;
extern lv_obj_t * ui_Screen1_Bar1;
extern lv_obj_t * ui_lab1;
extern lv_obj_t * ui_lab2;
extern lv_obj_t * ui_lab3;
void ui_event_control(lv_event_t * e);
extern lv_obj_t * ui_control;
extern lv_obj_t * ui_labBtStart;
extern lv_obj_t * ui_mode;
extern lv_obj_t * ui_currentTem;
extern lv_obj_t * ui_tarTem;
void ui_event_btSetting(lv_event_t * e);
extern lv_obj_t * ui_btSetting;
extern lv_obj_t * ui_roller1;
extern lv_obj_t * ui_ScreenSetting;
void ui_event_ScreenSetting_Image2(lv_event_t * e);
extern lv_obj_t * ui_ScreenSetting_Image2;
extern lv_obj_t * ui_ScreenSetting_Label2;
extern lv_obj_t * ui_textAreaTemHJ;
extern lv_obj_t * ui_ScreenSetting_Label3;
void ui_event_ScreenSettingButtonTemHJAdd(lv_event_t * e);
extern lv_obj_t * ui_ScreenSettingButtonTemHJAdd;
extern lv_obj_t * ui_ScreenSetting_Label4;
void ui_event_ScreenSettingButtonTemHJDec(lv_event_t * e);
extern lv_obj_t * ui_ScreenSettingButtonTemHJDec;
extern lv_obj_t * ui_ScreenSetting_Label1;
extern lv_obj_t * ui_ScreenSettingLabelBaoWen;
extern lv_obj_t * ui_ScreenSettingSwitchBaoWen;
extern lv_obj_t * ui_ScreenSettingLabelFan;
void ui_event_ScreenSettingSwitchFan(lv_event_t * e);
extern lv_obj_t * ui_ScreenSettingSwitchFan;

void splash_finish(lv_event_t * e);
void control_change(lv_event_t * e);
void add_tem_5(lv_event_t * e);
void dec_tem_5(lv_event_t * e);
void fanChange(lv_event_t * e);

LV_IMG_DECLARE(ui_img_logo_png);    // assets\logo.png
LV_IMG_DECLARE(ui_img_shezhi3_png);    // assets\shezhi3.png
LV_IMG_DECLARE(ui_img_fanhui_png);    // assets\fanhui.png


LV_FONT_DECLARE(ui_font_AutoFontCn18);
LV_FONT_DECLARE(ui_font_AutoFontCn18B);
LV_FONT_DECLARE(ui_font_AutoFontCn30);
LV_FONT_DECLARE(ui_font_AutoFontCn30B);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
