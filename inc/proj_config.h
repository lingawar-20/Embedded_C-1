/**
 * @file proj_config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define __PROJECT_CONFIG_H__

#include<avr/io.h>

#define F_CPU 1600000UL

#include <util/delay.h>

///Input ports for switches
#define HEAT_ON PC0
#define DRIVER_SEATED PC1

///output ports for LEDS
#define STATUS_LED PB0

///Data direction registers for LEDs and switches
#define SWITCH_REG DDRC
#define LED_REG DDRB

///Input port for switches
#define SENSOR_IP PINC
#define LED_OP PORTB

#endif