#include "activity2.h"

void initADC()
{
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN)|(7<<ADPS0);
}

uint16_t readADC(uint8_t ch)
{
    ///selecting channel for ADC input
    ADMUX &= 0xf8;
    ch = ch&(0b00000111);

    ADMUX |= ch;

    ///staring single channel conversion
    ADCSRA |= (1<<ADSC);

    ///waiting for conversion to complete
    while(!(ADCSRA&(1<<ADIF)));

    ///clear ADIF by writing 1 to it
    ADCSRA |= (1<<ADIF);
    return (ADC);
}