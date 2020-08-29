#include QMK_KEYBOARD_H
#include <stdbool.h>

#define _MAIN 0

int increment = 0;
#define _MAIN 0
#define _SPOTIFY 1

enum {
    TD_DISCORD,
    TD_SPOTIFY
};

qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_DISCORD] = ACTION_TAP_DANCE_DOUBLE(LGUI(KC_4), LALT(KC_TAB)),
    [TD_SPOTIFY] = ACTION_TAP_DANCE_DOUBLE(LGUI(KC_5), LALT(KC_TAB))
};

void encoder_update_user(uint8_t index, bool clockwise) {
    switch(biton32(layer_state)){
        case 1:
            if (clockwise) {
                tap_code16(C(KC_UP));       // does LCTRL + UP for spotify vol up
            } else {
                tap_code16(C(KC_DOWN));     // does LCTRL + DOWN for spotify vol down
            }
            break;
        default:
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
            break;
    }
}

// void encoder_update_user(uint8_t index, bool clockwise) {
//     switch (biton32(layer_state)) {
//         case 1:
//             if (clockwise) {
//                 LCTL(KC_UP);
//             } else {
//                 LCTL(KC_DOWN);
//             }
//             break;
//         default:
//             if (clockwise) {
//                 tap_code(KC_VOLU);
//             } else {
//                 tap_code(KC_VOLD);
//             }
//             break;
//     }
// }

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { //buttion closest to usb is first
  [_MAIN] = LAYOUT(
    TO(_SPOTIFY), TD(TD_SPOTIFY), TD(TD_DISCORD), KC_MNXT, KC_MPLY, KC_MPRV
  ),
  [_SPOTIFY] = LAYOUT(
    TO(_MAIN), TD(TD_SPOTIFY), TD(TD_DISCORD), KC_MNXT, KC_MPLY, KC_MPRV
  )
};
