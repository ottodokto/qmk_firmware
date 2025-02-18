/*
Copyright 2019 Khader Syed

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

enum layers {
    _ALPH,
    _NAVI,
    _NFSH
};

#define FNMS MO(_NAVI)
#define SPCNAV LT(_NFSH, KC_SPC)
#define CAPSTL CTL_T(KC_CAPS)
#define CMDENT CMD_T(KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ALPH] = LAYOUT_default(
    KC_GESC, KC_ESC,  KC_1,  KC_2,    KC_3,   KC_4,    KC_5,  KC_6,  KC_7,   KC_8,  KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC,
    KC_VOLU, KC_TAB,  KC_Q,  KC_W,    KC_E,   KC_R,    KC_T,         KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    KC_VOLD, CAPSTL,  KC_A,  KC_S,    KC_D,   KC_F,    KC_G,         KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
             KC_LSFT, KC_Z,  KC_X,    KC_C,   KC_V,    KC_B,         KC_B,   KC_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, FNMS,
             KC_LCTL,              KC_LALT,     CMDENT, FNMS,          SPCNAV,       KC_RALT,                              KC_RCTL
  ),

  [_NAVI] = LAYOUT_default(
    RGB_TOG, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
    RGB_MOD, _______, _______, _______, _______, _______, _______,        _______, _______, KC_MS_U, _______, _______, _______, _______, RESET,
    VLK_TOG, _______, _______, _______, _______, _______, _______,        KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN2, _______,         _______,
             _______, BL_INC,   BL_DEC, BL_TOGG, BL_BRTG, _______,        RGB_SAI, RGB_HUI, RGB_VAI, RGB_SAD, RGB_HUD, RGB_VAD, _______, _______,
             _______,                   _______,  _______, _______,         _______,          _______,                        _______
  ),

  [_NFSH] = LAYOUT_default(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_MPLY,        KC_MSTP, _______,   KC_UP, _______, _______, _______, _______, RESET,
    _______, _______, _______, _______, _______, _______, KC_VOLU,        KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,         EEP_RST,
             _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______,
             _______,                   _______,  _______, _______,         _______,          _______,                        _______
  )
};

