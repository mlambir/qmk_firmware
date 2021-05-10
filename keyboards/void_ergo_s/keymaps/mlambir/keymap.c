#include QMK_KEYBOARD_H

enum user_layers {
  BASE_LAYER,
  LOWER_LAYER,
  RAISE_LAYER,
  NUM_LAYER,
  ADJUST_LAYER
};

#define LOWER MO(LOWER_LAYER)
#define RAISE MO(RAISE_LAYER)
#define NUM MO(NUM_LAYER)
#define ADJUST MO(ADJUST_LAYER)

#define HYPER_L ALL_T(KC_RBRC)
#define HYPER_R ALL_T(KC_LBRC)

#define CTL_ESC CTL_T(KC_ESC)
#define CTL_ENT CTL_T(KC_ENT)

#define GU_LEFT LGUI(KC_LEFT)
#define GU_UP LGUI(KC_UP)
#define GU_DOWN LGUI(KC_DOWN)
#define GU_RGHT LGUI(KC_RGHT)

#define AL_LEFT LALT(KC_LEFT)
#define AL_UP LALT(KC_UP)
#define AL_DOWN LALT(KC_DOWN)
#define AL_RGHT LALT(KC_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE_LAYER] = LAYOUT_ortho_4x12(
  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                        KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
  CTL_ESC,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                        KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  NUM,
  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,    KC_LPRN,  KC_RPRN,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
                                KC_HYPR,  KC_LGUI,  LOWER,   KC_SPC,   KC_ENT,   RAISE,    KC_RGUI,  KC_RALT
),

[LOWER_LAYER] = LAYOUT_ortho_4x12(
  _______,  _______,  _______,  _______,  _______,  _______,                     _______,  _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  KC_EQL,                      _______,  _______,  _______,  _______,  KC_TILD,  _______,
  _______,  KC_BSLS,  _______,  _______,  KC_UNDS,  KC_QUOT,  KC_LCBR,  KC_RCBR, KC_QUOT,  KC_UNDS,  _______,  _______,  KC_BSLS,  _______,
                                _______,  _______,  _______,  _______,  _______, ADJUST,   _______,  _______
),

[RAISE_LAYER] = LAYOUT_ortho_4x12(
  _______,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,                      KC_CIRC,  KC_AMPR,  KC_ASTR,  _______,  KC_GRV,   KC_DEL,
  _______,  _______,  _______,  _______,  _______,  KC_PLUS,                      KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_COLN,  _______,
  _______,  KC_PIPE,  _______,  _______,  KC_MINS,  KC_DQUO,  KC_LBRC,  KC_RBRC,  KC_DQUO,  KC_MINS,  _______,  _______,  KC_PIPE,  _______,
                                _______,  _______,  ADJUST,   _______,  _______,  _______,  _______,  _______
),

[NUM_LAYER] = LAYOUT_ortho_4x12(
  _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                         KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,                        KC_PSLS,  KC_4,     KC_5,     KC_6,     KC_PMNS,  _______,
  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  KC_PAST,  KC_1,     KC_2,     KC_3,     KC_PPLS,  _______,
                                _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_0
),

[ADJUST_LAYER] = LAYOUT_ortho_4x12(
  AG_SWAP,  AG_NORM,  _______,  RGB_M_P,  RGB_TOG,  RGB_MOD,                      _______,  _______,  _______,  _______,  _______,  _______,
  RESET,    _______,  _______,  RGB_HUI,  RGB_SAI,  RGB_VAI,                      KC_MNXT,  KC_VOLU,  KC_VOLD,  KC_MPLY,  KC_MUTE,  _______,
  _______,  _______,  _______,  RGB_HUD,  RGB_SAD,  RGB_VAD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
                                _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
)
};


