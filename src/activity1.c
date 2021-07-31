#include "activity1.h"

void initPort()
{
     ///setting the pin C0 and C1 as input by clearing bit
    SWITCH_REG &= ~(1<<HEAT_ON);
    SWITCH_REG &= ~(1<<DRIVER_SEATED);

    ///setting the pin B0 as output
    LED_REG |= (1<<STATUS_LED);
}

int check()
{
    ///The integers that temporarily store the status of the input switches
        volatile int switch1, switch2;
        int flag = 0;
        ///Storing the switch input in variables
        switch1 = SENSOR_IP&(1<<HEAT_ON);
        _delay_ms(100);
        switch2 = SENSOR_IP&(1<<DRIVER_SEATED);
        _delay_ms(100);
        //checking if both the push button switches are switched on

        if (switch1&&switch2)
        {
            ///LED is switched on if both switches are high
            LED_OP |= (1<<STATUS_LED);
            _delay_ms(1000);
            flag = 1;
        }
        else
        {
            //LED is off otherwise
            LED_OP &= ~(1<<STATUS_LED);
            _delay_ms(1000);
        }
        if (flag==1)
        return 1;
        return 0;
}