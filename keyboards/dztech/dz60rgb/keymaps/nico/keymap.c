#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_LAYER0] = LAYOUT( /* Base */
			KC_GESC,            KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,    KC_9,    KC_0,            KC_MINS,  KC_EQL,  KC_BSPC,\
		    KC_TAB,             KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,    KC_O,    KC_P,            KC_LBRC,  KC_RBRC, KC_BSLASH,\
			LALT_T(KC_CAPS),     KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,    KC_L,    KC_SCLN,         KC_QUOT,           KC_ENT, \
		    KC_LSFT,            KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), KC_UP,            LT(_LAYER2, KC_DEL),\
		    KC_LCTL,            KC_LGUI,  KC_LALT,        KC_SPC,               KC_RALT, MO(_LAYER1),  KC_LEFT,         KC_DOWN,           KC_RIGHT),
		[_LAYER1] = LAYOUT( /* FN */
		    KC_GRAVE,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL ,\
		    RGB_TOG,  TO(2), TO(3),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_CALC,  KC_TRNS,  KC_PSCR,  KC_SLCK,  KC_PAUS, KC_VOLD,   KC_VOLU,    KC_MUTE  ,\
		    RGB_TOG,  RGB_HUI,  RGB_SAI,  RGB_SPI, RGB_VAI, RGB_RMOD,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGUP, KC_MPRV, KC_MNXT, KC_MEDIA_PLAY_PAUSE   ,\
		    RGB_M_P, RGB_HUD,  RGB_SAD,  RGB_SPD,  RGB_VAD,  RGB_MOD,  KC_TRNS,  KC_TRNS,  KC_END, KC_PGDOWN , KC_TRNS  ,KC_TRNS,            RESET,\
		  	KC_TRNS,  KC_TRNS,  KC_TRNS,                      TO(2),                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS),
		[_LAYER2] = LAYOUT( /* LIGHT */
        KC_GRAVE,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL ,\
        RGB_TOG,  TO(2), TO(3),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_CALC,  KC_TRNS,  KC_PSCR,  KC_SLCK,  KC_PAUS, KC_VOLD,   KC_VOLU,    KC_MUTE  ,\
        RGB_TOG,  RGB_HUI,  RGB_SAI,  RGB_SPI, RGB_VAI, RGB_RMOD,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGUP, KC_MPRV, KC_MNXT, KC_MEDIA_PLAY_PAUSE   ,\
        RGB_M_P, RGB_HUD,  RGB_SAD,  RGB_SPD,  RGB_VAD,  RGB_MOD,  KC_TRNS,  KC_TRNS,  KC_END, KC_PGDOWN , KC_TRNS  ,KC_TRNS,            RESET,\
        KC_TRNS,  KC_TRNS,  KC_TRNS,                      TO(2),                        KC_TRNS,  TO(0),  KC_TRNS,  KC_TRNS,            KC_TRNS),
		[_LAYER3] = LAYOUT( /* NUMPAD */
			KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,  KC_PPLS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PSLS,  KC_PAST,  KC_PMNS,  KC_PPLS,  KC_TRNS,\
			KC_TRNS,  KC_P7,    KC_P8,    KC_P9,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_P7,    KC_P8,    KC_P9,    KC_TRNS,  KC_TRNS,  TO(0),\
			KC_TRNS,  KC_P4,    KC_P5,    KC_P6,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_P4,    KC_P5,    KC_P6,    KC_TRNS,            KC_PENT,\
			KC_TRNS,  KC_P1,    KC_P2,    KC_P3,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_P1,    KC_P2,    KC_P3,    KC_TRNS,            KC_TRNS,\
			KC_TRNS,  KC_P0,    KC_PDOT,                      KC_PENT,                      KC_P0,    TO(0),  KC_TRNS,  KC_TRNS,            KC_TRNS),
		[_LAYER4] = LAYOUT( /* SWITCH LALT AND LGUI */
			KC_GESC,        KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,    KC_9,     KC_0,            KC_MINS,  KC_EQL,  KC_BSPC,\
		    KC_TAB,         KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,    KC_O,     KC_P,            KC_LBRC,  KC_RBRC, KC_BSLASH,\
			CTL_T(KC_CAPS), KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,    KC_L,     KC_SCLN,         KC_QUOT,           KC_ENT, \
		    KC_LSFT,        KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,    KC_M,  KC_COMM, KC_DOT,   RSFT_T(KC_SLSH), KC_UP,             LT(2, KC_DEL),\
			KC_LCTL,        KC_LALT,  KC_LGUI,                KC_SPC,                KC_RALT, TO(0),    KC_LEFT,         KC_DOWN,           KC_RIGHT),
		};

void rgb_matrix_indicators_user(void) {
	  uint8_t this_led = host_keyboard_leds();
	  if (!g_suspend_state) {
	    switch (biton32(layer_state)) {
        case _LAYER3:
          if ( this_led & (1<<USB_LED_NUM_LOCK)) {
            rgb_matrix_set_color(13, 0xFF, 0x00, 0x00);
          } else {
            rgb_matrix_set_color(13, 0x00, 0x00, 0x00);
          }
          
          rgb_matrix_set_color(0, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(1, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(1, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(2, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(3, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(4, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(5, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(6, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(7, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(8, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(9, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(10, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(11, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(12, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(14, 0x00, 0x00, 0xFF);
          rgb_matrix_set_color(15, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(16, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(17, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(18, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(19, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(20, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(21, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(22, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(23, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(24, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(25, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(26, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(27, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(28, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(29, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(30, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(31, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(32, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(33, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(34, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(35, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(36, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(37, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(38, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(39, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(40, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(41, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(42, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(43, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(44, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(45, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(46, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(47, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(48, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(49, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(50, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(51, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(52, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(53, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(54, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(55, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(56, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(57, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(58, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(59, 0xFF, 0x00, 0x00);
          rgb_matrix_set_color(60, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(61, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(62, 0x00, 0x00, 0x00);
          break;
	      case _LAYER4:
	        rgb_matrix_set_color_all(0xFF, 0xFF, 0x00);
          break;
        case _LAYER2:
          rgb_matrix_set_color_all(0x00, 0x00, 0x00);

          int i;
          for (i=1; i<=12; i++)
          {
              rgb_matrix_set_color(i, 0xFF, 0xFF, 0x00);
          }
          rgb_matrix_set_color(13, 0xFF, 0xFF, 0xFF);
          for (i=14; i<=16; i++)
          {
              rgb_matrix_set_color(i, 0xFF, 0x00, 0xFF);
          }
          for (i=17; i<=19; i++)
          {
              rgb_matrix_set_color(i, 0x00, 0x00, 0xFF);
          }


          rgb_matrix_set_color(25, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(26, 0x00, 0xFF, 0x00);


          rgb_matrix_set_color(27, 0x00, 0xFF, 0xFF);

           for (i=28; i<=30; i++)
          {
              rgb_matrix_set_color(i, 0x33, 0x99, 0x99);
          }
          rgb_matrix_set_color(31, 0x00, 0x00, 0xFF);
          rgb_matrix_set_color(32, 0x00, 0x00, 0xFF);

          for (i=35; i<=40; i++)
          {
              rgb_matrix_set_color(i, 0x00, 0xFF, 0xFF);
          } 

          rgb_matrix_set_color(41, 0xFF, 0x00, 0x00);

        for (i=44; i<=45; i++)
        {
            rgb_matrix_set_color(i, 0x00, 0x00, 0xFF);
        }

        for (i=47; i<=53; i++)
        {
            rgb_matrix_set_color(i, 0x00, 0xFF, 0xFF);
        }
      }
    }
    if ( this_led & (1<<USB_LED_CAPS_LOCK)) {
      rgb_matrix_set_color(40, 0xFF, 0xFF, 0xFF);
    }
}

void matrix_init_user(void) {
  //user initialization
}

void matrix_scan_user(void) {
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	  return true;
	}
