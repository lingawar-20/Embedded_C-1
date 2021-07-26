#ifndef _ACTIVITY2_h_
#define _ACTIVITY2_h_



/**
 * @brief Function to initailaise the ADC register 
 * 
 */
void Init_adc();
/**
 * @brief Function to select the required chanel and read the analog data
 * 
 * @param channel
 * @return uint16_t 
 */
uint16_t Get_ADC(uint8_t channel);
#endif