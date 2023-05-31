/* Derivate of elmo's firmware >>kb-elmo<mail@elmo.space>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// defining layer_names 
#define _BL 0
#define _FL 1
#define _FFL 2
#define ____ KC_NO

// --- /
// -- / definition of  encoder map
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [2] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),          ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) }
};
#endif
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


   [_BL] = LAYOUT(
            
        ____,    	____,    	____,    	____,    	____,  		____,    	____,    	____,    	____,    	____,    	____,   ____,  
        ____,    	____,    	____,    	____,    	____,  		____,    	____,    	____,    	____,    	____,       ____,   ____,   
        ____,    	____,    	____,    	____,    	____,  		____,    	____,    	____,    	____,    	____,    	____,   ____,
        ____,    	____,    	____,    	____,    	            ____,       ____,    	        	____,    	____,       ____,   ____

    ),
};

