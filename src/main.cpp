#include <lvgl.h>
#include <TFT_eSPI.h>
#include <Arduino.h>
#include <Wire.h>
#include <lv_port_indev.h>

#include <benchmark/lv_demo_benchmark.h>
#include <ui/ui.h>
#include <ui/ui_helpers.h>
#include <main.h>
#include <Ticker.h>
/*If you want to use the LVGL examples,
  make sure to install the lv_examples Arduino library
  and uncomment the following line.
#include <lv_examples.h>
*/
//#include <lv_examples.h>
//#include <lv_demo.h>

/*Change to your screen resolution*/
static const uint16_t screenWidth  = 240;
static const uint16_t screenHeight = 280;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * 30 ];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */


lv_indev_t * indev_keypad_or_encoder;

Ticker temControlTicker;

int TAR_TEM ;
int HEAT_PIN ;
int FAN_PIN_1 ;
int FAN_PIN_2 ;
boolean start = false;
int lastTem = 0;

void change_tar_tem(int c)
{
    if(c == 1){
        TAR_TEM += 5;
    }else{
        TAR_TEM -= 5;
    }
    lv_textarea_set_text(ui_textAreaTemHJ, String(TAR_TEM).c_str());
    lv_label_set_text(ui_tarTem, String(TAR_TEM).c_str());
}

void change_control()
{
    start = !start ;
    if(start){
        lv_obj_set_style_bg_color(ui_control, lv_color_hex(0xf9211b), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_shadow_color(ui_control, lv_color_hex(0xDD7842), LV_PART_MAIN | LV_STATE_PRESSED);
        lv_label_set_text(ui_labBtStart, "停止");
    }else{
        lv_obj_set_style_bg_color(ui_control, lv_color_hex(0x3981FF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_shadow_color(ui_control, lv_color_hex(0x5C98FF), LV_PART_MAIN | LV_STATE_PRESSED);
        lv_label_set_text(ui_labBtStart, "启动");
    }
}

//0x20-0x7F
//回流焊台目标温度模式空闲加热冷却启动停止设定设置速率保温风扇自动焊接当前

/* Display flushing */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp );
}


static void event_handler(lv_event_t * e)
{
    //Serial.println( "event_handler" );
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj = lv_event_get_target(e);
    if(code == LV_EVENT_PRESSED) {
        uint32_t id = lv_btnmatrix_get_selected_btn(obj);
        const char * txt = lv_btnmatrix_get_btn_text(obj, id);
        LV_LOG_USER("%s was pressed\n", txt);
    }
}


void tem_control_loop()
{
    float readV = analogRead(15) * 1.0 / 4095.0 * 3.3;
    float temR = readV/(3.3-readV)*100.0;
    float tem = 1/(log(temR*1000/100000) /3950+ 1/(25+273.15))-273.15;

    if(start){
        if(tem > TAR_TEM){
            digitalWrite(HEAT_PIN, LOW);
            if(tem + 2 > TAR_TEM){//相差1度以上再开启风扇
                digitalWrite(41, HIGH);
                digitalWrite(42, HIGH);
            }
            lv_label_set_text(ui_mode, "冷却");
        }else{
            digitalWrite(HEAT_PIN, HIGH);
            digitalWrite(41, LOW);
            digitalWrite(42, LOW);
            lv_label_set_text(ui_mode, "加热");
        }
    }else{
        digitalWrite(HEAT_PIN, LOW);
        if(tem > 45){
            digitalWrite(41, HIGH);
            digitalWrite(42, HIGH);
            lv_label_set_text(ui_mode, "冷却");
        }else{
            digitalWrite(41, LOW);
            digitalWrite(42, LOW);
            lv_label_set_text(ui_mode, "空闲");
        }
    }
    
    Serial.println(String(readV) + " " + String(temR, 6) + " " + String(tem, 2) + " " + String(start));

    String showTem = String(tem, 0) + "°C";
    lv_label_set_text(ui_currentTem, showTem.c_str());

    if(((int)tem) != lastTem){
        lastTem = (int)tem;
        if(tem <= 45){
            lv_obj_set_style_bg_color(ui_Screen1_Bar1, lv_color_hex(0x3981ff), LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        if(tem > 45){
            lv_obj_set_style_bg_color(ui_Screen1_Bar1, lv_color_hex(0xf08c56), LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        if(tem > 65){
            lv_obj_set_style_bg_color(ui_Screen1_Bar1, lv_color_hex(0xf46e25), LV_PART_INDICATOR | LV_STATE_DEFAULT);   
        }
        if(tem > 90){
            lv_obj_set_style_bg_color(ui_Screen1_Bar1, lv_color_hex(0xf44d25), LV_PART_INDICATOR | LV_STATE_DEFAULT);   
        }
        if(tem > 120){
            lv_obj_set_style_bg_color(ui_Screen1_Bar1, lv_color_hex(0xf52f00), LV_PART_INDICATOR | LV_STATE_DEFAULT);   
        }
    }
}
 

void setup()
{

    HEAT_PIN = 4;
    FAN_PIN_1 = 41;
    FAN_PIN_1 = 42;

    setCpuFrequencyMhz(240);
    Serial.begin( 115200 ); /* prepare for possible serial debug */
    pinMode(47, OUTPUT);
    digitalWrite(47, HIGH);
    pinMode(15, INPUT);
    pinMode(41, OUTPUT);
    pinMode(42, OUTPUT);
    pinMode(4, OUTPUT);
    digitalWrite(41, LOW);
    digitalWrite(42, LOW);
    //analogSetPinAttenuation(15, ADC_6db);

    //Wire.begin(11, 12);
    Wire.begin(10, 11);

    //keypad_init();

    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println( LVGL_Arduino );
    Serial.println( "I am LVGL_Arduino" );

    lv_init();

    tft.begin();          /* TFT init */
    tft.setRotation( 0 ); /* Landscape orientation, flipped */

    /*Set the touchscreen calibration data,
     the actual data for your display can be acquired using
     the Generic -> Touch_calibrate example from the TFT_eSPI library*/
    // uint16_t calData[5] = { 275, 3620, 264, 3532, 1 };
    // tft.setTouch( calData );

    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * 30 );

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );

    /*Initialize the (dummy) input device driver*/
	//使用触摸的输入方式
    lv_port_indev_init();

    LV_FONT_DECLARE(my_font_cn);
    LV_FONT_DECLARE(my_font_cn_big);

    ui_init();

    TAR_TEM = 180;

    lv_textarea_set_text(ui_textAreaTemHJ, String(TAR_TEM).c_str());
    lv_label_set_text(ui_tarTem, String(TAR_TEM).c_str());

    Serial.println( "Setup done" );

    temControlTicker.attach_ms(250, tem_control_loop);

    //_ui_screen_change(ui_ScreenMain, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 3000);
}

int change = 0;

void loop()
{
    lv_timer_handler(); /* let the GUI do its work */
    if(change < 399 && change >= 0){
        change += 1;
    }else if(change >= 399){
        
        //_ui_screen_change(ui_ScreenMain, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
        lv_scr_load_anim(ui_ScreenMain, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 1500, false);
        
        change = -1;
    }

    //tem_control_loop();
    // if(tem < 200){
    //     lv_obj_set_style_bg_color(ui_Screen1_Bar1, lv_color_hex(0x3982FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    // }else{
    //     lv_obj_set_style_bg_color(ui_Screen1_Bar1, lv_color_hex(0xFF9232), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    // }
    delay( 2 );
}