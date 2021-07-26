#ifndef _ACTIVITY3_h_
#define _ACTIVITY3_h_
/**
 * @brief 
 * 
 */
#define PWM_PORT (PB1)
/**
 * @brief Function to initialise the PWM output
 * 
 */
void set_PWM(void);
/**
 * @brief 
 * 
 * @param ADC 
 */
void out_PWM (uint16_t val);
#endif