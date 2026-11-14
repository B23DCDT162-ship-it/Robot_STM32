#ifndef HAL_SENSOR_H
#define HAL_SENSOR_H

#include "hal_status.h"
#include "stm32f1xx_hal.h"

DRV_Status_t DRV_Sensor_ReadDistance(TIM_HandleTypeDef *htim,
                                     GPIO_TypeDef *trigger_port,
                                     uint16_t trigger_pin,
                                     GPIO_TypeDef *echo_port,
                                     uint16_t echo_pin,
                                     uint16_t *distance_cm,
                                     uint32_t timeout_ms);

#endif
