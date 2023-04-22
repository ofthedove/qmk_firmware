// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Adapted from handwired/dactyl_manuform/4x5/keymaps/default
    [0] = LAYOUT_ortho_5x4(
        KC_Q,  KC_W,    KC_E,    KC_R,    KC_T,       KC_HOME,       SFT_ENT, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,  KC_S,    KC_D,    KC_F,    KC_G,       KC_GRV,        KC_LGUI, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,  KC_X,    KC_C,    KC_V,    KC_B,       MO(1),         MO(2),   KC_N,    KC_M,    KC_COMM, KC_DOT,
               KC_LBRC, KC_RBRC, SFT_ESC, CTL_BSPC,   KC_TAB,        KC_DEL,  ALT_SPC, SFT_ENT, KC_MINS, KC_EQL,  KC_QUOT
    ),

    [1] = LAYOUT_ortho_5x4(
        _______, KC_MB2,  KC_MU,   KC_MB1,  _______, _______,        _______, KC_VOLU, _______, KC_UP,   _______, KC_PGUP,
        _______, KC_ML,   KC_MD,   KC_MR,   _______, _______,        _______, KC_MUTE, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,
        _______, _______, _______, _______, _______, _______,        _______, KC_VOLD, KC_SLSH, KC_BSLS, KC_QUES,
                 _______, _______, _______, _______, _______,        _______, _______, _______, KC_MB1,  KC_MB2,  KC_PIPE
    ),

    [2] = LAYOUT_ortho_5x4(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,        _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,        _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______,        _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,
                 KC_F11,  KC_F12,  _______, _______, _______,        _______, _______, _______, _______, _______, KC_RPRN
    )
};
