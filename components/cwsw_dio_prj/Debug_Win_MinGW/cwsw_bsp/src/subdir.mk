################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../cwsw_bsp/src/cwsw_bsp.c 

OBJS += \
./cwsw_bsp/src/cwsw_bsp.o 

C_DEPS += \
./cwsw_bsp/src/cwsw_bsp.d 


# Each subdirectory must supply rules for building sources it contributes
cwsw_bsp/src/%.o: ../cwsw_bsp/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_arch" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_arch/pic32mz/app/system_config" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_arch/pic32mz/framework/system/clk" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_arch/pic32mz/framework/system/tmr" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_arch/pic32mz/peripheral" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_arch/pic32mz/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_board" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


