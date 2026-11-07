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
		KC_F11,		KC_F12,		KC_F13,			KC_F14,			KC_F15,			KC_F16,
		KC_7,		KC_8,		KC_9,			KC_0,			KC_MINUS, 		KC_EQUAL,			KC_BACKSPACE,
		KC_Y,		KC_U,		KC_I,			KC_O,			KC_P,			KC_LEFT_BRACKET,	KC_RIGHT_BRACKET,	KC_BACKSLASH,
		KC_H,		KC_J,		KC_K,			KC_L,			KC_SEMICOLON,	KC_QUOTE,			KC_ENTER,
		KC_B,		KC_N,		KC_M,			KC_COMMA,		KC_DOT,			KC_SLASH,			KC_RIGHT_SHIFT,
		MO(FN),		KC_SPACE,	KC_RIGHT_ALT,	KC_RIGHT_GUI,	KC_RIGHT_CTRL,	KC_F17
	),
	[FN] = LAYOUT(
		EE_CLR,		KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,		KC_TRNS,
		KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS, 		KC_TRNS,			KC_TRNS,
		KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,		KC_TRNS,			KC_TRNS, 			KC_TRNS,
		KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,		KC_TRNS,			KC_TRNS,
		KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,		KC_TRNS,			KC_TRNS,
		MO(FN),		KC_TRNS,	RM_NEXT,		RM_VALD,		RM_VALU,		KC_TRNS
	),
};
