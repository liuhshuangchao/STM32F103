/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : bsp_key.h
  * @brief          : This file contains all the function prototypes for
  *          the bsp_key.c file
  ******************************************************************************
  * @attention
	*	按键KEY1宏定义
  *	KEY1_ON      	  按键KEY1引脚连接PA0，按键按下
  * KEY1_OFF				按键KEY1引脚连接PA0，按键复位

  * 按键KEY2宏定义
  *	KEY2_ON      	  按键KEY1引脚连接PC13，按键按下
  * KEY2_OFF				按键KEY1引脚连接PC13，按键复位。
  ******************************************************************************
  */
/* USER CODE END Header */



#ifndef	__BSP_KEY_H_
#define	__BSP_KEY_H_

#include "stm32f1xx.h"


//KEY端口引脚定义
#define KEY1_GPIO_Port 	GPIOA
#define KEY1_Pin 	GPIO_PIN_0

#define KEY2_GPIO_Port 	GPIOC
#define KEY2_Pin 	GPIO_PIN_13

typedef enum
{
  GPIO_KEY_OFF = 0,
  GPIO_KEY_ON
} GPIO_KeyState;



void KEY_GPIO_Init( void );
GPIO_KeyState KEY_Scan(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);



#endif
1