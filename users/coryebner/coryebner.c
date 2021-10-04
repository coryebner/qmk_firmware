#include "coryebner.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(record->event.pressed) {
        switch (keycode){

        }
    }
    return true;
}
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
} 
bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER:
            return false;
        default:
            return true;
    }
}
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HOME_A:
        case HOME_S:
        case HOME_L:
        case HOME_SCLN:
            return TAPPING_TERM + 50;
        case LOWER:
            return TAPPING_TERM - 50;
        default:
            return TAPPING_TERM;
    }
}
/**
 * TODO:
 * Mouse keys?
 * Game layer
 * move <> onto symbol layers?
 * replace < > with '"
 * replace q ? 
 */

