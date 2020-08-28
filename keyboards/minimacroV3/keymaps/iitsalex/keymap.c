#include QMK_KEYBOARD_H
#include <stdbool.h>

#define _MAIN 0

int increment = 0;
#define _MAIN 0
#define _SPOTIFY 1

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
    TO(_SPOTIFY), LGUI(KC_5), LGUI(KC_4), KC_MNXT, KC_MPLY, KC_MPRV
  ),
  [_SPOTIFY] = LAYOUT(
    TO(_MAIN), LGUI(KC_5), LGUI(KC_4), KC_MNXT, KC_MPLY, KC_MPRV
  )
};
