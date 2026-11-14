
#ifndef APP_IPC_H
#define APP_IPC_H

#include <stdint.h>

/* ==============================
   1. DU LIEU CAM BIEN
   ============================== */

typedef struct {
    uint16_t distance_cm;
    int32_t encoder_left;
    int32_t encoder_right;
} SensorData_t;


/* ==============================
   2. LENH DIEU KHIEN DONG CO
   ============================== */

typedef struct {
    int16_t speed_left;
    int16_t speed_right;
} MotorCommand_t;


/* ==============================
   3. LENH BLUETOOTH
   ============================== */

typedef enum {
    CMD_STOP = 0,
    CMD_FORWARD,
    CMD_BACKWARD,
    CMD_LEFT,
    CMD_RIGHT
} RobotCommand_t;


/* ==============================
   4. DU LIEU GIAO TIEP
   ============================== */

typedef struct {
    RobotCommand_t command;
    uint8_t speed;
} CommData_t;

#endif
