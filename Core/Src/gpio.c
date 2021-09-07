/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
#include "connect_wifi.h"


/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/** Pinout Configuration
*/
void MX_GPIO_Init(void)
{

 GPIO_InitTypeDef GPIO_InitStruct;
	
  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
	
	 /*Configure GPIO pin : WIFI_KEY_Pin������������ */
  GPIO_InitStruct.Pin = WIFI_KEY_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(WIFI_KEY_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : LD2������ָʾ�ƣ� */
  GPIO_InitStruct.Pin = WIFI_LED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(WIFI_LED_GPIO_Port, &GPIO_InitStruct);

}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
