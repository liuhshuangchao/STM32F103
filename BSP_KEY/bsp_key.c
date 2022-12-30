/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    bsp_key.c
  *�ṩ�弶֧�ְԵ�������
	*KEY1 GPIOB 	GPIO_PIN_5
	*KEY2 GPIOB		GPIO_PIN_0
	*
  *##ʹ��˵��
  * 1.���ñ��ļ��� void KEY_GPIO_Init(void)����ʼ������KEY�˿ڡ�
  * 2.���ö�Ӧbsp_key.h����ӦKEY�궨�����ð���״̬KEYx_ON��KEYx_OFF(x��Ӧ�������)��
  *   �궨�壺KEYx_ON		KEYx_OFF
  *
  ******************************************************************************
  */
/* USER CODE END Header */

#include "bsp_key.h"

/*�����������ǳ�ʼ��KEY�˿ڣ���Ҫʹ��KEY���������ȵ��ô˺����Գ�ʼ��KEY�˿�*/
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






