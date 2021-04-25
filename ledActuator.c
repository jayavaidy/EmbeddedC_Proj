/**
 * @file ledActuator.c
 * @author Jayasri Vaidyaraman
 * @brief Code to make an LED glow if the user is in his seat and the heater is on (status of both conditions is received via pushbutton input)
 * @version 0.1
 * @date 2021-04-24
 *
 * @copyright Copyright (c) 2021
 *
 */
#include<avr/io.h>

#define F_CPU 16000000UL

#include<util/delay.h>

int main(void)
{
    ///setting the pin C0 and C1 as input by clearing bit
    DDRC &= ~(1<<PC0);
    DDRC &= ~(1<<PC1);

    ///setting the pin B0 as output
    DDRB |= (1<<PB0);

    while(1)
    {
        ///The integers that temporarily store the status of the input switches
        volatile int switch1, switch2;
        
        ///Storing the switch input in variables
        switch1 = PINC&(1<<PC0);
        _delay_ms(100);
        switch2 = PINC&(1<<PC1);
        _delay_ms(100);
        //checking if both the push button switches are switched on

        if (switch1&&switch2)
        {
            ///LED is switched on if both switches are high
            PORTB |= (1<<PB0);
            _delay_ms(1000);
        }
        else
        {
            //LED is off otherwise
            PORTB &= ~(1<<PB0);
            _delay_ms(1000);
        }
        _delay_ms(1000);
    }
    return 0;
}
