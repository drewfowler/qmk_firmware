
#include QMK_KEYBOARD_H

enum layers{
  _BASE,
  _NUM_SYM,
  _NAV,
  _FUNC,
};

enum combo_events {
  COMBO_BSPC,
  COMBO_NUMBAK,
  COMBO_TAB,
  COMBO_ESC,
  COMBO_DEL,
  COMBO_CPY,
  COMBO_PST,
  COMBO_UND,
  COMBO_ENT,
  COMBO_SAVE,
};

#define KC_COPY LCTL(KC_C)
#define KC_PASTE LCTL(KC_V)
#define KC_UNDO LCTL(KC_Z)
#define KC_CUT LCTL(KC_X)
#define KC_SAVE LCTL(KC_S)
#define KC_NAV_SPC LT(_NAV, KC_SPC)
#define KC_NUM_ENT LT(_NUM_SYM, KC_ENT)

/* Special Keys */
#define MC_GZ LGUI_T(KC_Z)
#define MC_XS LALT_T(KC_X)
#define MC_CD LCTL_T(KC_D)
#define MC_SF LSFT_T(KC_F)
#define MC_SJ RSFT_T(KC_J)
#define MC_CK RCTL_T(KC_K)
#define MC_AL RALT_T(KC_L)
#define MC_GSCLN RALT_T(KC_SCLN)
#define MC_QUOT RGUI_T(KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,            KC_Y,   KC_U,    KC_I,   KC_O,     KC_P,
    KC_A,  KC_S,  MC_CD,  MC_SF,   KC_G,            KC_H,  MC_SJ,   MC_CK,  KC_L, MC_GSCLN,
    MC_GZ,   MC_XS,   KC_C,   KC_V,   KC_B,            KC_N,   KC_M, KC_COMM, KC_DOT,  MC_QUOT,
                     KC_LCTL, KC_NUM_ENT,            KC_NAV_SPC, RSFT_T(KC_DEL)
  ),

  [_NUM_SYM] = LAYOUT(
        KC_1,  KC_2,     KC_3,     KC_4,      KC_5,            KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
    KC_EXLM,  KC_AT,  KC_HASH,   KC_DLR,   KC_PERC,            KC_CIRC,  KC_AMPR,  KC_ASTR, KC_EQUAL,  KC_PLUS,
    KC_UNDS,  KC_BSLS,KC_LCBR,  KC_LBRC,  KC_LPRN,               KC_RPRN,  KC_RBRC,  KC_RCBR,   KC_SLSH,   KC_MINS,
                                KC_CAPS,   KC_TRNS,            KC_TRNS,  KC_QUES
  ),

  [_NAV] = LAYOUT(
      RESET,  _______,  AG_NORM,  AG_SWAP,  DEBUG,           KC_GRV,  KC_PGDN,    KC_UP,  KC_PGUP,  KC_SCLN,
    KC_CAPS,  KC_F13,  KC_LCTL,  KC_MNXT,  KC_VOLU,           KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RGHT,   KC_END,
    RGB_MOD,  RGB_HUD,  RGB_SAD,  KC_MSTP,  KC_VOLD,           KC_MINS,    KC_RO,  KC_COMM,   KC_GRV,  KC_BSLS,
                                  KC_TRNS,KC_TRNS,           KC_TRNS,  MO(_FUNC)
  ), 
  [_FUNC] = LAYOUT(
      KC_F1,  KC_F2,     KC_F3,    KC_F4,   KC_F5,              KC_F6,  KC_F7,    KC_F8,  KC_F9,  KC_F10,
    RGB_TOG,  RGB_HUI,  RGB_SAI,  RGB_VAI,  KC_VOLU,           KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RGHT,   KC_END,
    RGB_MOD,  RGB_HUD,  RGB_SAD,  RGB_VAD,  KC_VOLD,           KC_MINS,    KC_RO,  KC_COMM,   KC_GRV,  KC_BSLS,
                                  KC_TRNS,KC_TRNS,             KC_TRNS,  KC_TRNS
  ), 
};

//testing git


// #ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_bspc[]   = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_numbak[] = {KC_0, KC_9, COMBO_END};
const uint16_t PROGMEM combo_tab[]    = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_esc[]    = {KC_E, KC_W, COMBO_END};
const uint16_t PROGMEM combo_del[]    = {KC_MINS, KC_EQL, COMBO_END};
const uint16_t PROGMEM combo_cpy[]    = {MC_XS, KC_C, COMBO_END};
const uint16_t PROGMEM combo_pst[]    = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_und[]    = {MC_GZ, MC_XS, COMBO_END};
const uint16_t PROGMEM combo_ent[]    = {MC_AL, MC_GSCLN, COMBO_END};
const uint16_t PROGMEM combo_save[]    = {KC_S, MC_CD, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
  [COMBO_BSPC] =   COMBO(combo_bspc,KC_BSPC),
  [COMBO_NUMBAK] = COMBO(combo_numbak,KC_BSPC),
  [COMBO_TAB] =    COMBO(combo_tab,KC_TAB),
  [COMBO_ESC] =    COMBO(combo_esc,KC_ESC),
  [COMBO_DEL] =    COMBO(combo_del,KC_DEL),
  [COMBO_CPY] =    COMBO(combo_cpy,KC_COPY),
  [COMBO_PST] =    COMBO(combo_pst,KC_PASTE),
  [COMBO_UND] =    COMBO(combo_und,KC_CUT),
  [COMBO_ENT] =    COMBO(combo_ent,KC_ENT),
  [COMBO_SAVE] =    COMBO(combo_save,KC_SAVE),

};
// #endif
