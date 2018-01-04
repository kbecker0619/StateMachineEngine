################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_cli.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_config.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_connmgr.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_events.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_iwpriv.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_main.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_misc.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_osal.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_cli.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_config.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_connmgr.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_events.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_iwpriv.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_main.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_misc.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_osal.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_cli.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_config.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_connmgr.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_events.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_iwpriv.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_main.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_misc.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/wdrv_mrf24wn_osal.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/%.o: ../arch/PIC32MZ2048EFM/framework/driver/wifi/mrf24wn/wireless_driver/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


