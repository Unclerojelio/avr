#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

int
main (void)
{
    DDRB |= _BV(DDB0); 
    
    while(1) 
    {
        PORTB ^= _BV(PB0);
        _delay_ms(500);
    }
}