/* Copyright 2019 mechmerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_F1 ,KC_F2, KC_F3, KC_F4, KC_F5,
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Z,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    LT(1,KC_ENT), MO(4)   ,
        MO(1),          KC_Y,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_UP,   KC_DOT, KC_MEDIA_PLAY_PAUSE,
        KC_LCTL, KC_X, KC_LGUI, KC_LALT,      LT(2,KC_SPC),        LT(2,KC_SPC) ,   KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
    KC_F6 ,KC_F7, KC_F8, KC_F9, KC_F10,
        KC_ESC,  S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T), S(KC_Z), S(KC_U), S(KC_I), S(KC_O), S(KC_P), KC_DEL,
        KC_TAB,    S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G), S(KC_H), S(KC_J), S(KC_K), S(KC_L), S(KC_ENT),MO(4)   ,
            _______, S(KC_Y), S(KC_X), S(KC_C), S(KC_V), S(KC_B), S(KC_N), S(KC_M), KC_NUBS, KC_UP, S(KC_NUBS),KC_F11,
        KC_LCTL,KC_X, KC_LGUI, KC_LALT,          LT(3, KC_ENT),        LT(3,KC_SPC),        KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [2] = LAYOUT(
    KC_1 ,KC_2, KC_3, KC_4, KC_5,
        KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_BSPC,
        KC_TAB,    KC_QUOT, S(KC_8), S(KC_9), S(KC_DOT), S(KC_COMM), S(KC_7), KC_LBRC, KC_MINS, KC_SCLN,    LT(3,KC_ENT),MO(4)   ,
            MO(3), KC_NUHS, S(KC_6), ALGR(KC_E), S(KC_2), S(KC_0), KC_SLSH, ALGR(KC_Q), S(KC_MINS), KC_UP, S(KC_1),KC_F12,
        KC_LCTL,KC_X, KC_LGUI, KC_LALT,     _______     ,        KC_SPC,        KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [3] = LAYOUT(
    KC_1 ,KC_2, KC_3, KC_4, KC_5,
        S(KC_GRV),   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_DEL,
        KC_TAB,    S(KC_QUOT), ALGR(KC_8), ALGR(KC_9), ALGR(KC_7), ALGR(KC_0), ALGR(KC_MINS), S(KC_LBRC), KC_MINS, S(KC_SCLN),    _______, MO(4)   ,
            _______, ALGR(KC_RBRC), S(KC_3), S(KC_4), S(KC_NUHS), KC_RBRC, S(KC_SLSH), ALGR(KC_NUBS), S(KC_RBRC), KC_UP, S(KC_5),KC_PAUS,
        KC_LCTL,KC_X, KC_LGUI, KC_LALT,          _______,        KC_SPC,        KC_LEFT, KC_DOWN, KC_RGHT
    ),
     [4] = LAYOUT(
        KC_1 ,KC_2, KC_3, KC_4, KC_5,
        KC_ESC,  KC_Q ,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT, _______,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_UP,   KC_DOT, KC_MEDIA_PLAY_PAUSE,
        KC_LCTL, KC_F1, KC_LGUI, KC_LALT,                 KC_SPC,              LT(2,KC_SPC) , KC_LEFT, KC_DOWN, KC_RGHT
    ),


};

