/**
  ******************************************************************************
  * @file    usart.c
  * @brief   This file provides code for the configuration
  *          of the USART instances.
  ******************************************************************************
	 * @attention
   * USART configuration for STM32F407
  ******************************************************************************
 */


#include "usart.h"



void UART1_Init(void)
	{
		
  /*1. Enable USART1 and GPIOA clock*/
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;	
	RCC->APB2ENR |= RCC_APB2ENR_USART1EN;	
		
	        /* PA9   ------> USART1_TX*/	
		
	/*2. Bits 31:0 AFRHy: Alternate function selection for port x bit y*/	
	GPIOA->AFR[1] |=  (2<<18); /*!< AF7 - USART1_TX >*/
		
  /*3. Bits 2y:2y+1 MODERy[1:0]: Port x configuration bits */		
	GPIOA->MODER |=  (2<<18) ;	/*!<Alternate function mode>*/
		
	/*4. Bits 2y:2y+1 OSPEEDRy[1:0]: Port x configuration bits*/		
	GPIOA->OSPEEDR |=(1<<19); /*!<High speed>*/
		
	         /*PA10   ------> USART1_RX*/ 
		
	/*5. Bits 31:0 AFRHy: Alternate function selection for port x bit y*/	
  GPIOA->AFR[1] |=  (7<<8);	/*!< AF7 - USART1_RX >*/
	
	/*6. Bits 2y:2y+1 MODERy[1:0]: Port x configuration bits */		
	GPIOA->MODER |=  (2<<20);	/*!<Alternate function mode>*/

  /*7. Bits 15:0 OTy: Port x configuration bits */	
	GPIOA->OTYPER |=   (1<<10);	/*!< Output open-drain >*/
	
	/*8. Bits 2y:2y+1 OSPEEDRy[1:0]: Port x configuration bits*/
	GPIOA->OSPEEDR |=(1<<21); /*!<High speed>*/					

	            /*USART1 Configuration*/
							
	/*9. Baud rate register */
	USART1->BRR |= 0x0000016C; /*!< 115200 >*/	
	
	/*10. Bit 3 TE: Transmitter enable */
	USART1->CR1   |= (1<<3); /*!< Enabled >*/  

	/*11. Bit 2 RE: Receiver enable */
	USART1->CR1   |=  (1<<2); /*!< Enabled >*/   
	
	/*12. Bits 13:12 STOP: STOP bits */
	USART1->CR1   &= ~(1<<12)|(1<<13); /*!< 1 Stop bit >*/   

  /*13. Bit 6 DMAR: DMA enable receiver */
  USART1->CR3   &= ~ (1<<6); /*!< Disabled >*/    
	
	/*14. Bit 7 DMAT: DMA enable transmitter */
	USART1->CR3   &= ~ (1<<7); /*!< Disabled >*/


  /*15. Bit 13 UE: USART enable */                   
	USART1->CR1   |= (1<<13); /*!< Enabled >*/ 

	}
	

/************************ (C) BORISOV RUSLAN *****END OF FILE****/

