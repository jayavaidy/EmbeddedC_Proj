/**
 * @file led.h
 * @author Jayasri Vaidyaraman
 * @brief contains the various functions required to initialize an LED at an output port and to reveceive inputs from two switches in the input port
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __LED_H_
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