// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: DHT22

#ifndef _DHT22_UI_H
#define _DHT22_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_temp;
extern lv_obj_t * ui_humi;
extern lv_obj_t * ui_temperture;
extern lv_obj_t * ui_Humi;
extern lv_obj_t * ui_TempHumiChart;
extern lv_obj_t * ui____initial_actions0;
extern lv_chart_series_t * ui_TempHumiChart_series_1;
extern lv_chart_series_t * ui_TempHumiChart_series_2;


LV_IMG_DECLARE(ui_img_temperature_png);    // assets/temperature.png
LV_IMG_DECLARE(ui_img_humidity_png);    // assets/humidity.png



LV_FONT_DECLARE(ui_font_Zendots22);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
