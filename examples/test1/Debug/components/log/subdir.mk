################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
F:/stm32_cube_ide_source/cyt_rtos/components/log/log.c 

OBJS += \
./components/log/log.o 

C_DEPS += \
./components/log/log.d 


# Each subdirectory must supply rules for building sources it contributes
components/log/log.o: F:/stm32_cube_ide_source/cyt_rtos/components/log/log.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32L471xx -DDEBUG -c -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Inc -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I"F:/stm32_cube_ide_source/cyt_rtos/examples/../components/log" -I"F:/stm32_cube_ide_source/cyt_rtos/examples/../components/cyt_list" -I"F:/stm32_cube_ide_source/cyt_rtos/examples/../components/priv_os" -I"F:/stm32_cube_ide_source/cyt_rtos/examples/../components/register" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"components/log/log.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

