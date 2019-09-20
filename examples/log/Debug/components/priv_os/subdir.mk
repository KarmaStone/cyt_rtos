################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
F:/stm32_cube_ide_source/cyt_rtos/components/priv_os/priv_os.c 

OBJS += \
./components/priv_os/priv_os.o 

C_DEPS += \
./components/priv_os/priv_os.d 


# Each subdirectory must supply rules for building sources it contributes
components/priv_os/priv_os.o: F:/stm32_cube_ide_source/cyt_rtos/components/priv_os/priv_os.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 '-DUSE_HAL_UART_REGISTER_CALLBACKS=1' -DUSE_HAL_DRIVER -DSTM32L471xx -DDEBUG -c -I../Middlewares/Third_Party/FreeRTOS/Source/include -I"F:/stm32_cube_ide_source/cyt_rtos/components/register" -I"F:/stm32_cube_ide_source/cyt_rtos/components/priv_os" -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Inc -I"F:/stm32_cube_ide_source/cyt_rtos/components/log" -I../Drivers/CMSIS/Include -I"F:/stm32_cube_ide_source/cyt_rtos/components/cyt_list" -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"components/priv_os/priv_os.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

