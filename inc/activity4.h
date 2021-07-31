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

#ifndef _ACTIVITY4_h_
#define _ACTIVITY4_h_

#define F_CPU 16000000UL 

#include <util/delay.h>
#include<avr/io.h>
/**
 * @brief MACROS and global valriable to store the baud rate
 * 
 */
#define BAUD 9600  // Baud rate

//#define F_CPU 16000000UL 
#define BAUD_RATE ((F_CPU)/(BAUD*16UL)-1)
uint16_t value;
/**
 * @brief function to initialise UART registers in asynchronous mode
 * 
 */

void UART_init();
/**
 * @brief Fnction to read the recieved data from the UART buffer
 * 
 * @return char 
 */

char UART_READ();
/**
 * @brief function to transmit the data and write data to UART buffer
 * 
 * @param data 
 */
void UART_WRITE(char data);
#endif