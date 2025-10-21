// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0
// Keymap converted from Vial configuration: May2025.vil

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Layer 0 (Base)
     * ┌─────┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │ F12 │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │ ` │
     * ├─────┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │ Esc │SF/│CT/│AL/│GU/│ G │       │ H │GU/│AL/│CT/│SF/│ ' │
     * │     │ A │ S │ D │ F │   │       │   │ J │ K │ L │ ; │   │
     * ├─────┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │LCtrl│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │ \ │
     * └─────┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
     *             ┌────┐                       ┌────┐
     *             │MO2 ├────┐             ┌────┤Ent │
     *             └────┤Shft├────┐   ┌────┤Spac├────┘
     *                  └────┤MO1 │   │Bksp├────┘
     *                       └────┘   └────┘
    */
    [0] = LAYOUT_split_3x6_3(
        KC_F12,  KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                               KC_Y,    KC_U,         KC_I,         KC_O,        KC_P,            KC_GRV,
        KC_ESC,  LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G,                               KC_H,    RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_SCLN), KC_QUOT,
        KC_LCTL, KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                               KC_N,    KC_M,         KC_COMM,      KC_DOT,      KC_SLSH,         KC_BSLS,
                                                           MO(2),        KC_LSFT,      MO(1),        KC_BSPC, KC_SPC,  KC_ENT
    ),

    /*
     * Layer 1 (Numbers/Symbols)
     * ┌─────┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │  !  │   │ { │ } │ @ │ # │       │ - │ + │ ( │ ) │ ^ │ = │
     * ├─────┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │     │SF/│CT/│AL/│GU/│ 5 │       │ 6 │GU/│AL/│CT/│SF/│ * │
     * │     │ 1 │ 2 │ 3 │ 4 │   │       │   │ 7 │ 8 │ 9 │ 0 │   │
     * ├─────┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │     │   │ & │ % │ _ │   │       │   │ $ │ [ │ ] │ | │   │
     * └─────┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
     *             ┌────┐                       ┌────┐
     *             │    ├────┐             ┌────┤    │
     *             └────┤    ├────┐   ┌────┤    ├────┘
     *                  └────┤    │   │    ├────┘
     *                       └────┘   └────┘
    */
    [1] = LAYOUT_split_3x6_3(
        LSFT(KC_1), KC_TRNS,      LSFT(KC_LBRC), LSFT(KC_RBRC), LSFT(KC_2), LSFT(KC_3),                               KC_MINS,    LSFT(KC_EQL), LSFT(KC_9), LSFT(KC_0), LSFT(KC_6),   KC_EQL,
        KC_TRNS,    LSFT_T(KC_1), LCTL_T(KC_2),  LALT_T(KC_3),  LGUI_T(KC_4), KC_5,                                   KC_6,       RGUI_T(KC_7), RALT_T(KC_8), RCTL_T(KC_9), RSFT_T(KC_0), KC_PAST,
        KC_TRNS,    KC_TRNS,      LSFT(KC_7),    LSFT(KC_5),    LSFT(KC_MINS), KC_TRNS,                               KC_TRNS,    LSFT(KC_4),   KC_LBRC,    KC_RBRC,    LSFT(KC_BSLS), KC_TRNS,
                                                                KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS, KC_TRNS,    KC_TRNS
    ),

    /*
     * Layer 2 (Function/Navigation)
     * ┌─────┬────┬────┬────┬────┬────┐       ┌────┬────┬────┬────┬────┬────┐
     * │ F12 │ F1 │ F2 │ F3 │ F4 │ F5 │       │ F6 │ F7 │ F8 │ F9 │F10 │F11 │
     * ├─────┼────┼────┼────┼────┼────┤       ├────┼────┼────┼────┼────┼────┤
     * │     │Shft│Ctrl│ Alt│ Gui│    │       │Left│Down│ Up │Rght│    │    │
     * ├─────┼────┼────┼────┼────┼────┤       ├────┼────┼────┼────┼────┼────┤
     * │     │C-Z │C-X │C-C │C-V │    │       │    │    │    │    │    │    │
     * └─────┴────┴────┴────┴────┴────┘       └────┴────┴────┴────┴────┴────┘
     *             ┌────┐                       ┌────┐
     *             │    ├────┐             ┌────┤    │
     *             └────┤    ├────┐   ┌────┤    ├────┘
     *                  └────┤    │   │    ├────┘
     *                       └────┘   └────┘
    */
    [2] = LAYOUT_split_3x6_3(
        KC_F12,  KC_F1,        KC_F2,        KC_F3,       KC_F4,       KC_F5,                               KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        KC_TRNS, KC_LSFT,      KC_LCTL,      KC_LALT,     KC_LGUI,     KC_TRNS,                             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,
        KC_TRNS, LGUI(KC_Z),   LGUI(KC_X),   LGUI(KC_C),  LGUI(KC_V),  KC_TRNS,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                          KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS, KC_TAB,  LGUI(KC_ENT)
    )
};
