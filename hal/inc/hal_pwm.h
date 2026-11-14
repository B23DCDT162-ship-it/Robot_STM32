#ifndef HAL_PWM_H
#define HAL_PWM_H

#include "hal_status.h"
#include "stm32f1xx_hal.h"

DRV_Status_t DRV_PWM_Start(TIM_HandleTypeDef *htim,
                           uint32_t channel);

DRV_Status_t DRV_PWM_Stop(TIM_HandleTypeDef *htim,
                          uint32_t channel);

DRV_Status_t DRV_PWM_SetDuty(TIM_HandleTypeDef *htim,
                             uint32_t channel,
                             uint8_t duty_percent);

#endif
