// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// enum custom_keycodes {
//     KC_P00 = SAFE_RANGE
// };

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │TG1│ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │ + │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ % │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ = │
     * ├───┼───┼───┼───┤
     * │ 0 │00 │ . │Ent│
     * └───┴───┴───┴───┘
     */
    // [0] = LAYOUT_ortho_5x4(
    //     TG(1),   KC_PSLS, KC_PAST, KC_PMNS,
    //     KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    //     KC_P4,   KC_P5,   KC_P6,   KC_PERC,
    //     KC_P1,   KC_P2,   KC_P3,   KC_EQL,
    //     KC_P0,   KC_P00,  KC_PDOT, KC_PENT
    // ),
    
    // [0] = LAYOUT_ortho_5x4(
    //     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
    //     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
    //     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
    //                       KC_LBRC, KC_RBRC,
    //                                                  SFT_ESC, CTL_BSPC,
    //                                                  KC_TAB,  KC_HOME,
    //                                                  MO(1),   KC_GRV
    // ),

    [0] = LAYOUT_ortho_5x4(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_HOME,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_GRV,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       MO(1),
                 KC_LBRC, KC_RBRC, SFT_ESC, CTL_BSPC,   KC_TAB
    ),

    /*
     * ┌───┬───┬───┬───┐
     * │TG1│ / │ * │ - │
     * ┌───┬───┬───┐───┤
     * │Hom│ ↑ │PgU│ + │
     * ├───┼───┼───┤───┤
     * │ ← │   │ → │ % │
     * ├───┼───┼───┤───┤
     * │End│ ↓ │PgD│ = │
     * ├───┼───┼───┤───┤
     * │Ins│   │Del│Ent│
     * └───┴───┴───┘───┘
     */
    // [1] = LAYOUT_ortho_5x4(
    //     _______, _______, _______, _______,
    //     KC_HOME, KC_UP,   KC_PGUP, _______,
    //     KC_LEFT, XXXXXXX, KC_RGHT, _______,
    //     KC_END,  KC_DOWN, KC_PGDN, _______,
    //     KC_INS,  XXXXXXX, KC_DEL,  _______
    // )

    [1] = LAYOUT_ortho_5x4(
        _______, KC_MB2,  KC_MU,   KC_MB1,  _______, _______,
        _______, KC_ML,   KC_MD,   KC_MR,   _______, _______,
        _______, _______, _______, _______, _______, _______,
                 _______, _______, _______, _______, _______
    )
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     if (record->event.pressed) {
//         switch(keycode) {
//             case KC_P00:
//                 tap_code(KC_P0);
//                 tap_code(KC_P0);
//                 return false;
//         }
//     }
//     return true;
// }
