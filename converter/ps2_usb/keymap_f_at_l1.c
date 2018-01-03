#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: default
     * ,-------. ,-----------------------------------------------------------. ,---------------.
     * | F1| F2| |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| \ |Bsp| |Esc|NmL|ScL|SRq|
     * |---|---| |-----------------------------------------------------------| |---------------|
     * | F3| F4| |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     | |  7|  8|  9|  *|
     * |---|---| |------------------------------------------------------     | |---------------|
     * | F5| F6| |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|   Enter| |  4|  5|  6|  -|
     * |---|---| |-----------------------------------------------------------| |---------------|
     * | F7| F8| |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|    Shift | |  1|  2|  3|   |
     * |---|---| |-----------------------------------------------------------| |------------  +|
     * | F9|F10| |Alt|    |             Space                     |    |CapsL| |      0|  .|   |
     * `-------' `---'    `---------------------------------------'    `-----' `---------------'
     */
    KEYMAP_AT(
    LGUI,ESC, GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL,NO,  BSPC,   INS, HOME,PGUP, F9,
    F1, F2,   TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,     NO,    DEL, END, PGDN, F10,
    F3, F4,   CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,    BSLS, ENT,   PSCR,SLCK,BRK,  F11,
    F5, F6,   LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,      NO,RSFT,   NO,  UP,  NO,   F12,
    F7, F8,   LCTL,  LALT,             SPC,                     RALT,              RCTL,   LEFT,DOWN,RIGHT,APP
    ),

};

const action_t PROGMEM fn_actions[] = {
};
