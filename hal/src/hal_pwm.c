#include "hal_pwm.h"

DRV_Status_t DRV_PWM_Start(TIM_HandleTypeDef *htim,
                           uint32_t channel)
{
    if (htim == NULL)
    {
        return DRV_STATUS_INVALID_PARAM;
    }

    if (HAL_TIM_PWM_Start(htim, channel) != HAL_OK)
    {
        return DRV_STATUS_ERROR;
    }

    return DRV_STATUS_OK;
}

DRV_Status_t DRV_PWM_Stop(TIM_HandleTypeDef *htim,
                          uint32_t channel)
{
    if (htim == NULL)
    {
        return DRV_STATUS_INVALID_PARAM;
    }

    if (HAL_TIM_PWM_Stop(htim, channel) != HAL_OK)
    {
        return DRV_STATUS_ERROR;
    }

    return DRV_STATUS_OK;
}

DRV_Status_t DRV_PWM_SetDuty(TIM_HandleTypeDef *htim,
                             uint32_t channel,
                             uint8_t duty_percent)
{
    uint32_t arr;
    uint32_t pulse;

    if (htim == NULL || duty_percent > 100)
    {
        return DRV_STATUS_INVALID_PARAM;
    }

    arr = __HAL_TIM_GET_AUTORELOAD(htim);

    pulse = ((arr + 1U) * duty_percent) / 100U;

    __HAL_TIM_SET_COMPARE(htim, channel, pulse);

    return DRV_STATUS_OK;
}
