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
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define KEY1_Pin GPIO_PIN_3
#define KEY1_GPIO_Port GPIOE
#define KEY1_EXTI_IRQn EXTI3_IRQn
#define LED_Pin GPIO_PIN_1
#define LED_GPIO_Port GPIOA
#define KEY2_Pin GPIO_PIN_5
#define KEY2_GPIO_Port GPIOC
#define KEY2_EXTI_IRQn EXTI9_5_IRQn
#define SWITCH_C3_Pin GPIO_PIN_0
#define SWITCH_C3_GPIO_Port GPIOD
#define SWITCH_C2_Pin GPIO_PIN_2
#define SWITCH_C2_GPIO_Port GPIOD
#define SWITCH_C1_Pin GPIO_PIN_4
#define SWITCH_C1_GPIO_Port GPIOD
#define SWITCH_B3_Pin GPIO_PIN_6
#define SWITCH_B3_GPIO_Port GPIOD
#define SWITCH_B2_Pin GPIO_PIN_3
#define SWITCH_B2_GPIO_Port GPIOB
#define SWITCH_B1_Pin GPIO_PIN_5
#define SWITCH_B1_GPIO_Port GPIOB
#define SWITCH_A3_Pin GPIO_PIN_7
#define SWITCH_A3_GPIO_Port GPIOB
#define SWITCH_A2_Pin GPIO_PIN_9
#define SWITCH_A2_GPIO_Port GPIOB
#define SWITCH_A1_Pin GPIO_PIN_1
#define SWITCH_A1_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
