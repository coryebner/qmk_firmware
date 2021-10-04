#pragma once
#include QMK_KEYBOARD_H

#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// clang-format off
#define LAYOUT_lily58_wrapper(...) LAYOUT(__VA_ARGS__)

#define LOWER LT(_LOWER, KC_TAB)
#define RAISE LT(_RAISE, KC_ENT)
#define MOUSE TG(_MOUSE)

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L RALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

enum layers{
    _ALPHA = 0,   // default
    _GAME,
    _LOWER,
    _RAISE,
    _ADJUST,
    _MOUSE,
};

// stolen from drashna
#define _________________QWERTY_L1_________________        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________        HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G
#define _________________QWERTY_L3_________________        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B 

#define _________________QWERTY_R1_________________        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________        KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN
#define _________________QWERTY_R3_________________        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH

#define ____THUMB_L____ LOWER,  KC_BSPC
#define ____THUMB_R____ KC_SPC, RAISE 


/* Lower layer
 *
 * ,-----------------------------.        ,-----------------------------.
 * |  1  |  2  |  3  |  4  |  5  |        |  6  |  7  |  8  |  9  |  0  |
 * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 * |  $  |  +  |  (  |  )  |  @  |        |  |  |  -  |  =  |  _  |  *  |
 * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 * |  !  |  #  |  {  |  }  |  ~  |        |  &  |  [  |  ]  |  %  |  ^  |
 * `-----------------------------'        `-----------------------------'
 */
#define _________________SYMBOL_L1_________________         KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define _________________SYMBOL_L2_________________         KC_DLR,  KC_PLUS, KC_LPRN, KC_RPRN, KC_AT   
#define _________________SYMBOL_L3_________________         KC_EXLM, KC_HASH, KC_LCBR, KC_RCBR, KC_TILD 

#define _________________SYMBOL_R1_________________         KC_6,    KC_7,    KC_8,    KC_9,    KC_0  
#define _________________SYMBOL_R2_________________         KC_PIPE, KC_MINS, KC_EQL,  KC_UNDS, KC_ASTR
#define _________________SYMBOL_R3_________________         KC_AMPR, KC_LBRC, KC_RBRC, KC_PERC, KC_CIRC 


/* Raise/nav
 * ,-----------------------------.          ,-----------------------------.
 * |     |     |     |Word |Back |          | home | pgdwn| pgup | end  |     |
 * |-----+-----+-----+-----+-----|          |-----+-----+-----+-----+-----|
 * |Appen|     |Right|     |     |          |     |     | End |     |     |
 * |-----+-----+-----+-----+-----|	        |-----+-----+-----+-----+-----|
 * |     |     |     |     |     |          | Up  |Left |     |     |     |
 * `-----------------------------'	        `-----------------------------'
 */
#define _________________NAV_L1____________________         _______, _______, _______, _______, _______
#define _________________NAV_L2____________________         _______, _______, _______, _______, _______
#define _________________NAV_L3____________________         _______, _______, _______, _______, _______            

#define _________________NAV_R1____________________         KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______
#define _________________NAV_R2____________________         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______
#define _________________NAV_R3____________________         KC_PSCR, KC_SLCK, KC_PAUS, _______, _______

/* Adjust/whatever  
 * ,-----------------------------.          ,-----------------------------.
 * | F1  | F2  | F3  | F4  | F5  |          | F6  | F7  | F8  | F9  | F10 |
 * |-----+-----+-----+-----+-----|          |-----+-----+-----+-----+-----|
 * | F11 |     |     |     |     |          |     |     |     |     | F12 | 
 * |-----+-----+-----+-----+-----|	        |-----+-----+-----+-----+-----|
 * |     |     |     |Alpha| Gm  |          |     |     |     |     |     |
 * `-----------------------------'	        `-----------------------------'
 */

#define _________________ADJUST_L1_________________         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________ADJUST_L2_________________         KC_F11,  _______, _______, _______, _______ 
#define _________________ADJUST_L3_________________         _______, _______, _______, DF(_ALPHA), DF(_GAME)

#define _________________ADJUST_R1_________________         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10
#define _________________ADJUST_R2_________________         _______, _______, _______, _______, KC_F12
#define _________________ADJUST_R3_________________         _______, _______, _______, _______, _______

/* Gaming layer left half (its qwerty but shifted over 1 row)
 *
 * ,-----------------------------.
 * |  T  |  Q  |  W  |  E  |  R  |
 * |-----+-----+-----+-----+-----|
 * |LSHFT|  A  |  S  |  D  |  F  |
 * |-----+-----+-----+-----+-----|
 * |LCTRL|  Z  |  X  |  C  |  V  |
 * `-----------------------------'
 */
#define _________________GAME_L1___________________      KC_T,    KC_Q, KC_W, KC_E, KC_R 	  
#define _________________GAME_L2___________________      KC_LSFT, KC_A, KC_S, KC_D, KC_F
#define _________________GAME_L3___________________      KC_LCTL, KC_Z, KC_X, KC_C, KC_V

#define __GAME_THUMB_L__ LOWER,   KC_SPC
#define __GAME_THUMB_R__ KC_BSPC, RAISE  

/* Mouse cluster 
 *  ,-----------------.
 *  | LMB |  ^  | RMB |
 *  |-----+-----+-----|
 *  |  <  |  v  |  >  |
 *  `-----------------'
 */
#define _________MOUSE_1_________    KC_BTN1, KC_MS_U, KC_BTN2
#define _________MOUSE_2_________    KC_MS_L, KC_MS_D, KC_MS_R
