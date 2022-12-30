/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    bsp_key.c
  *提供板级支持霸道开发板
	*KEY1 GPIOB 	GPIO_PIN_5
	*KEY2 GPIOB		GPIO_PIN_0
	*
  *##使用说明
  * 1.调用本文件的 void KEY_GPIO_Init(void)，初始化所有KEY端口。
  * 2.调用对应bsp_key.h对相应KEY宏定义设置按键状态KEYx_ON或KEYx_OFF(x对应按键编号)。
  *   宏定义：KEYx_ON		KEYx_OFF
  *
  ******************************************************************************
  */
/* USER CODE END Header */

#include "bsp_key.h"

/*本函数功能是初始化KEY端口，若要使用KEY按键必须先调用此函数以初始化KEY端口*/
void KEY_GPIO_Init(void)
{
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOC_CLK_ENABLE();
	
	
	GPIO_InitTypeDef 		KEY_GPIO_InitStruct = { 0 };
	KEY_GPIO_InitStruct.Mode 	= GPIO_MODE_INPUT;
	KEY_GPIO_InitStruct.Pin  	= KEY1_Pin;
	KEY_GPIO_InitStruct.Pull 	= GPIO_NOPULL;
	KEY_GPIO_InitStruct.Speed	= GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(KEY1_GPIO_Port, &KEY_GPIO_InitStruct);
	
	KEY_GPIO_InitStruct.Pin  	= KEY2_Pin;
	HAL_GPIO_Init(KEY2_GPIO_Port, &KEY_GPIO_InitStruct);
}

GPIO_KeyState KEY_Scan(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
	
	if( HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_SET)
	{
		HAL_Delay(15);
		if(HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_SET)
		return GPIO_KEY_ON;		
	}
	return GPIO_KEY_OFF;

}






