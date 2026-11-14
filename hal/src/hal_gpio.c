#include "hal_gpio.h"

DRV_Status_t DRV_GPIO_Write(GPIO_TypeDef *port,
                            uint16_t pin,
                            GPIO_PinState state)
{
    if (port == NULL || pin == 0)
    {
        return DRV_STATUS_INVALID_PARAM;
    }

    HAL_GPIO_WritePin(port, pin, state);

    return DRV_STATUS_OK;
}

DRV_Status_t DRV_GPIO_Read(GPIO_TypeDef *port,
                           uint16_t pin,
                           GPIO_PinState *state)
{
    if (port == NULL || pin == 0 || state == NULL)
    {
        return DRV_STATUS_INVALID_PARAM;
    }

    *state = HAL_GPIO_ReadPin(port, pin);

    return DRV_STATUS_OK;
}

DRV_Status_t DRV_GPIO_Toggle(GPIO_TypeDef *port,
                             uint16_t pin)
{
    if (port == NULL || pin == 0)
    {
        return DRV_STATUS_INVALID_PARAM;
    }

    HAL_GPIO_TogglePin(port, pin);

    return DRV_STATUS_OK;
}
