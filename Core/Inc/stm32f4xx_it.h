/**
  ******************************************************************************
  * @file    stm32f4xx_it.h
  * @brief   This file contains the headers of the interrupt handlers.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
 ******************************************************************************
  */

#ifndef __STM32F4xx_IT_H
#define __STM32F4xx_IT_H

#ifdef __cplusplus
 extern "C" {
#endif
#include "main.h"

#define TCIF0        (1<<5)   /*!<Stream 0 transfer complete interrupt flag> */ 
#define ClearTCIF0   (1<<5)   /*!<Stream 0 clear transfer complete interrupt flag> */ 
#define BUFFER_MODE  (1<<19)  /*!<Flag indicating which memory area is the current target> */ 


extern uint16_t DMA_ADC_Buff_1[SIZE];
extern uint16_t DMA_ADC_Buff_2[SIZE];


extern AverageChannelValue ChannelValue;

/**
  * @brief This function handles DMA2 stream0 global interrupt.
  */
void DMA2_Stream0_IRQHandler(void);

void USART1_IRQHandler(void);



#ifdef __cplusplus
}
#endif

#endif /* __STM32F4xx_IT_H */

/************************ (C) BORISOV RUSLAN *****END OF FILE****/
