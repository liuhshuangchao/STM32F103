/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    bsp_led.cB
  *提供板级支持霸道开发板
	*红灯GPIOB 	GPIO_PIN_5
	*绿灯GPIOB		GPIO_PIN_0
	*蓝灯GPIOB		GPIO_PIN_1
	*LED1灯 GPIOF		GPIO_PIN_7
	*LED2灯 GPIOF		GPIO_PIN_8
	*
  *##使用说明
  * 1.调用本文件的 void LED_GPIO_Init(void)，初始化所有LED端口。初始化后引脚高电平，对应LED灯熄灭。
  * 2.调用对应bsp_led.h对相应led宏定义设置ON或OFF或者Toggle。
  *   宏定义：LED_x_ON		LED_x_OFF  LED_x_Toggle
  *
  ******************************************************************************
  */
/* USER CODE END Header */

#include "bsp_led.h"

/*本函数功能是初始化LED端口，若要使用LED灯必须先调用此函数以初始化LED端口*/
void LED_GPIO_Init(void)
{
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOF_CLK_ENABLE();
	
	HAL_GPIO_WritePin(LED_RGB_GPIO_Port, LED_G_Pin | LED_B_Pin  | LED_R_Pin , GPIO_PIN_SET);	
	HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_Pin | LED2_Pin, GPIO_PIN_SET);
	
	GPIO_InitTypeDef 		LED_GPIO_InitStruct = { 0 };
	LED_GPIO_InitStruct.Mode 	= GPIO_MODE_OUTPUT_PP;
	LED_GPIO_InitStruct.Pin  	= LED_G_Pin | LED_B_Pin  | LED_R_Pin;
	LED_GPIO_InitStruct.Pull 	= GPIO_NOPULL;
	LED_GPIO_InitStruct.Speed	= GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(LED_RGB_GPIO_Port, &LED_GPIO_InitStruct);
	
	LED_GPIO_InitStruct.Pin  	= LED1_Pin | LED2_Pin;
	HAL_GPIO_Init(LED1_2_GPIO_Port, &LED_GPIO_InitStruct);
}