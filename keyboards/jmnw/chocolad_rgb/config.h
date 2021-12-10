#pragma once
#include "config_common.h"

// USB device descriptor parameter
#define MANUFACTURER    jmnw
#define PRODUCT         chocolad_rgb
#define DESCRIPTION     A 5x3+3 column-staggered split keyboard.

// key matrix size
// rows are doubled for split keyboards
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

// wiring of each half
#define MATRIX_ROW_PINS { D4, C6, D7, E6 }
#define MATRIX_COL_PINS { B1, F7, F6, F5, F4 }
#define DIODE_DIRECTION COL2ROW

// communication between sides
#define USE_SERIAL
#define SOFT_SERIAL_PIN D2
#define SERIAL_USE_MULTI_TRANSACTION
#define EE_HANDS

// RGB underglow
#define RGB_DI_PIN D3
#ifdef RGB_DI_PIN
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLED_NUM 18
#define RGBLIGHT_SPLIT
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_SLEEP
#endif
