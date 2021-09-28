
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

#define L_BASE 0
#define L_ADJUST (1 << 1)
#define L_NAV (1 << 2)
#define L_NUM (1 << 3)
#define L_FUNC (1 << 4)
#define L_GAME (1 << 5)
#define L_ADJUST_TRI (L_ADJUST | L_NAV | L_NUM)

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Default");
    break;
  case L_NAV:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Navigation");
    break;
  case L_NUM:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Numbers");
    break;
  case L_FUNC:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Function");
    break;
  case L_GAME:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Game");
    break;
  case L_ADJUST:
  case L_ADJUST_TRI:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
  }

  return layer_state_str;
}
