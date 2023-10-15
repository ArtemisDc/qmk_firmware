/*
Copyright 2019 mechmerlin

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define ANALOG_JOYSTICK_X_AXIS_PIN F4
#define ANALOG_JOYSTICK_Y_AXIS_PIN F5
#define ANALOG_JOYSTICK_AXIS_MIN 0
#define ANALOG_JOYSTICK_AXIS_MAX 1023
#define ANALOG_JOYSTICK_SPEED_REGULATOR 40
#define ANALOG_JOYSTICK_READ_INTERVAL 10
#define ANALOG_JOYSTICK_SPEED_MAX 2

#define MATRIX_ROW_PINS { F0, F1, D1, F7, F6} 
//F7 & A9
#define MATRIX_COL_PINS { C7, C6, B6, B5, B4, D7, D6, B7, B3, B2, B1, B0}

#define DIODE_DIRECTION COL2ROW
#define ENCODERS_PAD_A { D2 }
#define ENCODERS_PAD_B { D3 }
#define ENCODER_RESOLUTION 2
#define TAP_CODE_DELAY 10

#define RGB_DI_PIN F7
#ifdef RGB_DI_PIN
    #define RGBLED_NUM 8
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
    #define RGBLIGHT_LIMIT_VAL 150 // Limit to vendor-recommended value
    //#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#endif
#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // Limit to vendor-recommended value
#endif
