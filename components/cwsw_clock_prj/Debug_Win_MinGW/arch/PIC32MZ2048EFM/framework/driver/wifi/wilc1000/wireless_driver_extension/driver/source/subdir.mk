################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_hif.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_ota.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_periph.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_wifi.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmasic.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmbus.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmdrv.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmspi.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_hif.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_ota.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_periph.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_wifi.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmasic.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmbus.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmdrv.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmspi.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_hif.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_ota.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_periph.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/m2m_wifi.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmasic.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmbus.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmdrv.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/nmspi.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/%.o: ../arch/PIC32MZ2048EFM/framework/driver/wifi/wilc1000/wireless_driver_extension/driver/source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


