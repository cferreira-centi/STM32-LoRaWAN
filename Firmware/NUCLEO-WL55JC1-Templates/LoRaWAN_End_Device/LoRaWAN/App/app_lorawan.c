/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    app_lorawan.c
  * @author  MCD Application Team
  * @brief   Application of the LRWAN Middleware
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
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
#include "app_lorawan.h"
#include "lora_app.h"
#include "sys_app.h"
#include "stm32_seq.h"
#include "LmHandler.h" //ADDED

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* External variables ---------------------------------------------------------*/
/* USER CODE BEGIN EV */

/* USER CODE END EV */

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

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/

/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Exported functions --------------------------------------------------------*/

void MX_LoRaWAN_Init(void)
{
  /* USER CODE BEGIN MX_LoRaWAN_Init_1 */
  LoRaMacRegion_t region;
  bool adr_enable;
  int8_t tx_data_rate;
  int8_t tx_power;
  uint32_t rx1_delay;
  uint32_t join_rx1_delay;
  uint32_t join_rx2_delay;
  /* USER CODE END MX_LoRaWAN_Init_1 */
  SystemApp_Init();
  /* USER CODE BEGIN MX_LoRaWAN_Init_2 */

  APP_LOG(TS_OFF, VLEVEL_M, "\n\n----------- LoRaWAN End Device Template ----------------\n\n");

  /* USER CODE END MX_LoRaWAN_Init_2 */
  LoRaWAN_Init();
  /* USER CODE BEGIN MX_LoRaWAN_Init_3 */

  APP_LOG(TS_OFF, VLEVEL_M, "\n---- LoRaWAN Parameters ----\n");

  LmHandlerGetActiveRegion(&region);
  APP_LOG(TS_OFF, VLEVEL_M, "Region: %d\n", region);

  LmHandlerGetAdrEnable(&adr_enable);
  APP_LOG(TS_OFF, VLEVEL_M, "ADR Enable: %d\n", adr_enable);

  LmHandlerGetTxDatarate(&tx_data_rate);
  APP_LOG(TS_OFF, VLEVEL_M, "TX Data Rate: %d\n", tx_data_rate);

  LmHandlerGetTxPower(&tx_power);
  APP_LOG(TS_OFF, VLEVEL_M, "TX Power: %d\n", tx_power);

  LmHandlerGetJoinRx1Delay(&join_rx1_delay);
  APP_LOG(TS_OFF, VLEVEL_M, "Join RX1 Delay: %d\n", join_rx1_delay);

  LmHandlerGetJoinRx2Delay(&join_rx2_delay);
  APP_LOG(TS_OFF, VLEVEL_M, "Join RX2 Delay: %d\n", join_rx2_delay);

  LmHandlerGetRx1Delay(&rx1_delay);
  APP_LOG(TS_OFF, VLEVEL_M, "RX1 Delay: %d\n", rx1_delay);

  APP_LOG(TS_OFF, VLEVEL_M, "---- LoRaWAN Parameters ----\n\n");
  /* USER CODE END MX_LoRaWAN_Init_3 */
}

void MX_LoRaWAN_Process(void)
{
  /* USER CODE BEGIN MX_LoRaWAN_Process_1 */

  /* USER CODE END MX_LoRaWAN_Process_1 */
  UTIL_SEQ_Run(UTIL_SEQ_DEFAULT);
  /* USER CODE BEGIN MX_LoRaWAN_Process_2 */

  /* USER CODE END MX_LoRaWAN_Process_2 */
}

/* USER CODE BEGIN EF */

/* USER CODE END EF */

/* Private Functions Definition -----------------------------------------------*/
/* USER CODE BEGIN PrFD */

/* USER CODE END PrFD */
