################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/pic32mz/framework/system/int/src/sys_int_pic32c.c 

OBJS += \
./arch/pic32mz/framework/system/int/src/sys_int_pic32c.o 

C_DEPS += \
./arch/pic32mz/framework/system/int/src/sys_int_pic32c.d 


# Each subdirectory must supply rules for building sources it contributes
arch/pic32mz/framework/system/int/src/%.o: ../arch/pic32mz/framework/system/int/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/app/system_config" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/app" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj//board" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

