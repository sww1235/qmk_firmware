// vim: set ts=4 sw=4 noet :
// Copyright 2026 Stephen Walker-Weinshenker
// SPDX-License-Identifier: GPL-2.0-or-later


// https://docs.qmk.fm/keymap#keymap-and-layers
#include QMK_KEYBOARD_H

enum layer_names {
	MAIN,
	FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[MAIN] = LAYOUT(
		KC_F5,		KC_ESCAPE,		KC_F1,			KC_F2,			KC_F3,		KC_F4,
		KC_F6,		KC_GRAVE,		KC_1,			KC_2,			KC_3, 		KC_4,		KC_5,		KC_6,
		KC_F7,		KC_TAB,			KC_Q,			KC_W,			KC_E,		KC_R,		KC_T,
		KC_F8,		KC_CAPS_LOCK,	KC_A,			KC_S,			KC_D,		KC_F,		KC_G,
		KC_F9,		KC_LEFT_SHIFT,	KC_Z,			KC_X,			KC_C,		KC_V,		KC_B,
		KC_F10,		KC_LEFT_CTRL,	KC_LEFT_GUI,	KC_LEFT_ALT,	KC_SPACE,	MO(FN)
	),
	[FN] = LAYOUT(
		EE_CLR,		KC_TRNS,		KC_TRNS,		KC_TRNS,		KC_TRNS,	KC_TRNS,
		KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,		KC_TRNS, 	KC_TRNS,	KC_TRNS,	KC_TRNS,
		KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,
		KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,
		KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,
		KC_TRNS,	RM_VALU,		RM_VALD,		RM_NEXT,		KC_TRNS,	MO(FN)
	),
};
