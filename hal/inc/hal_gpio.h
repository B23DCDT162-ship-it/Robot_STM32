#ifndef HAL_GPIO_H
#define HAL_GPIO_H

#include "hal_status.h"
#include "stm32f1xx_hal.h"

DRV_Status_t DRV_GPIO_Write(GPIO_TypeDef *port,
                            uint16_t pin,
                            GPIO_PinState state);

DRV_Status_t DRV_GPIO_Read(GPIO_TypeDef *port,
                           uint16_t pin,
                           GPIO_PinState *state);

DRV_Status_t DRV_GPIO_Toggle(GPIO_TypeDef *port,
                             uint16_t pin);

#endif
