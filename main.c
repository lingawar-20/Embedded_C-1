#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
#include "proj_config.h"

int main(void)
{
    initPort();
    initADC();
    initPWM();
    initUSART(103);

    while(1)
    {
        int systemStatus;
        systemStatus = check();
        
        if(systemStatus)
        {
            char temperature;
            uint16_t temp;

            temp = readADC(5);
            _delay_ms(200);
            temperature = PWMGenerate(temp);
            _delay_ms(200);
            transmitCharUSART(temperature);
        }
        else
        {
            OCR1A = 0;
        }
    }
}