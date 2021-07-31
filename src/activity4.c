#include "activity4.h"

void initUSART(uint16_t ubrr_value)
{
    //setting the baud rate
    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&0x00ff;
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(UCSZ00);

    //enable transmitter
    UCSR0B = (1<<TXEN0)|(1<<TXCIE0)|(1<<RXEN0)|(1<<RXCIE0);
}

void transmitCharUSART(char data)
{
    while(!(UCSR0A&(1<<UDRE0)))
    {
        //do nothing
    }
    UDR0 = data;
}
