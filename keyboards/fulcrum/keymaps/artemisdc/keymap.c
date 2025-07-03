// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


//encoders
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [2] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [3] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
};
#endif


//defining macros to have multiple letter keys
enum custom_keycodes {
    L_THE = SAFE_RANGE,
    L_AND,
    L_AKE,
    M_AE,
    M_OE,
    M_UE,
    M_SS,
    M_EU,
    M_LAE,
    M_LOE,
    M_LUE,
    M_LSS
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) return true;
    switch (keycode) {
    case L_THE:
            SEND_STRING("the");
            break;
    case L_AND:
            SEND_STRING("and");
            break;
    case L_AKE:
            SEND_STRING("ake");
            break;
    case M_AE:
            SEND_STRING(SS_TAP(X_RALT)"\"a");
            break;
    case M_OE:
            SEND_STRING(SS_TAP(X_RALT)"\"o");
            break;
    case M_UE:
            SEND_STRING(SS_TAP(X_RALT)"\"u");
            break;
    case M_SS:
            SEND_STRING(SS_TAP(X_RALT)"ss");
            break;
    case M_LAE:
            SEND_STRING(SS_TAP(X_RALT)"\"A");
            break;
    case M_LOE:
            SEND_STRING(SS_TAP(X_RALT)"\"O");
            break;
    case M_LUE:
            SEND_STRING(SS_TAP(X_RALT)"\"U");
            break;
    case M_LSS:
            SEND_STRING(SS_TAP(X_RALT)"SS");
            break;

    case M_EU:
            SEND_STRING(SS_TAP(X_RALT)"=E");
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
                KC_V,                                                    KC_QUOT,
    KC_N, KC_R, KC_S, KC_T,                                        KC_A, KC_E, KC_I, KC_O,
          KC_X, KC_C, KC_D, KC_F13,                       KC_PAUS, KC_H, KC_U, KC_K,
               MT(MOD_LSFT, KC_SPC), KC_LGUI,      OSL(3), OSL(1),

             MO(5), KC_ESC, OSL(4), KC_LALT,      KC_NO, KC_TAB, KC_LCTL, MO(2)
    ),
    //alpha 2
    [1] = LAYOUT(
                KC_W,                                                   KC_Z,
    KC_J, KC_F, KC_L, KC_P,                                    L_AND,   L_THE, KC_Y, KC_Q,
          KC_B, KC_M, KC_G,_______,                 _______, KC_SCLN, KC_COMM, L_AKE,
                     _______, _______,         KC_LGUI, TO(0),

        _______, _______, _______, _______, _______, _______, _______, _______
    ),
    //num
    [2] = LAYOUT(
                KC_LBRC,                                                 KC_RBRC,
    KC_6, KC_7, KC_8, KC_0,                                        KC_1, KC_3, KC_4, KC_5,
         KC_LBRC, KC_MINS, KC_9, _______,                 _______, KC_2, KC_EQL, KC_RBRC,
                          _______, _______,           KC_LGUI, TO(0),

        _______, _______, _______, _______, _______, _______, _______, _______
    ),
    //sym 1
    [3] = LAYOUT(
                      S(KC_COMM),                                        S(KC_DOT),
    KC_LBRC, KC_RBRC, KC_SCLN, S(KC_SCLN),                         M_AE, M_SS, M_UE, M_OE,
          KC_HASH, S(KC_7), M_EU, _______,                _______, KC_EQL, KC_MINS, S(KC_2),
                           _______, _______,            _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______

    ),
    //sym 2
    [4] = LAYOUT(
                      S(KC_COMM),                                        S(KC_DOT),
    S(KC_LBRC), S(KC_RBRC), KC_NO, S(KC_GRAVE),                        M_LAE, M_LSS, M_LUE, M_LOE,
          KC_NO, KC_GRAVE, S(KC_4), _______,                _______, S(KC_EQUAL), S(KC_MINS), S(KC_BSLS),
                           _______, _______,            _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______

    ),
    //nav
    [5] = LAYOUT(
                      KC_NO,                                          KC_UP,
    KC_LSFT, KC_LALT, KC_LGUI, KC_LCTL,                      KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGUP,
           KC_LBRC, KC_MINS, KC_9,_______,          _______, KC_MS_BTN1, KC_MS_BTN2, KC_PGDN,
                          _______, _______,      KC_LGUI, TO(0),

        _______, _______, _______, _______, _______, _______, _______, _______
    ),



};
