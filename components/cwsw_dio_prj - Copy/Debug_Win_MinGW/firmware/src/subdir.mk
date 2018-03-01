################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../firmware/src/app.c \
../firmware/src/main.c 

OBJS += \
./firmware/src/app.o \
./firmware/src/main.o 

C_DEPS += \
./firmware/src/app.d \
./firmware/src/main.d 


# Each subdirectory must supply rules for building sources it contributes
firmware/src/%.o: ../firmware/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/app/system_config" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/app" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


