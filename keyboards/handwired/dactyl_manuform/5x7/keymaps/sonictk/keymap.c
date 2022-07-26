#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _FN     1
#define _NUMPAD 2

// Some basic macros
#define TASK   LCTL(LSFT(KC_ESC))
#define TAB_R  LCTL(KC_TAB)
#define TAB_L  LCTL(LSFT(KC_TAB))
#define TAB_RO LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x7(
        // left hand
        KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_LGUI,
        KC_GRV,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_TAB,
        KC_PGUP,   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_ESC,
        KC_PGDN,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,
        KC_APP,    KC_INS,  KC_LGUI, KC_LALT,
            TT(_NUMPAD),  // bot left
            KC_LCTL,      // top left
            TT(_FN),      // mid bot
            KC_SPC,       // mid top
            KC_LSFT,      // bot right 
            KC_LALT,      // top right
        // right hand
                          KC_CAPS, KC_6,    KC_7,    KC_8,     KC_9,     KC_0,     KC_FIND,
                          KC_ENT,  KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_EQL,
                          KC_RGUI, KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
                                   KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_MINS,
                                            KC_RALT, KC_RGUI,  KC_HOME,  KC_END,
            KC_RCTL,      // top right
            TT(_NUMPAD),  // bot right
            KC_BSPC,      // mid top
            TT(_FN),      // mid bot
            KC_RALT,      // left top
            KC_RSFT       // left bot
    ),

    [_FN] = LAYOUT_5x7(
        // left hand
        KC_VOLU,   KC_F1,     KC_F2,      KC_F3,    KC_F4,     KC_F5,    KC_APP,
        KC_VOLD,   _______,   _______,    KC_UP,    _______,   _______,  _______,
        KC_MPLY,   _______,   KC_LEFT,    KC_DOWN,  KC_RGHT,   _______,  _______,
        KC_MNXT,   _______,   _______,    _______,  _______,   _______,
        KC_MPRV,   KC_MSTP,   _______,    _______,
                                    _______,
                                    _______,
                                    _______,
                                    _______,
                                    _______,
                                    _______,
        // right hand
                          KC_NUM,    KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,
                          KC_HOME,   KC_PGUP,   KC_LCBR,   KC_RCBR,   KC_LBRC,   KC_RBRC,   KC_F12,
                          _______,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_INS,    KC_SYRQ,
                                     KC_PGDN,   KC_END,    KC_PAUS,   KC_SCRL,   KC_BSLS,   KC_PIPE,
                                                           _______,   _______,   _______,   KC_PSCR,
                                    _______,
                                    _______,
                                    KC_DEL,
                                    _______,
                                    _______,
                                    _______
    ),

    [_NUMPAD] = LAYOUT_5x7(
        // left hand
        QK_BOOT,   _______,   _______,   _______,   _______,   _______,  _______,
        QK_RBT,   _______,   _______,    KC_MS_U,   _______,   _______,  _______,
        _______,   _______,   KC_MS_L,   KC_MS_D,   KC_MS_R,   _______,  _______,
        _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          KC_BTN3,   _______,   KC_NLCK,   KC_PSLS,   KC_PAST,   KC_PMNS,   _______,
                          KC_BTN1,   _______,   KC_P7,     KC_P8,     KC_P9,     KC_PPLS,   _______,
                          KC_BTN2,   _______,   KC_P4,     KC_P5,     KC_P6,     KC_PPLS,   _______,
                                     _______,   KC_P1,     KC_P2,     KC_P3,     KC_PENT,   _______,
                                                           KC_P0,     KC_PDOT,   KC_PENT,   _______,
             _______, _______, _______,
             _______, _______, _______
    ),
};
