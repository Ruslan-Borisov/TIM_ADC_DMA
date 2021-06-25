/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
	 * @attention
 
  ******************************************************************************
 */

#include <stdint.h>
#include "main.h"
#include "adc.h"
#include "dma.h"
#include "tim.h"
#include "usart.h"
#include "stm32f4xx_it.h"
#include "rcc.h"



AverageChannelValue ChannelValue;
uint16_t DMA_ADC_Buff_1[SIZE];
uint16_t DMA_ADC_Buff_2[SIZE];

int main(void)
{
		
	RCC_Init();
  UART1_Init();
	ADC1_Init();
  DMA2_Stream0_Init();
	TIM2_Init();
  
  while (1)
  {
		  while(!(USART1->SR & USART_SR_TC));
		USART1->DR = 'h';
		for(int i=0; i<500000; i++){}

	}
 
}

/************************ (C) BORISOV RUSLAN *****END OF FILE****/
