#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
#include <util/delay.h>


void set_PWM( )
{
    
    
     // setting compare output match A mode for timer 1  in non-inverting mode and setting the prescalars(64) 
     TCCR1A |= (1<<COM1A1) | (1<<WGM11) | (1<<WGM10); 
     TCCR1B |= (1<<WGM12)| (1<<CS11) | (1<<CS10);
     DDRB |= (1<<PWM_PORT);// setting B1 port as pwm output for timer1
}


// Formula = (1024* %dutycycle)-1
char out_PWM(uint16_t val)
{
   char temperature = 0;
    if((val>=0) && (val<=200))
    {

        OCR1A = 204; //20% duty cycle
        temperature = 20;
        _delay_ms(100);
    }
    else if((val>=201) && (val<=500))
    {

        OCR1A = 410; //40% duty cycle
         temperature = 25;
        _delay_ms(100);
    }
    else if((val>=510) && (val<=700))
    {

        OCR1A = 717;//70% duty cycle
         temperature = 29;
        _delay_ms(100);
    }
    else if((val>=710) && (val<=1024))
    {

        OCR1A = 973; //95% duty cycle
          temperature = 33;
        _delay_ms(100);
    }
    //else
   // {
    //    OCR1A = 0; //0% output
    //     temperature = 20;
      //  _delay_ms(100);
   // }
   return temperature;
}
