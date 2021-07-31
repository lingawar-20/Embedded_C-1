#include "activity3.h"

void initPWM()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB |= (1<<PB1);
}

char PWMGenerate(uint16_t temp)
{
    char temperature = 0;
    if((temp>0)&&(temp<=200))
    {
        ///20% duty cycle
        OCR1A = 205;
        temperature = 20;
        _delay_ms(100);
    }
    else if((temp>=210)&&(temp<=500))
    {
        ///40% duty cycle
        OCR1A = 410;
        temperature = 25;
        _delay_ms(100);
    }
    else if((temp>=510)&&(temp<=700))
    {
        ///70% duty cycle
        OCR1A = 717;
        temperature = 29;
        _delay_ms(100);
    }
    else if((temp>=710)&&(temp<=1024))
    {
        ///95% duty cycle
        OCR1A = 973;
        temperature = 33;
        _delay_ms(100);
    }
    return temperature;
}