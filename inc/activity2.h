/**
 * @file activity2.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */
 #define __ADC_H__

#include<avr/io.h>

/**
 * @brief Function to initialize the registers required to read data from the ADC
 */
 void initADC();

 /**
  * @brief Function to read data from the ADC
  */
uint16_t readADC(uint8_t ch);

 #endif