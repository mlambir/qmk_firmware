/* Copyright 2020 gkeyboard
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

enum layers {
  _BASE = 0,
  _CONFIG,
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_ortho_4x4(
    KC_P7,  KC_P8,  KC_P9,    KC_PSLS ,
    KC_P4,  KC_P5,  KC_P6,  KC_PAST,
    KC_P1, KC_P2,  KC_P3,  KC_PMNS,
    LT(_CONFIG, KC_PENT), KC_P0,  KC_PDOT,  KC_PPLS
  ),
  [_CONFIG] = LAYOUT_ortho_4x4(
    RESET,  _______,  _______,  _______,
    _______, _______,  _______,  _______,
    _______,  _______,  _______,  _______,
    _______,  KC_NLCK,  _______,  _______
  )

};

