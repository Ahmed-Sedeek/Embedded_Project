
#include "mcc_generated_files/mcc.h"
#include "ECUs/LEDs/ecu_led.h"


/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize(); // Initializing the pins and the oscillator

    while (1)
    {
/*        
    //  Turning all leds on or off
  
           turn_all_leds_on();
           __delay_ms(1000);
           turn_all_leds_off();
           __delay_ms(1000);
 */
/*
    // Choosing the led sequence either to left or right
        right_to_left_led_seq();
        left_to_right_led_seq();
*/

 *  // Controlling the led sequence via parameters
        control_led_seq(LEFT_TO_RIGHT);
        control_led_seq(RIGHT_TO_LEFT);

        
        
        
   }
}
/**
 End of File
*/