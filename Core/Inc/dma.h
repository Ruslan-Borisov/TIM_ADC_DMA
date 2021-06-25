/**
  ******************************************************************************
  * @file    dma.h
  * @brief   This file contains all the function prototypes for
  *          the dma.c file
  ******************************************************************************
	 * @attention
 
  ******************************************************************************
 */

#ifndef __DMA_H__
#define __DMA_H__

#ifdef __cplusplus
extern "C" {
#endif


#include "main.h"


extern uint16_t DMA_ADC_Buff_1[SIZE];
extern uint16_t DMA_ADC_Buff_2[SIZE];

/**
  * @brief  Initializes the DMA2 Stream 0
	* @details Working together with ADC1,
	* DMA operates in double buffer mode
  * @param  None
  * @retval None
  */
void DMA2_Stream0_Init(void);


#ifdef __cplusplus
}
#endif

#endif /* __DMA_H__ */

/************************ (C) BORISOV RUSLAN *****END OF FILE****/
