/**
 * @file pwm.h
 * @author Jayasri Vaidyaraman
 * @brief File that contains the functions that initilaize the registers required for PWM generation and generate the PWM wave
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __PWM_H__
#define __PWM_H__

#include<avr/io.h>
#include "project_config.h"
#include <util/delay.h>

/**
 * @brief function that initilaizes the register values required for PWM
 * 
 */
 void initPWM();

/**
 * @brief function that generates the PWM wave and decides its duty cycle according to the temperature input
 * @param[in] temperature get the temperature value from the ADC
 * @param[out] int prints the integer value of the temperature 
 */
char PWMGenerate(uint16_t temp);

#endif