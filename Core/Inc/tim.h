/**
  ******************************************************************************
  * @file    tim.h
  * @brief   This file contains all the function prototypes for
  *          the tim.c file
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

#ifndef __TIM_H__
#define __TIM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

/**
  * @brief  Initializes the TIM2.
	* @details Trigger the start of conversion of a regular group for ADC1.
  * @param  None
  * @retval None
  */
void TIM2_Init(void);



#ifdef __cplusplus
}
#endif

#endif /* __TIM_H__ */

/************************ (C) BORISOV RUSLAN *****END OF FILE****/
