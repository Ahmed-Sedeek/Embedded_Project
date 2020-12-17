#include "ecu_led.h"




/**
 * @brief Turning all leds on .
 */
void turn_all_leds_on(void) 
{
    LATC = 0xFF ;
}

/**
 * @brief Turning all leds off .
 */
void turn_all_leds_off(void) 
{
    LATC = 0x00 ;
}

 /**
  * @brief led sequence moving right to left .
  */
void right_to_left_led_seq(void) 
{
    unsigned short counter ;
    for( counter = 1 ; counter <= 128 ; counter*=2)
    {
        LATC = counter ;
        __delay_ms(250);
    }
    
}

/**
 * @brief led sequence moving left to right .
 */
void left_to_right_led_seq(void)
{
    unsigned short counter ;
    for( counter = 128 ; counter >= 1 ; counter/=2)
    {
        LATC = counter ;
        __delay_ms(250);
    }
}

/**
 * 
 * @param seq
 */
void control_led_seq(led_seq_dir seq_dir)
{
    if( LEFT_TO_RIGHT == seq_dir )
        left_to_right_led_seq();
    
    else
        right_to_left_led_seq();
}

