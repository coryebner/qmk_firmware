#include QMK_KEYBOARD_H

#define ______ KC_TRNS

enum layers {
    DEFAULT,
	GAME,
	SFT_FN,
	SPC_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* DEFAULT 
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │ ` │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │ TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ BKSP│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │ CTRL │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ ENTER  │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
 * │ SHIFT  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ SHIFT│LYR│
 * ├────┬───┴┬──┴─┬─┴───┴───┴┬──┴─┬─┴───┴──┬┴───┼───┴┬────┬┴───┤
 * │CTL │ OS │ALT │ SPACE    │ FN │ SPACE  │ALT │ OS │CTRL│GAME│
 * └────┴────┴────┴──────────┴────┴────────┴────┴────┴────┴────┘
 */
  [DEFAULT] = LAYOUT_60_calbatr0ss(
      KC_ESC,  KC_1,    KC_2, KC_3,    KC_4,   KC_5, KC_6,  KC_7, KC_8,   KC_9,    KC_0,   KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
      KC_TAB,           KC_Q, KC_W,    KC_E,   KC_R, KC_T,  KC_Y, KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
      LCTL_T(KC_ESC),   KC_A, KC_S,    KC_D,   KC_F, KC_G,  KC_H, KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT,          KC_Z, KC_X,    KC_C,   KC_V, KC_B,  KC_N, KC_M,   KC_COMM, KC_DOT, KC_SLSH,          KC_RSFT, MO(SFT_FN),
      KC_LCTL, KC_LGUI,       KC_LALT, KC_SPC,       MO(SPC_FN),       KC_SPC, KC_RALT,         KC_RGUI, KC_RCTL,  TG(GAME)
	),


/* GAME
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │ ` │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │ TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ BKSP│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │ CTRL │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ ENTER  │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
 * │ SHIFT  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ SHIFT│LYR│
 * ├────┬───┴┬──┴─┬─┴───┴───┴┬──┴─┬─┴───┴──┬┴───┼───┴┬────┬┴───┤
 * │CTL │ CTL│ALT │ SPACE    │ FN │ SPACE  │ALT │ OS │CTRL│DEFT│
 * └────┴────┴────┴──────────┴────┴────────┴────┴────┴────┴────┘
 */
  [GAME] = LAYOUT_60_calbatr0ss(
      KC_ESC,  KC_1,    KC_2, KC_3,    KC_4,   KC_5, KC_6,  KC_7, KC_8,   KC_9,    KC_0,   KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
      KC_TAB,           KC_Q, KC_W,    KC_E,   KC_R, KC_T,  KC_Y, KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
      KC_LCTL,          KC_A, KC_S,    KC_D,   KC_F, KC_G,  KC_H, KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT,          KC_Z, KC_X,    KC_C,   KC_V, KC_B,  KC_N, KC_M,   KC_COMM, KC_DOT, KC_SLSH,          KC_RSFT, MO(SFT_FN),
      KC_CAPS, KC_LCTL,       KC_LALT, KC_SPC,       MO(SPC_FN),       KC_SPC, KC_RALT,         KC_RGUI, KC_RCTL,  TG(DEFAULT)
	),

/* SPC FN
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│PRT│SLK│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │     │   │   │   │   │   │HOM│PDN│PUP│END│   │   │   │ DEL │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │LFT│DWN│UP │RHT│   │   │ ENTER  │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
 * │        │   │   │   │   │   │   │   │   │   │   |      │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴┬──┴─┬─┴───┴──┬┴───┼───┴┬────┬┴───┤
 * │    │    │    │          │    │        │    │    │    │    │
 * └────┴────┴────┴──────────┴────┴────────┴────┴────┴────┴────┘
 */
  [SPC_FN] = LAYOUT_60_calbatr0ss(
      ______,  KC_F1,   KC_F2,  KC_F3,     KC_F4,    KC_F5,  KC_F6,   KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,  KC_F12,  KC_PSCR, KC_SLCK,
      ______,           ______, ______,    ______,   ______, ______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   ______,  ______,  ______, KC_DEL,
      ______,           ______, ______,    ______,   ______, ______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, ______,  ______,  ______,
      ______,           ______, ______,    ______,   ______, ______,  ______,   ______,   ______,   KC_PAUS,  ______,           ______, ______,
      ______,  ______,          ______,    ______,           ______,            ______,             ______,   ______,  ______,  ______
	),
};
