/**
 * @file activity4.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

 #define __USART_H__
 #include<avr/io.h>
 #include<avr/pgmspace.h>
 #include "project_config.h"
 #include<util/delay.h>


 /**
  * @brief Function to initialize the registers required for serial communication
  */
  void initUSART(uint16_t ubrr_value);

/**
 * @brief Function that decides the data to be tranmitted and then calls the function to transmit the data
 */
void transmitCharUSART(char data);

#endif