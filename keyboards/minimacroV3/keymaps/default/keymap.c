#include QMK_KEYBOARD_H

#define _MAIN 0

// void encoder_update_user(uint8_t index, bool clockwise) {
//   // if (index == 0) { /* First encoder*/
//   //   if (clockwise) {
//   //     tap_code(KC_1);
//   //   } else {
//   //     tap_code(KC_2);
//   //   }
//   // } else if (index == 1) { /* Second encoder*/  
//   //   if (clockwise) {
//   //     tap_code(KC_3);
//   //   } else {
//   //     tap_code(KC_4);
//   //   }
//   // } else if (index == 2) { /* Third encoder*/  
//   //   if (clockwise) {
//   //     tap_code(KC_5);
//   //   } else {
//   //     tap_code(KC_6);
//   //   }
//   // } else if (index == 3) { /* Fourth encoder*/  
//   //   if (clockwise) {
//   //     tap_code(KC_7);
//   //   } else {
//   //     tap_code(KC_8);
//   //   }
//   // } else if (index == 4) { /* Fifth encoder*/  
//   //   if (clockwise) {
//   //     tap_code(KC_9);
//   //   } else {
//   //     tap_code(KC_0);
//   //   }
//   // }
// }

//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { //buttion closest to usb is first
  [_MAIN] = LAYOUT(
     KC_A, KC_B, KC_C, KC_D, KC_E, KC_F
  )
};
