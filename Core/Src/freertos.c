/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for KeyboardInput */
osThreadId_t KeyboardInputHandle;
const osThreadAttr_t KeyboardInput_attributes = {
  .name = "KeyboardInput",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityRealtime7,
};
/* Definitions for LCDScreen */
osThreadId_t LCDScreenHandle;
const osThreadAttr_t LCDScreen_attributes = {
  .name = "LCDScreen",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityHigh,
};
/* Definitions for LightingEffects */
osThreadId_t LightingEffectsHandle;
const osThreadAttr_t LightingEffects_attributes = {
  .name = "LightingEffects",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityRealtime,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void GetKeyboardInput(void *argument);
void ScreenDisplay(void *argument);
void LightLights(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of KeyboardInput */
  KeyboardInputHandle = osThreadNew(GetKeyboardInput, NULL, &KeyboardInput_attributes);

  /* creation of LCDScreen */
  LCDScreenHandle = osThreadNew(ScreenDisplay, NULL, &LCDScreen_attributes);

  /* creation of LightingEffects */
  LightingEffectsHandle = osThreadNew(LightLights, NULL, &LightingEffects_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_GetKeyboardInput */
/**
  * @brief  Function implementing the KeyboardInput thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_GetKeyboardInput */
void GetKeyboardInput(void *argument)
{
  /* USER CODE BEGIN GetKeyboardInput */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END GetKeyboardInput */
}

/* USER CODE BEGIN Header_ScreenDisplay */
/**
* @brief Function implementing the LCDScreen thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_ScreenDisplay */
void ScreenDisplay(void *argument)
{
  /* USER CODE BEGIN ScreenDisplay */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END ScreenDisplay */
}

/* USER CODE BEGIN Header_LightLights */
/**
* @brief Function implementing the LightingEffects thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_LightLights */
void LightLights(void *argument)
{
  /* USER CODE BEGIN LightLights */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END LightLights */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

