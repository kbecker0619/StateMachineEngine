################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/drv_enc28j60_api.c \
../arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/drv_enc28j60_main_state.c \
../arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/drv_enc28j60_utils.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/drv_enc28j60_api.o \
./arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/drv_enc28j60_main_state.o \
./arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/drv_enc28j60_utils.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/drv_enc28j60_api.d \
./arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/drv_enc28j60_main_state.d \
./arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/drv_enc28j60_utils.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/%.o: ../arch/PIC32MZ2048EFM/framework/driver/enc28j60/src/dynamic/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


