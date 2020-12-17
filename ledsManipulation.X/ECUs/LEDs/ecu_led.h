/* 
 * File:   ecu_led.h
 * Author: Ahmed Sedeek Ali
 *
 * Created on December 13, 2020, 1:35 PM
 */

#ifndef ECU_LED_H
#define	ECU_LED_H

#include "../../mcc_generated_files/mcc.h"

extern unsigned char meet_seq[];
typedef enum{
    LEFT_TO_RIGHT,
    RIGHT_TO_LEFT
}led_seq_dir;

void turn_all_leds_on(void);                                                   // Function turn_all_leds_on prototype .
void turn_all_leds_off(void);                                                  // Function turn_all_leds_off prototype .
void right_to_left_led_seq(void);                                              // Function right_to_left_led_seq prototype .
void left_to_right_led_seq(void);                                              // Function left_to_right_led_seq prototype .
void control_led_seq(led_seq_dir seq_dir);                                     // Function control_led_seq prototype .

#endif	/* ECU_LED_H */

