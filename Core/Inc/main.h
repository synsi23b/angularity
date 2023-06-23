/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdbool.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
extern I2C_HandleTypeDef hi2c1;
extern I2C_HandleTypeDef hi2c2;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void task_alpha(void* arg);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_1_Pin GPIO_PIN_13
#define LED_1_GPIO_Port GPIOC
#define LED_2_Pin GPIO_PIN_14
#define LED_2_GPIO_Port GPIOC
#define LED_3_Pin GPIO_PIN_15
#define LED_3_GPIO_Port GPIOC
#define ADC_IN0_V5_Pin GPIO_PIN_0
#define ADC_IN0_V5_GPIO_Port GPIOA
#define ADC_IN3_Vmot_Pin GPIO_PIN_3
#define ADC_IN3_Vmot_GPIO_Port GPIOA
#define ADC_IN4_touch_Pin GPIO_PIN_4
#define ADC_IN4_touch_GPIO_Port GPIOA
#define ADC_IN5_touch_Pin GPIO_PIN_5
#define ADC_IN5_touch_GPIO_Port GPIOA
#define ADC_IN6_touch_Pin GPIO_PIN_6
#define ADC_IN6_touch_GPIO_Port GPIOA
#define ADC_IN7_amp_Pin GPIO_PIN_7
#define ADC_IN7_amp_GPIO_Port GPIOA
#define ADC_IN8_amp_Pin GPIO_PIN_0
#define ADC_IN8_amp_GPIO_Port GPIOB
#define ADC_IN9_amp_Pin GPIO_PIN_1
#define ADC_IN9_amp_GPIO_Port GPIOB
#define mot_1_enn_Pin GPIO_PIN_2
#define mot_1_enn_GPIO_Port GPIOB
#define mot_1_dir_Pin GPIO_PIN_12
#define mot_1_dir_GPIO_Port GPIOB
#define mot2_enn_Pin GPIO_PIN_13
#define mot2_enn_GPIO_Port GPIOB
#define mot2_dir_Pin GPIO_PIN_14
#define mot2_dir_GPIO_Port GPIOB
#define mot3_enn_Pin GPIO_PIN_15
#define mot3_enn_GPIO_Port GPIOB
#define mot3_dir_Pin GPIO_PIN_8
#define mot3_dir_GPIO_Port GPIOA
#define I2C1_SCL_SWAP_Pin GPIO_PIN_8
#define I2C1_SCL_SWAP_GPIO_Port GPIOB
#define I2C1_SDA_SWAP_Pin GPIO_PIN_9
#define I2C1_SDA_SWAP_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
