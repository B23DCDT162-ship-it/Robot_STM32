#ifndef HAL_ENCODER_H
#define HAL_ENCODER_H

#include "hal_status.h"
#include "stm32f1xx_hal.h"

DRV_Status_t DRV_Encoder_Start(TIM_HandleTypeDef *htim);

DRV_Status_t DRV_Encoder_GetCount(TIM_HandleTypeDef *htim,
                                  uint16_t *count);

DRV_Status_t DRV_Encoder_Reset(TIM_HandleTypeDef *htim);

#endif
