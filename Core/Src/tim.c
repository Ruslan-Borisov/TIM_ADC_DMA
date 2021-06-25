/**
  ******************************************************************************
  * @file    tim.c
  * @brief   This file provides code for the configuration
  *          of the TIM instances.
  ******************************************************************************
  * @attention
  * TIM configuration for STM32F407
  ******************************************************************************
  */

#include "tim.h"

void TIM2_Init(void)
{
	/*1. Enable TIM2 clock*/
	RCC->APB1ENR |= RCC_APB1ENR_TIM2EN; 
	
  /*2. TIMx prescaler*/
	TIM2->PSC = 100;  /*!< >*/
	
	/*3. TIMx auto-reload register*/
   TIM2->ARR = 600000;	/*!< >*/
	
	/*5. Bits 6:4 MMS[2:0]: Master mode selection*/
	 TIM2->CR2 =  (1<<5); /*!<Update>*/
	
	/*6. Bit 0 CEN: Counter enable*/
	TIM2->CR1 |= (1<<0); /*!<Counter enabled>*/
	
}

/************************ (C) BORISOV RUSLAN *****END OF FILE****/
