################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/WiFi_MW.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/WiFi_commands.c \
../arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/wifi_flash_use.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/WiFi_MW.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/WiFi_commands.o \
./arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/wifi_flash_use.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/WiFi_MW.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/WiFi_commands.d \
./arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/wifi_flash_use.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/%.o: ../arch/PIC32MZ2048EFM/framework/driver/wifi/pic32wk/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


