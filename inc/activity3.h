/**
 * @file activity3.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ACTIVITY3_h_
#define _ACTIVITY3_h_

#define PWM_PORT (PB1)

#include<avr/io.h>
/**
 * @brief Function to initialise the PWM output
 * 
 */
void set_PWM();
/**
 * @brief 
 * 
 * @param ADC 
 */
char out_PWM(uint16_t val);
#endif