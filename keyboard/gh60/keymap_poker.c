#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base Layer */
  KEYMAP(ESC,   1,     2,     3,     4,     5,     6,     7,     8,     9,     0,     MINS,  EQL,   BSPC, \
         TAB,   Q,     W,     E,     R,     T,     Y,     U,     I,     O,     P,     LBRC,  RBRC,  BSLS, \
         LGUI,  A,     S,     D,     F,     G,     H,     J,     K,     L,     SCLN,  QUOT,         ENT,  \
         LSFT,  Z,     X,     C,     V,     B,     N,     M,     COMM,  DOT,   SLSH,                RSFT, \
         LCTL,  FN0,   LALT,                SPC,                        RALT,  RGUI,          APP,  RCTL),

  /* Function Layer */
  KEYMAP(SLEP,  F1,    F2,    F3,    F4,    F5,    F6,    F7,    F8,    F9,    F10,   F11,   F12,   DEL,  \
         TRNS,  HOME,  UP,    END,   PGUP,  TRNS,  HOME,  PGDN,  PGUP,  END,   PSCR,  VOLD,  VOLU,  MUTE, \
         CAPS,  LEFT,  DOWN,  RGHT,  PGDN,  TRNS,  LEFT,  DOWN,  UP,    RGHT,  PAUS,  GRV,          PENT, \
         TRNS,  MPRV,  MPLY,  MSTP,  MNXT,  TRNS,  INS,   TRNS,  TRNS,  TRNS,  TRNS,                TRNS, \
         TRNS,  TRNS,  TRNS,                TRNS,                       TRNS,  TRNS,          TRNS, TRNS),

};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
};
