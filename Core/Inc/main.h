/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32c0xx_hal.h"

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
#define DfSDCintlck1_Pin GPIO_PIN_15
#define DfSDCintlck1_GPIO_Port GPIOC
#define DfSDCintlck2_Pin GPIO_PIN_0
#define DfSDCintlck2_GPIO_Port GPIOA
#define DfLCHdischarge_Pin GPIO_PIN_1
#define DfLCHdischarge_GPIO_Port GPIOA
#define DfTHRhv_Pin GPIO_PIN_2
#define DfTHRhv_GPIO_Port GPIOA
#define DfSDC_Pin GPIO_PIN_3
#define DfSDC_GPIO_Port GPIOA
#define BfSDC_Pin GPIO_PIN_4
#define BfSDC_GPIO_Port GPIOA
#define BfERRtimer_Pin GPIO_PIN_5
#define BfERRtimer_GPIO_Port GPIOA
#define BfERRplaus_Pin GPIO_PIN_6
#define BfERRplaus_GPIO_Port GPIOA
#define BfTHRcurrent_Pin GPIO_PIN_7
#define BfTHRcurrent_GPIO_Port GPIOA
#define BfTHRbrake_Pin GPIO_PIN_0
#define BfTHRbrake_GPIO_Port GPIOB
#define DfSUPled_Pin GPIO_PIN_6
#define DfSUPled_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
typedef union {
	uint8_t array[12];
	struct{
	/* ================ MISSATGE 1 ================ */
	uint8_t DfSDCintlck1;
	uint8_t DfSDCintlck2;
	uint8_t DfLCHdischarge;
	uint8_t DfTHRhv;
	uint8_t DfSDC;
	uint8_t BfSDC;
	uint8_t BfERRtimer;
	uint8_t BfERRplaus;
	uint8_t BfTHRcurrent;
	uint8_t BfTHRbrake;
	uint8_t DfSUPled;
	};
} DICCF_t;

typedef struct {
	uint8_t DpSDCintlck1;
	uint8_t DpSDCintlck2;
	uint8_t DpLCHdischarge;
	uint8_t DpTHRhv;
	uint8_t DpSDC;
	uint8_t BpSDC;
	uint8_t BpERRtimer;
	uint8_t BpERRplaus;
	uint8_t BpTHRcurrent;
	uint8_t BpTHRbrake;
	uint8_t DpSUPled;
}DICCP_t;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
