################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_cortex.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_dma.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_exti.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash_ex.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_gpio.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c_ex.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr_ex.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc.c \
../Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc_ex.c 

OBJS += \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_cortex.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_dma.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_exti.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash_ex.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_gpio.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c_ex.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr_ex.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc.o \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc_ex.o 

C_DEPS += \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_cortex.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_dma.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_exti.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash_ex.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_gpio.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c_ex.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr_ex.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc.d \
./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc_ex.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/STM32F0xx_HAL_Driver/Src/%.o Drivers/STM32F0xx_HAL_Driver/Src/%.su: ../Drivers/STM32F0xx_HAL_Driver/Src/%.c Drivers/STM32F0xx_HAL_Driver/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F072xB -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/MONSTER/STM32CubeIDE/workspace_1.11.0/bare_metal/CustomGPIO/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-STM32F0xx_HAL_Driver-2f-Src

clean-Drivers-2f-STM32F0xx_HAL_Driver-2f-Src:
	-$(RM) ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_cortex.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_cortex.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_cortex.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_dma.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_dma.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_dma.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_exti.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_exti.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_exti.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash_ex.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash_ex.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_flash_ex.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_gpio.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_gpio.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_gpio.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c_ex.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c_ex.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_i2c_ex.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr_ex.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr_ex.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_pwr_ex.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc.su ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc_ex.d ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc_ex.o ./Drivers/STM32F0xx_HAL_Driver/Src/stm32f0xx_hal_rcc_ex.su

.PHONY: clean-Drivers-2f-STM32F0xx_HAL_Driver-2f-Src
