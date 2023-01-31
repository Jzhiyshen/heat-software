// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: heat

#include <Arduino.h>
#include "ui.h"
#include <main.h>

void splash_finish(lv_event_t * e)
{
	// Your code here
}

void fanChange(lv_event_t * e)
{
	// Your code here
    lv_obj_t * obj = lv_event_get_target(e);
	if(lv_obj_has_state(obj, LV_STATE_CHECKED)== 1)
	{
		LV_LOG("                                          on");
		digitalWrite(41, HIGH);
	}
	else
	{
		LV_LOG("                                           off");
		digitalWrite(41, LOW);
	}

}

void add_tem_5(lv_event_t * e)
{
	// Your code here
	change_tar_tem(1);
}

void dec_tem_5(lv_event_t * e)
{
	// Your code here
	change_tar_tem(0);
}

void control_change(lv_event_t * e)
{
	// Your code here
	change_control();
}
