################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_ble.c \
../arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_command_decode.c \
../arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_command_send.c \
../arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_gpio.c \
../arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_line_in.c \
../arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_sha1.c \
../arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_uart.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_ble.o \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_command_decode.o \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_command_send.o \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_gpio.o \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_line_in.o \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_sha1.o \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_uart.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_ble.d \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_command_decode.d \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_command_send.d \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_gpio.d \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_line_in.d \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_sha1.d \
./arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/drv_bm64_uart.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/%.o: ../arch/PIC32MZ2048EFM/framework/driver/bluetooth/bm64/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


