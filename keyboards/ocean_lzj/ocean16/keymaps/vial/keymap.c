#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_default16(
		KC_NUM_LOCK, KC_P7, KC_P8, KC_P9, 
		KC_PAGE_UP, KC_P4, KC_P5, KC_P6, 
		KC_PAGE_DOWN, KC_P1, KC_P2, KC_P3, 
		MO(1), KC_P0, KC_PDOT, KC_PENT),

	[1] = LAYOUT_default16(
		KC_ESC, KC_MUTE, KC_VOLD, KC_VOLU, 
		KC_TRNS, LCTL(KC_S), KC_LCTL, RCTL(KC_P), 
		KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), 
		KC_TRNS, MO(2), KC_TRNS, KC_TRNS),

	[2] = LAYOUT_default16(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

