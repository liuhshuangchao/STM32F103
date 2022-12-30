/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : bsp_led.h
  * @brief          : This file contains all the function prototypes for
  *          the bsp_led.c file
  ******************************************************************************
  * @attention
	*	红灯宏定义使用
  *	LED_R_ON      	红灯引脚连接PB5，红灯打开。
  * LED_R_OFF				红灯引脚连接PB5，红灯关闭。
  * LED_R_Toggle		红灯引脚连接PB5，红灯翻转电平。
  *
  * 绿灯宏定义使用
  * LED_G_ON      	绿红灯引脚连接PB0，绿灯打开。
  * LED_G_OFF				绿灯引脚连接PB0，绿灯关闭。
  * LED_G_Toggle		绿灯引脚连接PB0，绿灯翻转电平。
  * 
  * 蓝灯宏定义使用
  * LED_B_ON      	蓝绿红灯引脚连接PB1，蓝灯打开。
  * LED_B_OFF				蓝灯引脚连接PB1，蓝灯关闭。
  * LED_B _Toggle		蓝灯引脚连接PB1，蓝灯翻转电平。
  ******************************************************************************
  */
/* USER CODE END Header */



#ifndef	__BSP_LED_H_
#define	__BSP_LED_H_

#include "stm32f1xx.h"

//LED端口引脚定义
#define LED1_2_GPIO_Port 	GPIOF
#define LED1_Pin 	GPIO_PIN_7
#define LED2_Pin 	GPIO_PIN_8

#define LED_RGB_GPIO_Port 	GPIOB
#define LED_G_Pin 	GPIO_PIN_0
#define LED_B_Pin 	GPIO_PIN_1
#define LED_R_Pin 	GPIO_PIN_5


#define	LED_R_ON	do { HAL_GPIO_WritePin(LED_RGB_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET); } while(0U)
#define	LED_R_OFF	do { HAL_GPIO_WritePin(LED_RGB_GPIO_Port, LED_R_Pin, GPIO_PIN_SET); } while(0U)
#define	LED_R_Toggle	do { HAL_GPIO_TogglePin(LED_RGB_GPIO_Port, LED_R_Pin); } while(0U)

#define	LED_G_ON	do { HAL_GPIO_WritePin(LED_RGB_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET); } while(0U)
#define	LED_G_OFF	do { HAL_GPIO_WritePin(LED_RGB_GPIO_Port, LED_G_Pin, GPIO_PIN_SET); } while(0U)
#define	LED_G_Toggle	do { HAL_GPIO_TogglePin(LED_RGB_GPIO_Port, LED_G_Pin); } while(0U)

#define	LED_B_ON	do { HAL_GPIO_WritePin(LED_RGB_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET); } while(0U)
#define	LED_B_OFF	do { HAL_GPIO_WritePin(LED_RGB_GPIO_Port, LED_B_Pin, GPIO_PIN_SET); } while(0U)
#define	LED_B_Toggle	do { HAL_GPIO_TogglePin(LED_RGB_GPIO_Port, LED_B_Pin); } while(0U)

#define	LED1_ON		do { HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_Pin, GPIO_PIN_RESET); } while(0U)
#define	LED1_OFF	do { HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_Pin, GPIO_PIN_SET); } while(0U)
#define	LED1_Toggle	do { HAL_GPIO_TogglePin(LED1_2_GPIO_Port, LED1_Pin); } while(0U)

#define	LED2_ON		do { HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET); } while(0U)
#define	LED2_OFF	do { HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED2_Pin, GPIO_PIN_SET); } while(0U)
#define	LED2_Toggle	do { HAL_GPIO_TogglePin(LED1_2_GPIO_Port, LED2_Pin); } while(0U)

/*初始化LED端口声明函数*/
void LED_GPIO_Init( void );




#endif