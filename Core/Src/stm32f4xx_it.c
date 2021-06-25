/**
  ******************************************************************************
  * @file    stm32f4xx_it.c
  * @brief   Interrupt Service Routines.
  ******************************************************************************
	 * @attention
   * Configuration for STM32F407
  ******************************************************************************
 */


 
#include "stm32f4xx_it.h"


void USART1_IRQHandler(void) 
	{

				
     USART1->SR &=~ USART_SR_RXNE;
    
      USART1->SR &=~ USART_SR_TXE;
  
  }

	void DMA2_Stream0_IRQHandler(void) 
	{
		if(DMA2->LISR & TCIF0)
   {
	   if(DMA2_Stream0->CR & BUFFER_MODE)
			
       {
				ChannelValue.valPA_5 = (DMA_ADC_Buff_1[0] + DMA_ADC_Buff_2[0])/2 ;
	      ChannelValue.valPA_6 = (DMA_ADC_Buff_1[1] + DMA_ADC_Buff_2[1])/2 ;
	      ChannelValue.valPA_7 = (DMA_ADC_Buff_1[2] + DMA_ADC_Buff_2[2])/2 ;
			 }	
		
			 DMA2->LIFCR |= ClearTCIF0;
		
   }	
}

/************************ (C) BORISOV RUSLAN *****END OF FILE****/
