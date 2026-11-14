#ifndef HAL_STATUS_H
#define HAL_STATUS_H

/* Trang thai chung cho cac driver */

typedef enum {
    DRV_STATUS_OK = 0,          // Thanh cong
    DRV_STATUS_ERROR,           // Loi
    DRV_STATUS_BUSY,            // Dang ban
    DRV_STATUS_TIMEOUT,         // Qua thoi gian cho
    DRV_STATUS_INVALID_PARAM,   // Tham so khong hop le
    DRV_STATUS_NOT_READY        // Chua san sang
} DRV_Status_t;

#endif
