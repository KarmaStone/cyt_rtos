#ifndef __SERIAL1_H
#define __SERIAL1_H

#ifdef __cplusplus
extern "C"
{
#endif

  /**
  * @}
  */
#include <stdbool.h>
#include "stm32l4xx_hal.h"


  /**
  * @}
  */
  extern UART_HandleTypeDef huart1;

/**
  * @}
  */

/**
  * @}
  */
#define DEBUG_RX_MAX 64

  /**
  * @}
  */
extern void serial1_hal_init(void);
#ifdef __cplusplus
}
#endif

#endif /* __SERIAL1_H */
