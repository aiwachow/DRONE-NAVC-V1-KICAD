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
#include "stm32l4xx_hal.h"

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
#define SPL_INT_Pin GPIO_PIN_1
#define SPL_INT_GPIO_Port GPIOC
#define SPL_INT_EXTI_IRQn EXTI1_IRQn
#define BMI_ACC_INT_Pin GPIO_PIN_2
#define BMI_ACC_INT_GPIO_Port GPIOC
#define BMI_ACC_INT_EXTI_IRQn EXTI2_IRQn
#define BMI_GYRO_INT_Pin GPIO_PIN_3
#define BMI_GYRO_INT_GPIO_Port GPIOC
#define BMI_GYRO_INT_EXTI_IRQn EXTI3_IRQn
#define Sensors_Led_Pin GPIO_PIN_10
#define Sensors_Led_GPIO_Port GPIOB
#define Status_Led_Pin GPIO_PIN_11
#define Status_Led_GPIO_Port GPIOB
#define USER_BUTT_Pin GPIO_PIN_9
#define USER_BUTT_GPIO_Port GPIOC
#define USER_BUTT_EXTI_IRQn EXTI9_5_IRQn
#define LPS25_INT_Pin GPIO_PIN_11
#define LPS25_INT_GPIO_Port GPIOC
#define LPS25_INT_EXTI_IRQn EXTI15_10_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
