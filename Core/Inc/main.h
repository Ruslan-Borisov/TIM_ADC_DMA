
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
	 * @attention
 
  ******************************************************************************
 */


#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx.h"
#include "math.h"

/** 
  * @brief Description of the memory area
	* for storing the average value over the 
	* three ADC channels
  */
 typedef struct AverageChannelValue{	
 uint16_t valPA_5;  /*!<Average value of the first channel ADC of the port PA 5> */
 uint16_t valPA_6;  /*!<average value of the second channel ADC of the port PA 6> */
 uint16_t valPA_7;  /*!<average value of the third channel of the port PA 7> */
} AverageChannelValue; 
 

extern AverageChannelValue ChannelValue;


#define SIZE 3

extern uint16_t DMA_ADC_Buff_1[SIZE];
extern uint16_t DMA_ADC_Buff_2[SIZE];
extern volatile uint16_t counter;
extern volatile uint16_t counter1;

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) BORISOV RUSLAN *****END OF FILE****/
