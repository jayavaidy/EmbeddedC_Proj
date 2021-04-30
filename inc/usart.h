/**
 * @file usart.h
 * @author Jayasri Vaidyaraman
 * @brief File that contains the functions that allow the user to perform USART communications
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
 #ifndef __USART_H__
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
