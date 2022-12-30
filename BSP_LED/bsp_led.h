/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : bsp_led.h
  * @brief          : This file contains all the function prototypes for
  *          the bsp_led.c file
  ******************************************************************************
  * @attention
	*	��ƺ궨��ʹ��
  *	LED_R_ON      	�����������PB5����ƴ򿪡�
  * LED_R_OFF				�����������PB5����ƹرա�
  * LED_R_Toggle		�����������PB5����Ʒ�ת��ƽ��
  *
  * �̵ƺ궨��ʹ��
  * LED_G_ON      	�̺����������PB0���̵ƴ򿪡�
  * LED_G_OFF				�̵���������PB0���̵ƹرա�
  * LED_G_Toggle		�̵���������PB0���̵Ʒ�ת��ƽ��
  * 
  * ���ƺ궨��ʹ��
  * LED_B_ON      	���̺����������PB1�����ƴ򿪡�
  * LED_B_OFF				������������PB1�����ƹرա�
  * LED_B _Toggle		������������PB1�����Ʒ�ת��ƽ��
  ******************************************************************************
  */
/* USER CODE END Header */



#ifndef	__BSP_LED_H_
#define	__BSP_LED_H_

#include "stm32f1xx.h"

//LED�˿����Ŷ���
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

/*��ʼ��LED�˿���������*/
void LED_GPIO_Init( void );




#endif