/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    bsp_led.cB
  *�ṩ�弶֧�ְԵ�������
	*���GPIOB 	GPIO_PIN_5
	*�̵�GPIOB		GPIO_PIN_0
	*����GPIOB		GPIO_PIN_1
	*LED1�� GPIOF		GPIO_PIN_7
	*LED2�� GPIOF		GPIO_PIN_8
	*
  *##ʹ��˵��
  * 1.���ñ��ļ��� void LED_GPIO_Init(void)����ʼ������LED�˿ڡ���ʼ�������Ÿߵ�ƽ����ӦLED��Ϩ��
  * 2.���ö�Ӧbsp_led.h����Ӧled�궨������ON��OFF����Toggle��
  *   �궨�壺LED_x_ON		LED_x_OFF  LED_x_Toggle
  *
  ******************************************************************************
  */
/* USER CODE END Header */

#include "bsp_led.h"

/*�����������ǳ�ʼ��LED�˿ڣ���Ҫʹ��LED�Ʊ����ȵ��ô˺����Գ�ʼ��LED�˿�*/
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