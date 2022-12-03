#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( \
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_EQUAL, \
        KC_LCTRL,KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_GRV,       KC_QUOT, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,KC_MINUS, \
        KC_LEFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,       KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,KC_RIGHT, \
        MO(1), GUI_T(KC_LANG2),KC_BSPACE,SFT_T(KC_SPC),                     SFT_T(KC_SPC),KC_ENT , GUI_T(KC_LANG1),KC_NO
    ),
    [1] = LAYOUT( \
        TO(2),      KC_F1,      KC_F2,      KC_F3,      KC_F4,       KC_F5,                       KC_F6, KC_F7,         KC_F8,   KC_F9,          KC_F10, KC_NO, \
        KC_NO,      KC_NO,      C(KC_LEFT), KC_MS_UP,   C(KC_RIGHT), KC_NO,                       KC_NO, A(G(KC_LEFT)), KC_UP,   A(G(KC_RIGHT)), KC_NO,  KC_NO, \
        KC_MS_BTN2, KC_MS_BTN1, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_NO,    KC_VOLU,  KC_BRIU, KC_NO, KC_LEFT,       KC_DOWN, KC_RIGHT,       KC_NO,  KC_NO, \
        KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,  KC_VOLD,  KC_BRID, KC_NO, KC_NO,         KC_NO,   KC_NO,          KC_NO,  KC_NO, \
        KC_NO, KC_NO, KC_NO, KC_NO,                     KC_NO, BL_BRTG, BL_STEP, BL_TOGG
    ),
    [2] = LAYOUT( \
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    TO(0), \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_EQUAL, \
        KC_LCTRL,KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_GRV,       KC_QUOT, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,KC_MINUS, \
        KC_LEFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,       KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,KC_RIGHT, \
        KC_BSLS, KC_LGUI, KC_BSPACE, KC_SPC,                     SFT_T(KC_SPC),KC_ENT , KC_LANG1,KC_LANG2
    )
};
