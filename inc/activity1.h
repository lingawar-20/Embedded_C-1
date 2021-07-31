/**
 * @file activity1.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define __LED_H_

#include "project_config.h"

/**
 * @brief function to initilaize the LED port as output and the switches as input
 */
 void initPort();

/**
 * @brief function to check the status of the switches and make the LED glow in 
 */
int check();

#endif