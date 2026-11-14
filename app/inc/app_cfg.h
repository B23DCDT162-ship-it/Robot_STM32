
#ifndef APP_CFG_H
#define APP_CFG_H

/* =================================
   CAU HINH TASK SENSOR
   ================================= */

#define SENSOR_TASK_PRIORITY       2
#define SENSOR_TASK_STACK_SIZE     256
#define SENSOR_TASK_PERIOD_MS      50


/* =================================
   CAU HINH TASK MOTOR
   ================================= */

#define MOTOR_TASK_PRIORITY        3
#define MOTOR_TASK_STACK_SIZE      256
#define MOTOR_TASK_PERIOD_MS      10


/* =================================
   CAU HINH TASK COMM
   ================================= */

#define COMM_TASK_PRIORITY         1
#define COMM_TASK_STACK_SIZE       256
#define COMM_TASK_PERIOD_MS       20


/* =================================
   CAU HINH QUEUE
   ================================= */

#define SENSOR_QUEUE_LENGTH        5
#define MOTOR_QUEUE_LENGTH         5
#define COMM_QUEUE_LENGTH          5

#endif
