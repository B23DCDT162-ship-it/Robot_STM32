#ifndef HAL_UART_H
#define HAL_UART_H

#include "hal_status.h"
#include "stm32f1xx_hal.h"

DRV_Status_t DRV_UART_Transmit(UART_HandleTypeDef *huart,
                               const uint8_t *data,
                               uint16_t size,
                               uint32_t timeout);

DRV_Status_t DRV_UART_Receive(UART_HandleTypeDef *huart,
                              uint8_t *data,
                              uint16_t size,
                              uint32_t timeout);

DRV_Status_t DRV_UART_Transmit_DMA(UART_HandleTypeDef *huart,
                                   uint8_t *data,
                                   uint16_t size);

#endif
