// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


//defining macros to have multiple letter keys
enum custom_keycodes {
    L_THE = SAFE_RANGE,
    L_AND,
    L_AKE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case L_THE:
        if (record->event.pressed) {
            SEND_STRING("the");
        }
        break;
    case L_AND:
        if (record->event.pressed) {
            SEND_STRING("and");
        }
        break;
    case L_AKE:
        if (record->event.pressed) {
            SEND_STRING("ake");
        }
        break;
    }
    return true;
};

//defining key combos
const uint16_t PROGMEM bckspc[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM ctr_bckspc[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM retrn[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM dot[] = {KC_U, KC_K, COMBO_END};
const uint16_t PROGMEM lbrck[] = {KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM rbrck[] = {KC_A, KC_H, COMBO_END};
const uint16_t PROGMEM slash[] = {KC_A, KC_H, COMBO_END};
const uint16_t PROGMEM exclam[] = {KC_S, KC_C, COMBO_END};
combo_t key_combos[] = {
    COMBO(bckspc, KC_BSPC),
    COMBO(ctr_bckspc, C(KC_BSPC)),
    COMBO(retrn, KC_ENT),
    COMBO(dot, KC_DOT),
    COMBO(lbrck, S(KC_9)),
    COMBO(rbrck, S(KC_0)),
    COMBO(slash, KC_SLSH),
    COMBO(exclam, S(KC_1)),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //alpha 1
    [0] = LAYOUT(
              KC_V,                                             KC_QUOT,
    KC_N, KC_R, KC_S, KC_T,                               KC_A, KC_E, KC_I, KC_9,
          KC_X, KC_C, KC_D,                               KC_H, KC_U, KC_K,
            MT(MOD_LSFT, KC_SPC), KC_NO,           KC_LGUI, OSL(1),

          MO(3), KC_ESC, KC_NO, KC_LALT,           MO(2), KC_LCTL, KC_TAB, KC_NO
    ),
    //alpha 2
    [1] = LAYOUT(
              KC_W,                                           KC_Z,
    KC_J, KC_F, KC_L, KC_P,                               L_AND, L_THE, KC_Y, KC_Q,
         KC_B, KC_M, KC_G,                               KC_SCLN, KC_COMM, L_AKE,
                     _______, _______,          KC_LGUI, TO(0),

        _______, _______, _______, _______, _______, _______, _______, _______
    ),
    //num
    [2] = LAYOUT(
              KC_LBRC,                                           KC_RBRC,
    KC_6, KC_7, KC_8, KC_0,                               KC_1, KC_3, KC_4, KC_5,
         KC_LBRC, KC_MINS, KC_9,                               KC_2, KC_EQL, KC_RBRC,
                           _______, _______,          KC_LGUI, TO(0),

        _______, _______, _______, _______, _______, _______, _______, _______
    ),
    //nav
    [3] = LAYOUT(
              KC_NO,                                           KC_UP,
    KC_LSFT, KC_LALT, KC_LGUI, KC_LCTL,               KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGUP,
         KC_LBRC, KC_MINS, KC_9,                               KC_MS_BTN1, KC_MS_BTN2, KC_PGDN,
                           _______, _______,          KC_LGUI, TO(0),

        _______, _______, _______, _______, _______, _______, _______, _______
    ),



};
