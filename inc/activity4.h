#ifndef _ACTIVITY4_h_
#define _ACTIVITY4_h_
/**
 * @brief 
 * 
 */

/**
 * @brief MACROS and global valriable to store the baud rate
 * 
 */
#define BAUD 9600  // Baud rate
#define F_CPU 16000000UL 
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
