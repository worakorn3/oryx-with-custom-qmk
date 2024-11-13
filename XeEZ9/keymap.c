#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
  DANCE_28,
  DANCE_29,
  DANCE_30,
  DANCE_31,
  DANCE_32,
  DANCE_33,
  DANCE_34,
  DANCE_35,
  DANCE_36,
  DANCE_37,
  DANCE_38,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    LGUI(KC_SPACE), KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    TD(DANCE_0),    KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,        
    MT(MOD_LGUI, KC_ESCAPE),KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           MT(MOD_RGUI, KC_QUOTE),
    KC_LEFT_CTRL,   MT(MOD_LALT, KC_Z),KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         MT(MOD_RALT, KC_SLASH),KC_RIGHT_CTRL,  
                                                    LT(7,KC_ENTER), TD(DANCE_1),                                    LT(6,KC_BSPC),  MT(MOD_LSFT, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_DOT),   LSFT(KC_O),     
    KC_TRANSPARENT, KC_DOT,         KC_9,           KC_S,           KC_RBRC,        KC_L,                                           KC_X,           KC_Y,           KC_D,           KC_B,           KC_LBRC,        LSFT(KC_H),     
    KC_TRANSPARENT, KC_QUOTE,       KC_G,           KC_I,           KC_O,           KC_COMMA,                                       KC_V,           KC_K,           KC_J,           KC_H,           KC_SCLN,        KC_N,           
    KC_TRANSPARENT, MT(MOD_LALT, KC_6),KC_W,           KC_M,           KC_P,           KC_0,                                           KC_8,           KC_U,           KC_F,           KC_T,           TD(DANCE_2),    KC_TRANSPARENT, 
                                                    LT(7,KC_ENTER), KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(2,KC_SPACE)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_R),     LSFT(KC_G),     
    KC_TRANSPARENT, LSFT(KC_COMMA), LSFT(KC_D),     LSFT(KC_SCLN),  LSFT(KC_P),     KC_A,                                           LSFT(KC_C),     KC_7,           LSFT(KC_T),     LSFT(KC_LBRC),  LSFT(KC_E),     LSFT(KC_S),     
    KC_TRANSPARENT, LSFT(KC_K),     KC_5,           KC_C,           KC_EQUAL,       KC_R,                                           KC_Z,           KC_E,           KC_MINUS,       LSFT(KC_F),     KC_4,           LSFT(KC_W),     
    KC_TRANSPARENT, LSFT(KC_A),     KC_SLASH,       KC_Q,           LSFT(KC_I),     LSFT(KC_U),                                     LSFT(KC_J),     LSFT(KC_N),     LSFT(KC_L),     LSFT(KC_V),     LSFT(KC_M),     KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MT(MOD_RGUI, KC_QUOTE),
    KC_TRANSPARENT, MT(MOD_LALT, KC_Z),KC_X,           KC_C,           LT(5,KC_V),     KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RALT, KC_SLASH),MT(MOD_RCTL, KC_BSPC),
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TD(DANCE_3),    KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MT(MOD_RGUI, KC_QUOTE),
    KC_TRANSPARENT, MT(MOD_LALT, KC_Z),KC_X,           KC_C,           LT(5,KC_V),     KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RALT, KC_SLASH),KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_EQUAL,       
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_RBRC,        KC_BSLS,        
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_LEFT_SHIFT,  KC_NO,                                          ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,                                          KC_NO,          ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_UNDS,        KC_MINUS,       KC_PLUS,        ST_MACRO_9,                                     KC_NO,          KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_NO,          
    TD(DANCE_4),    KC_LABK,        KC_LBRC,        KC_LPRN,        KC_LCBR,        ST_MACRO_10,                                    TD(DANCE_5),    TD(DANCE_6),    KC_EQUAL,       TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    
    KC_NO,          KC_RABK,        KC_RBRC,        KC_RPRN,        KC_RCBR,        ST_MACRO_11,                                    QK_LLCK,        KC_PERC,        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_ESCAPE,      KC_NO,          KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_NO,          
    KC_NO,          LCTL(KC_A),     TD(DANCE_10),   KC_UP,          TD(DANCE_11),   TD(DANCE_12),                                   KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_LEFT_SHIFT,  TD(DANCE_13),   KC_DOWN,        TD(DANCE_14),   TD(DANCE_15),                                   KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ENTER,    KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_LLCK,                                        KC_KP_0,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TD(DANCE_16),   KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_NO,          
    KC_LEFT_GUI,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_MS_UP,       KC_NO,          KC_NO,                                          KC_MS_WH_UP,    KC_MS_WH_LEFT,  KC_NO,          KC_MS_WH_RIGHT, KC_NO,          KC_NO,          
    MT(MOD_LGUI, KC_ESCAPE),KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,                                          KC_MS_WH_DOWN,  KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_NO,          KC_LEFT_GUI,    
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_NO,          KC_NO,          KC_NO,          QK_LLCK,                                        KC_NO,          KC_MS_BTN4,     KC_MS_BTN5,     KC_NO,          KC_LEFT_ALT,    KC_LEFT_CTRL,   
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_voyager(
    TD(DANCE_17),   KC_NO,          KC_NO,          KC_NO,          KC_NO,          TD(DANCE_18),                                   TD(DANCE_22),   KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    LALT(LSFT(KC_Y)),KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    LALT(LSFT(KC_N)),TD(DANCE_19),   TD(DANCE_20),   TD(DANCE_21),   ST_MACRO_12,    LSFT(KC_F6),                                    LCTL(KC_W),     LCTL(KC_N),     LCTL(LSFT(KC_P)),TD(DANCE_23),   LCTL(KC_G),     KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),                                     LCTL(KC_Z),     LCTL(LSFT(KC_Z)),LCTL(KC_Y),     KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          TO(8),          TG(12),         KC_TRANSPARENT,                                 KC_NO,          TG(23),         TG(24),         KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          TO(1),          TO(4),          TD(DANCE_24),   TO(0),          KC_NO,                                          KC_NO,          TG(13),         TG(14),         TG(15),         TG(16),         KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          TG(17),         TG(18),         KC_NO,          TG(19),         TG(22),         
                                                    TO(0),          KC_NO,                                          LALT(LCTL(KC_S)),TO(0)
  ),
  [12] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_TOG,        RGB_SLD,        KC_NO,          LALT(LCTL(KC_DELETE)),
    KC_NO,          KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_NO,                                          QK_DYNAMIC_TAPPING_TERM_UP,RGB_VAI,        RGB_SPI,        KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,TD(DANCE_25),   KC_MEDIA_NEXT_TRACK,KC_NO,                                          QK_DYNAMIC_TAPPING_TERM_DOWN,RGB_VAD,        RGB_SPD,        KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          QK_DYNAMIC_TAPPING_TERM_PRINT,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [13] = LAYOUT_voyager(
    KC_ESCAPE,      KC_5,           KC_1,           KC_2,           KC_3,           KC_4,                                           KC_P,           KC_NO,          KC_NO,          LALT(KC_F3),    LALT(LCTL(KC_S)),LALT(KC_F4),    
    KC_TAB,         KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_C,           KC_B,           KC_M,           KC_J,           KC_L,           KC_G,           
    KC_NO,          KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_Z,           KC_X,           KC_T,           KC_V,                                           KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_BSLS,        
                                                    KC_SPACE,       KC_NO,                                          LALT(KC_TAB),   KC_ENTER
  ),
  [14] = LAYOUT_voyager(
    KC_ESCAPE,      KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,                                           KC_NO,          KC_NO,          KC_NO,          LALT(KC_F3),    LALT(LCTL(KC_S)),LALT(KC_F4),    
    KC_TAB,         KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_C,           KC_B,           KC_M,           KC_J,           KC_T,           KC_G,           
    KC_NO,          KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_Z,           KC_X,           KC_V,           KC_I,                                           KC_F4,          KC_NO,          KC_F3,          KC_F2,          KC_F1,          KC_NO,          
                                                    KC_SPACE,       KC_NO,                                          LALT(KC_TAB),   TD(DANCE_26)
  ),
  [15] = LAYOUT_voyager(
    KC_ESCAPE,      KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,                                           KC_NO,          KC_NO,          KC_NO,          LALT(KC_F3),    LALT(LCTL(KC_S)),LALT(KC_F4),    
    KC_TAB,         KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_C,           KC_B,           KC_M,           KC_E,           KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_Z,           KC_X,           KC_T,           KC_V,                                           KC_F2,          KC_NO,          KC_F4,          KC_F3,          KC_F1,          KC_J,           
                                                    KC_C,           KC_SPACE,                                       LALT(KC_TAB),   KC_Q
  ),
  [16] = LAYOUT_voyager(
    KC_ESCAPE,      KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,                                           KC_P,           KC_NO,          KC_NO,          LALT(KC_F3),    LALT(LCTL(KC_S)),LALT(KC_F4),    
    KC_TAB,         KC_G,           KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_C,           KC_B,           KC_M,           KC_J,           KC_L,           KC_H,           
    KC_NO,          KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_Z,           KC_X,           TD(DANCE_27),   KC_V,                                           KC_F2,          KC_U,           KC_F3,          KC_F4,          KC_F1,          KC_O,           
                                                    KC_SPACE,       KC_NO,                                          LALT(KC_TAB),   KC_ENTER
  ),
  [17] = LAYOUT_voyager(
    KC_ESCAPE,      KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,                                           KC_NO,          KC_NO,          KC_NO,          LALT(KC_F3),    LALT(LCTL(KC_S)),LALT(KC_F4),    
    KC_TAB,         KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_ALT,    TD(DANCE_28),   TD(DANCE_29),   TD(DANCE_30),   TD(DANCE_31),                                   KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_SPACE,       KC_NO,                                          LALT(KC_TAB),   KC_NO
  ),
  [18] = LAYOUT_voyager(
    KC_ESCAPE,      KC_NO,          KC_1,           KC_NO,          KC_2,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          LALT(KC_F3),    LALT(LCTL(KC_S)),LALT(KC_F4),    
    KC_TAB,         KC_TILD,        KC_Q,           KC_W,           KC_E,           TD(DANCE_32),                                   KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_R,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_NO,          KC_NO,          KC_P,           KC_C,                                           KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          
                                                    KC_SPACE,       KC_NO,                                          LALT(KC_TAB),   KC_NO
  ),
  [19] = LAYOUT_voyager(
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          
                                                    LT(20,KC_ENTER),MO(21),                                         LALT(KC_TAB),   KC_NO
  ),
  [20] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_6,           KC_7,           KC_8,           KC_9,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_NO
  ),
  [21] = LAYOUT_voyager(
    KC_ESCAPE,      LALT(KC_GRAVE), LCTL(KC_B),     LALT(KC_V),     KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_INSERT,      TD(DANCE_33),   LALT(KC_Q),     LALT(KC_W),     LALT(KC_E),     LALT(KC_U),                                     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_F11,         LALT(KC_C),     KC_NO,          LALT(KC_A),     KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    LALT(KC_G),     LALT(KC_Z),     LALT(KC_H),     LALT(KC_J),     LALT(KC_R),     LCTL(KC_R),                                     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [22] = LAYOUT_voyager(
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_A,           KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_UP,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_NO,                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,          
    KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_NO,                                          LALT(KC_TAB),   KC_NO
  ),
  [23] = LAYOUT_voyager(
    KC_ESCAPE,      KC_4,           KC_1,           KC_2,           KC_3,           KC_N,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          LALT(LCTL(KC_S)),KC_NO,          
    KC_I,           KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    MT(MOD_LCTL, KC_LEFT_CTRL),MT(MOD_LSFT, KC_LEFT_SHIFT),KC_A,           KC_S,           KC_D,           KC_F,                                           KC_5,           KC_6,           KC_7,           KC_8,           KC_NO,          KC_NO,          
    KC_L,           MT(MOD_LALT, KC_LEFT_ALT),KC_X,           KC_V,           KC_C,           KC_B,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_SPACE,       KC_O,                                           LALT(KC_TAB),   KC_NO
  ),
  [24] = LAYOUT_voyager(
    KC_ESCAPE,      TD(DANCE_34),   TD(DANCE_35),   TD(DANCE_36),   TD(DANCE_37),   TD(DANCE_38),                                   KC_DELETE,      KC_INSERT,      KC_HOME,        KC_NO,          KC_NO,          KC_NO,          
    KC_SLASH,       KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_L,           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_CTRL,   KC_NO,          KC_Z,           KC_G,           KC_V,           KC_H,                                           KC_F5,          KC_F11,         KC_F2,          LALT(KC_T),     KC_NO,          KC_NO,          
                                                    KC_SPACE,       KC_F,                                           LALT(KC_TAB),   KC_NO
  ),
};

const uint16_t PROGMEM combo0[] = { LT(7,KC_ENTER), MT(MOD_LSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo1[] = { LT(7,KC_ENTER), LT(2,KC_SPACE), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(11)),
    COMBO(combo1, TO(11)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_0):
            return g_tapping_term + 30;
        case MT(MOD_LGUI, KC_ESCAPE):
            return g_tapping_term + 50;
        case KC_A:
            return g_tapping_term + 50;
        case KC_R:
            return g_tapping_term + 25;
        case KC_S:
            return g_tapping_term + 25;
        case MT(MOD_LALT, KC_Z):
            return g_tapping_term + 50;
        case KC_X:
            return g_tapping_term + 50;
        case KC_C:
            return g_tapping_term + 50;
        case KC_D:
            return g_tapping_term + 150;
        case TD(DANCE_1):
            return g_tapping_term + 25;
        case KC_E:
            return g_tapping_term + 25;
        case KC_I:
            return g_tapping_term + 25;
        case KC_O:
            return g_tapping_term + 50;
        case MT(MOD_RGUI, KC_QUOTE):
            return g_tapping_term + 50;
        case KC_H:
            return g_tapping_term + 150;
        case KC_COMMA:
            return g_tapping_term + 50;
        case KC_DOT:
            return g_tapping_term + 50;
        case MT(MOD_RALT, KC_SLASH):
            return g_tapping_term + 50;
        case MT(MOD_LALT, KC_6):
            return g_tapping_term + 50;
        case KC_N:
            return g_tapping_term + 50;
        case TD(DANCE_2):
            return g_tapping_term + 50;
        case KC_F:
            return g_tapping_term + 25;
        case KC_J:
            return g_tapping_term + 25;
        case TD(DANCE_10):
            return g_tapping_term + 50;
        case TD(DANCE_11):
            return g_tapping_term + 50;
        case KC_KP_4:
            return g_tapping_term -50;
        case KC_KP_5:
            return g_tapping_term -50;
        case TD(DANCE_17):
            return g_tapping_term + 100;
        case TD(DANCE_28):
            return g_tapping_term -50;
        case TD(DANCE_29):
            return g_tapping_term -50;
        case TD(DANCE_30):
            return g_tapping_term -50;
        case KC_T:
            return g_tapping_term -50;
        case KC_F4:
            return g_tapping_term -50;
        case KC_F5:
            return g_tapping_term -50;
        case KC_4:
            return g_tapping_term -50;
        case KC_5:
            return g_tapping_term -50;
        case LT(20,KC_ENTER):
            return g_tapping_term -15;
        case KC_Y:
            return g_tapping_term -50;
        case KC_F6:
            return g_tapping_term -50;
        case KC_6:
            return g_tapping_term -50;
        case KC_1:
            return g_tapping_term -50;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {41,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {41,255,255}, {41,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {41,255,255}, {41,255,255}, {0,245,245}, {74,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {41,255,255}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {41,255,255}, {41,255,255}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {14,231,237}, {41,255,255}, {41,255,255}, {0,218,204}, {74,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {41,255,255}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {41,255,255}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {41,255,255}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {0,0,0}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {41,255,255}, {74,243,159}, {74,255,255}, {74,243,159}, {74,243,159}, {74,243,159}, {41,255,255}, {41,255,255}, {74,243,159}, {74,243,159}, {188,255,255}, {74,243,159}, {0,0,0}, {0,0,0}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {41,255,255}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {41,255,255}, {41,255,255}, {0,245,245}, {0,0,0} },

    [4] = { {0,0,0}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {0,0,0}, {188,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {41,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {41,255,255}, {41,255,255}, {182,255,255}, {182,255,255}, {0,0,255}, {182,255,255}, {0,0,0}, {0,0,0}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {41,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {182,255,255}, {41,255,255}, {41,255,255}, {0,245,245}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {182,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {182,255,255}, {188,255,255}, {131,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {0,245,245}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {219,255,255}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {41,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,245,245}, {131,255,255}, {0,0,0}, {0,0,0}, {219,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {0,0,0}, {182,187,251}, {182,187,251}, {182,187,251}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {182,187,251}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {182,187,251}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {182,187,251}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {74,243,159}, {74,243,159}, {74,243,159}, {74,243,159}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,207,204}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,207,204}, {0,207,204}, {0,207,204}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,227,213}, {139,227,213}, {0,0,0}, {139,227,213}, {0,0,0}, {0,0,0}, {139,227,213}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0} },

    [10] = { {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {14,231,237}, {14,231,237}, {14,231,237}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {14,231,237}, {182,255,255}, {74,243,159}, {0,245,245}, {139,227,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {74,243,159}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {141,19,128}, {219,151,242}, {28,239,201}, {168,241,221}, {0,218,204}, {0,245,245}, {139,227,213}, {14,231,237}, {0,0,0}, {28,239,201}, {41,255,255}, {182,187,251}, {131,255,255} },

    [12] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {152,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {152,255,255}, {41,255,255}, {182,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {41,255,255}, {182,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [13] = { {141,19,128}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {74,243,159}, {0,245,245}, {0,207,204}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {131,255,255}, {0,218,204}, {131,255,255} },

    [14] = { {219,151,242}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,243,159}, {0,245,245}, {0,207,204}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,218,204}, {131,255,255} },

    [15] = { {28,239,201}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {74,243,159}, {0,245,245}, {0,207,204}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,218,204}, {0,0,0} },

    [16] = { {168,241,221}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {74,243,159}, {0,245,245}, {0,207,204}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {188,255,255}, {0,218,204}, {131,255,255} },

    [17] = { {139,227,213}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,243,159}, {0,245,245}, {0,207,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0} },

    [18] = { {14,231,237}, {0,0,0}, {0,218,204}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {74,255,255}, {131,255,255}, {0,218,204}, {0,0,0}, {152,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,243,159}, {0,245,245}, {0,207,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0} },

    [19] = { {28,239,201}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {139,227,213}, {139,227,213}, {139,227,213}, {139,227,213}, {139,227,213}, {0,0,0}, {219,151,242}, {219,151,242}, {219,151,242}, {219,151,242}, {219,151,242}, {74,255,255}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {28,239,201}, {0,0,0}, {0,218,204}, {0,0,0} },

    [20] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {139,227,213}, {139,227,213}, {139,227,213}, {139,227,213}, {0,0,0}, {0,0,0}, {219,151,242}, {219,151,242}, {219,151,242}, {219,151,242}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [21] = { {28,239,201}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {139,227,213}, {0,0,0}, {74,255,255}, {41,255,255}, {74,255,255}, {168,241,221}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [22] = { {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {182,187,251}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,231,237}, {182,187,251}, {182,187,251}, {182,187,251}, {0,0,0}, {14,231,237}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,218,204}, {0,0,0} },

    [23] = { {0,245,245}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {74,255,255}, {131,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {219,151,242}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {182,187,251}, {182,187,251}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0} },

    [24] = { {219,151,242}, {219,151,242}, {219,151,242}, {219,151,242}, {219,151,242}, {219,151,242}, {219,151,242}, {219,151,242}, {219,151,242}, {74,243,159}, {219,151,242}, {0,218,204}, {0,0,0}, {219,151,242}, {74,243,159}, {74,243,159}, {74,243,159}, {0,0,0}, {219,151,242}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {219,151,242}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
    case 12:
      set_layer_color(12);
      break;
    case 13:
      set_layer_color(13);
      break;
    case 14:
      set_layer_color(14);
      break;
    case 15:
      set_layer_color(15);
      break;
    case 16:
      set_layer_color(16);
      break;
    case 17:
      set_layer_color(17);
      break;
    case 18:
      set_layer_color(18);
      break;
    case 19:
      set_layer_color(19);
      break;
    case 20:
      set_layer_color(20);
      break;
    case 21:
      set_layer_color(21);
      break;
    case 22:
      set_layer_color(22);
      break;
    case 23:
      set_layer_color(23);
      break;
    case 24:
      set_layer_color(24);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Z) SS_DELAY(100) SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_8) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_LBRC));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_J));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_8) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_COMMA) SS_DELAY(100) SS_TAP(X_J));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_V));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_RBRC) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_SCLN));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(100) SS_LSFT(SS_TAP(X_H)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_SHIFT) SS_DELAY(100) SS_TAP(X_LEFT_SHIFT));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[39];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    }
    if(state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_TAB); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TAB); register_code16(KC_TAB);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TAB); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_HOLD: layer_on(10); break;
        case DOUBLE_HOLD: layer_on(9); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_HOLD:
          if(!is_layer_locked(10)) {
            layer_off(10);
          }
        break;
              case DOUBLE_HOLD: 
                if(!is_layer_locked(9)) {
                  layer_off(9);
                }
                break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_6));
        tap_code16(LSFT(KC_6));
        tap_code16(LSFT(KC_6));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_6));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_6)); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_6)); register_code16(LSFT(KC_6)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_6)); register_code16(LSFT(KC_6));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_6)); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_6)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_6)); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_BSPC));
        tap_code16(LGUI(KC_BSPC));
        tap_code16(LGUI(KC_BSPC));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_BSPC));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_BSPC)); break;
        case SINGLE_HOLD: layer_on(6); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_BSPC)); register_code16(LGUI(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_BSPC)); register_code16(LGUI(KC_BSPC));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_BSPC)); break;
        case SINGLE_HOLD:
          if(!is_layer_locked(6)) {
            layer_off(6);
          }
        break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_BSPC)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case SINGLE_HOLD: register_code16(KC_TILD); break;
        case DOUBLE_TAP: register_code16(KC_GRAVE); register_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case SINGLE_HOLD: unregister_code16(KC_TILD); break;
        case DOUBLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
    }
    if(state->count > 3) {
        tap_code16(KC_SLASH);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_SLASH); break;
        case SINGLE_HOLD: register_code16(KC_QUES); break;
        case DOUBLE_TAP: register_code16(KC_SLASH); register_code16(KC_SLASH); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SLASH); register_code16(KC_SLASH);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_SLASH); break;
        case SINGLE_HOLD: unregister_code16(KC_QUES); break;
        case DOUBLE_TAP: unregister_code16(KC_SLASH); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SLASH); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_DOT); break;
        case SINGLE_HOLD: register_code16(KC_COMMA); break;
        case DOUBLE_TAP: register_code16(KC_DOT); register_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_DOT); break;
        case SINGLE_HOLD: unregister_code16(KC_COMMA); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
    }
    if(state->count > 3) {
        tap_code16(KC_SCLN);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_SCLN); break;
        case SINGLE_HOLD: register_code16(KC_COLN); break;
        case DOUBLE_TAP: register_code16(KC_SCLN); register_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SCLN); register_code16(KC_SCLN);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_SCLN); break;
        case SINGLE_HOLD: unregister_code16(KC_COLN); break;
        case DOUBLE_TAP: unregister_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SCLN); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DQUO);
        tap_code16(KC_DQUO);
        tap_code16(KC_DQUO);
    }
    if(state->count > 3) {
        tap_code16(KC_DQUO);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_DQUO); break;
        case SINGLE_HOLD: register_code16(KC_QUOTE); break;
        case DOUBLE_TAP: register_code16(KC_DQUO); register_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DQUO); register_code16(KC_DQUO);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_DQUO); break;
        case SINGLE_HOLD: unregister_code16(KC_QUOTE); break;
        case DOUBLE_TAP: unregister_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DQUO); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PIPE);
        tap_code16(KC_PIPE);
        tap_code16(KC_PIPE);
    }
    if(state->count > 3) {
        tap_code16(KC_PIPE);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_PIPE); break;
        case SINGLE_HOLD: register_code16(KC_BSLS); break;
        case DOUBLE_TAP: register_code16(KC_PIPE); register_code16(KC_PIPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PIPE); register_code16(KC_PIPE);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_PIPE); break;
        case SINGLE_HOLD: unregister_code16(KC_BSLS); break;
        case DOUBLE_TAP: unregister_code16(KC_PIPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PIPE); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_LEFT));
        tap_code16(LCTL(KC_LEFT));
        tap_code16(LCTL(KC_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_LEFT));
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_LEFT)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_LEFT)); register_code16(LCTL(KC_LEFT)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_LEFT))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_LEFT)); register_code16(LCTL(KC_LEFT));
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_LEFT)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_LEFT))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_LEFT)); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_RIGHT));
        tap_code16(LCTL(KC_RIGHT));
        tap_code16(LCTL(KC_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_RIGHT));
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_RIGHT)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_RIGHT)); register_code16(LCTL(KC_RIGHT)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_RIGHT))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_RIGHT)); register_code16(LCTL(KC_RIGHT));
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_RIGHT)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_RIGHT))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_RIGHT)); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PAGE_UP);
        tap_code16(KC_PAGE_UP);
        tap_code16(KC_PAGE_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_PAGE_UP);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_PAGE_UP); break;
        case SINGLE_HOLD: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(KC_PAGE_UP); register_code16(KC_PAGE_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PAGE_UP); register_code16(KC_PAGE_UP);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_PAGE_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(KC_PAGE_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PAGE_UP); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case SINGLE_HOLD: register_code16(LALT(KC_LEFT)); break;
        case DOUBLE_TAP: register_code16(KC_LEFT); register_code16(KC_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case SINGLE_HOLD: register_code16(LALT(KC_RIGHT)); break;
        case DOUBLE_TAP: register_code16(KC_RIGHT); register_code16(KC_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PGDN);
        tap_code16(KC_PGDN);
        tap_code16(KC_PGDN);
    }
    if(state->count > 3) {
        tap_code16(KC_PGDN);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_PGDN); break;
        case SINGLE_HOLD: register_code16(KC_END); break;
        case DOUBLE_TAP: register_code16(KC_PGDN); register_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PGDN); register_code16(KC_PGDN);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_PGDN); break;
        case SINGLE_HOLD: unregister_code16(KC_END); break;
        case DOUBLE_TAP: unregister_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PGDN); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: register_code16(LALT(KC_BSPC)); break;
        case DOUBLE_TAP: register_code16(KC_BSPC); register_code16(KC_BSPC); break;
        case DOUBLE_HOLD: register_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_BSPC)); break;
        case DOUBLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_J));
        tap_code16(LCTL(KC_J));
        tap_code16(LCTL(KC_J));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_J));
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_J)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_I)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_J)); register_code16(LCTL(KC_J));
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_J)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_I)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_J)); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_4)));
        tap_code16(LCTL(LSFT(KC_4)));
        tap_code16(LCTL(LSFT(KC_4)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_4)));
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_4))); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_5))); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_4))); register_code16(LCTL(LSFT(KC_4))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_4))); register_code16(LCTL(LSFT(KC_4)));
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_4))); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_5))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_4))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_4))); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_L));
        tap_code16(LCTL(KC_L));
        tap_code16(LCTL(KC_L));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_L));
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_L)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_E)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_L)); register_code16(LCTL(KC_L));
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_L)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_E)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_L)); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_R));
        tap_code16(LCTL(KC_R));
        tap_code16(LCTL(KC_R));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_R));
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_R)); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_R))); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_R)); register_code16(LCTL(KC_R)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_R)); register_code16(LCTL(KC_R));
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_R)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_R))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_R)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_R)); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_F));
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_F)); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_F))); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_F)); register_code16(LCTL(KC_F)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_F)); register_code16(LCTL(KC_F));
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_F))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_F)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(tap_dance_state_t *state, void *user_data);
void dance_22_finished(tap_dance_state_t *state, void *user_data);
void dance_22_reset(tap_dance_state_t *state, void *user_data);

void on_dance_22(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_S)));
        tap_code16(LGUI(LSFT(KC_S)));
        tap_code16(LGUI(LSFT(KC_S)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_S)));
    }
}

void dance_22_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_S))); break;
        case SINGLE_HOLD: register_code16(KC_PSCR); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_S))); register_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_S))); register_code16(LGUI(LSFT(KC_S)));
    }
}

void dance_22_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_S))); break;
        case SINGLE_HOLD: unregister_code16(KC_PSCR); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_S))); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(tap_dance_state_t *state, void *user_data);
void dance_23_finished(tap_dance_state_t *state, void *user_data);
void dance_23_reset(tap_dance_state_t *state, void *user_data);

void on_dance_23(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_F));
    }
}

void dance_23_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_F)); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_F))); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_F)); register_code16(LCTL(KC_F)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_F)); register_code16(LCTL(KC_F));
    }
}

void dance_23_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_F))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_F)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
    }
    dance_state[23].step = 0;
}
void dance_24_finished(tap_dance_state_t *state, void *user_data);
void dance_24_reset(tap_dance_state_t *state, void *user_data);

void dance_24_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: layer_move(3); break;
        case SINGLE_HOLD: register_code16(KC_CAPS); break;
        case DOUBLE_TAP: layer_move(3); break;
        case DOUBLE_SINGLE_TAP: layer_move(3); break;
    }
}

void dance_24_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_HOLD: unregister_code16(KC_CAPS); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(tap_dance_state_t *state, void *user_data);
void dance_25_finished(tap_dance_state_t *state, void *user_data);
void dance_25_reset(tap_dance_state_t *state, void *user_data);

void on_dance_25(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_25_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case SINGLE_HOLD: register_code16(KC_MEDIA_STOP); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_25_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case SINGLE_HOLD: unregister_code16(KC_MEDIA_STOP); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(tap_dance_state_t *state, void *user_data);
void dance_26_finished(tap_dance_state_t *state, void *user_data);
void dance_26_reset(tap_dance_state_t *state, void *user_data);

void on_dance_26(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_P);
        tap_code16(KC_P);
        tap_code16(KC_P);
    }
    if(state->count > 3) {
        tap_code16(KC_P);
    }
}

void dance_26_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: register_code16(KC_P); break;
        case SINGLE_HOLD: register_code16(KC_ENTER); break;
        case DOUBLE_TAP: register_code16(KC_P); register_code16(KC_P); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_P); register_code16(KC_P);
    }
}

void dance_26_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case SINGLE_TAP: unregister_code16(KC_P); break;
        case SINGLE_HOLD: unregister_code16(KC_ENTER); break;
        case DOUBLE_TAP: unregister_code16(KC_P); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_P); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(tap_dance_state_t *state, void *user_data);
void dance_27_finished(tap_dance_state_t *state, void *user_data);
void dance_27_reset(tap_dance_state_t *state, void *user_data);

void on_dance_27(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_T);
        tap_code16(KC_T);
        tap_code16(KC_T);
    }
    if(state->count > 3) {
        tap_code16(KC_T);
    }
}

void dance_27_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(KC_T); break;
        case SINGLE_HOLD: register_code16(KC_TAB); break;
        case DOUBLE_TAP: register_code16(KC_T); register_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_T); register_code16(KC_T);
    }
}

void dance_27_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(KC_T); break;
        case SINGLE_HOLD: unregister_code16(KC_TAB); break;
        case DOUBLE_TAP: unregister_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_T); break;
    }
    dance_state[27].step = 0;
}
void on_dance_28(tap_dance_state_t *state, void *user_data);
void dance_28_finished(tap_dance_state_t *state, void *user_data);
void dance_28_reset(tap_dance_state_t *state, void *user_data);

void on_dance_28(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Z);
        tap_code16(KC_Z);
        tap_code16(KC_Z);
    }
    if(state->count > 3) {
        tap_code16(KC_Z);
    }
}

void dance_28_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[28].step = dance_step(state);
    switch (dance_state[28].step) {
        case SINGLE_TAP: register_code16(KC_Z); break;
        case SINGLE_HOLD: register_code16(LALT(KC_1)); break;
        case DOUBLE_TAP: register_code16(KC_Z); register_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Z); register_code16(KC_Z);
    }
}

void dance_28_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[28].step) {
        case SINGLE_TAP: unregister_code16(KC_Z); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_1)); break;
        case DOUBLE_TAP: unregister_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Z); break;
    }
    dance_state[28].step = 0;
}
void on_dance_29(tap_dance_state_t *state, void *user_data);
void dance_29_finished(tap_dance_state_t *state, void *user_data);
void dance_29_reset(tap_dance_state_t *state, void *user_data);

void on_dance_29(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_X);
        tap_code16(KC_X);
        tap_code16(KC_X);
    }
    if(state->count > 3) {
        tap_code16(KC_X);
    }
}

void dance_29_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[29].step = dance_step(state);
    switch (dance_state[29].step) {
        case SINGLE_TAP: register_code16(KC_X); break;
        case SINGLE_HOLD: register_code16(LALT(KC_2)); break;
        case DOUBLE_TAP: register_code16(KC_X); register_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_X); register_code16(KC_X);
    }
}

void dance_29_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[29].step) {
        case SINGLE_TAP: unregister_code16(KC_X); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_2)); break;
        case DOUBLE_TAP: unregister_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_X); break;
    }
    dance_state[29].step = 0;
}
void on_dance_30(tap_dance_state_t *state, void *user_data);
void dance_30_finished(tap_dance_state_t *state, void *user_data);
void dance_30_reset(tap_dance_state_t *state, void *user_data);

void on_dance_30(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_30_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[30].step = dance_step(state);
    switch (dance_state[30].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case SINGLE_HOLD: register_code16(LALT(KC_3)); break;
        case DOUBLE_TAP: register_code16(KC_C); register_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_30_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[30].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_3)); break;
        case DOUBLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[30].step = 0;
}
void on_dance_31(tap_dance_state_t *state, void *user_data);
void dance_31_finished(tap_dance_state_t *state, void *user_data);
void dance_31_reset(tap_dance_state_t *state, void *user_data);

void on_dance_31(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_31_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[31].step = dance_step(state);
    switch (dance_state[31].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case SINGLE_HOLD: register_code16(KC_T); break;
        case DOUBLE_TAP: register_code16(KC_G); register_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_31_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[31].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case SINGLE_HOLD: unregister_code16(KC_T); break;
        case DOUBLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[31].step = 0;
}
void on_dance_32(tap_dance_state_t *state, void *user_data);
void dance_32_finished(tap_dance_state_t *state, void *user_data);
void dance_32_reset(tap_dance_state_t *state, void *user_data);

void on_dance_32(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if(state->count > 3) {
        tap_code16(KC_F);
    }
}

void dance_32_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[32].step = dance_step(state);
    switch (dance_state[32].step) {
        case SINGLE_TAP: register_code16(KC_F); break;
        case SINGLE_HOLD: register_code16(KC_T); break;
        case DOUBLE_TAP: register_code16(KC_F); register_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F); register_code16(KC_F);
    }
}

void dance_32_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[32].step) {
        case SINGLE_TAP: unregister_code16(KC_F); break;
        case SINGLE_HOLD: unregister_code16(KC_T); break;
        case DOUBLE_TAP: unregister_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F); break;
    }
    dance_state[32].step = 0;
}
void on_dance_33(tap_dance_state_t *state, void *user_data);
void dance_33_finished(tap_dance_state_t *state, void *user_data);
void dance_33_reset(tap_dance_state_t *state, void *user_data);

void on_dance_33(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_GRAVE));
        tap_code16(LCTL(KC_GRAVE));
        tap_code16(LCTL(KC_GRAVE));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_GRAVE));
    }
}

void dance_33_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[33].step = dance_step(state);
    switch (dance_state[33].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_GRAVE)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_TAB)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_GRAVE)); register_code16(LCTL(KC_GRAVE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_GRAVE)); register_code16(LCTL(KC_GRAVE));
    }
}

void dance_33_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[33].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_GRAVE)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_TAB)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_GRAVE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_GRAVE)); break;
    }
    dance_state[33].step = 0;
}
void on_dance_34(tap_dance_state_t *state, void *user_data);
void dance_34_finished(tap_dance_state_t *state, void *user_data);
void dance_34_reset(tap_dance_state_t *state, void *user_data);

void on_dance_34(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_34_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[34].step = dance_step(state);
    switch (dance_state[34].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case DOUBLE_TAP: register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_34_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[34].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[34].step = 0;
}
void on_dance_35(tap_dance_state_t *state, void *user_data);
void dance_35_finished(tap_dance_state_t *state, void *user_data);
void dance_35_reset(tap_dance_state_t *state, void *user_data);

void on_dance_35(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_35_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[35].step = dance_step(state);
    switch (dance_state[35].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case DOUBLE_TAP: register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_35_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[35].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[35].step = 0;
}
void on_dance_36(tap_dance_state_t *state, void *user_data);
void dance_36_finished(tap_dance_state_t *state, void *user_data);
void dance_36_reset(tap_dance_state_t *state, void *user_data);

void on_dance_36(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_36_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[36].step = dance_step(state);
    switch (dance_state[36].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case DOUBLE_TAP: register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_36_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[36].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[36].step = 0;
}
void on_dance_37(tap_dance_state_t *state, void *user_data);
void dance_37_finished(tap_dance_state_t *state, void *user_data);
void dance_37_reset(tap_dance_state_t *state, void *user_data);

void on_dance_37(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_37_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[37].step = dance_step(state);
    switch (dance_state[37].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case DOUBLE_TAP: register_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_37_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[37].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[37].step = 0;
}
void on_dance_38(tap_dance_state_t *state, void *user_data);
void dance_38_finished(tap_dance_state_t *state, void *user_data);
void dance_38_reset(tap_dance_state_t *state, void *user_data);

void on_dance_38(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_38_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[38].step = dance_step(state);
    switch (dance_state[38].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case DOUBLE_TAP: register_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_38_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[38].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[38].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_27, dance_27_finished, dance_27_reset),
        [DANCE_28] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_28, dance_28_finished, dance_28_reset),
        [DANCE_29] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_29, dance_29_finished, dance_29_reset),
        [DANCE_30] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_30, dance_30_finished, dance_30_reset),
        [DANCE_31] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_31, dance_31_finished, dance_31_reset),
        [DANCE_32] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_32, dance_32_finished, dance_32_reset),
        [DANCE_33] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_33, dance_33_finished, dance_33_reset),
        [DANCE_34] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_34, dance_34_finished, dance_34_reset),
        [DANCE_35] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_35, dance_35_finished, dance_35_reset),
        [DANCE_36] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_36, dance_36_finished, dance_36_reset),
        [DANCE_37] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_37, dance_37_finished, dance_37_reset),
        [DANCE_38] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_38, dance_38_finished, dance_38_reset),
};
