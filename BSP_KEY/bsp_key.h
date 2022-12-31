/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : bsp_key.h
  * @brief          : This file contains all the function prototypes for
  *          the bsp_key.c file
  ******************************************************************************
  * @attention
	*	����KEY1�궨��
  *	KEY1_ON      	  ����KEY1��������PA0����������
  * KEY1_OFF				����KEY1��������PA0��������λ

  * ����KEY2�궨��
  *	KEY2_ON      	  ����KEY1��������PC13����������
  * KEY2_OFF				����KEY1��������PC13��������λ��
  ******************************************************************************
  */
/* USER CODE END Header */



#ifndef	__BSP_KEY_H_
#define	__BSP_KEY_H_

#include "stm32f1xx.h"


//KEY�˿����Ŷ���
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