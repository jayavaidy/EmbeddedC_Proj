/**
 * @file adc.h
 * @author Jayasri Vaidyaraman
 * @brief file that contains the functions to initilaize and read data from the ADC
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
 #ifndef __ADC_H__
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