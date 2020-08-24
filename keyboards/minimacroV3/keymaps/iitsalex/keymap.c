#include QMK_KEYBOARD_H
#include <stdbool.h>

#define _MAIN 0

int increment = 0;

void encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
}

// void encoder_update_user(uint8_t index, bool clockwise) {
//     if (clockwise) {
//         if (++increment >= 2) {
//             tap_code(KC_VOLU);
//             increment = 0;
//         }
//     } else {
//         if (++increment >= 2) {
//             tap_code(KC_VOLD);
//             increment = 0;
//         }
//     }
// }

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { //buttion closest to usb is first
  [_MAIN] = LAYOUT(
     KC_MUTE, KC_B, KC_C, KC_D, KC_E, KC_F
  )
};
