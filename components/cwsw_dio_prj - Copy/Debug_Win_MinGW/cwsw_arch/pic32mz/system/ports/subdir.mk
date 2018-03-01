################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../cwsw_arch/pic32mz/system/ports/sys_ports_pic32mz.c 

OBJS += \
./cwsw_arch/pic32mz/system/ports/sys_ports_pic32mz.o 

C_DEPS += \
./cwsw_arch/pic32mz/system/ports/sys_ports_pic32mz.d 


# Each subdirectory must supply rules for building sources it contributes
cwsw_arch/pic32mz/system/ports/%.o: ../cwsw_arch/pic32mz/system/ports/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -DUSE_SIMULATED_EVENTS=0 -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_lib/include" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/ut" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_bsp/include" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_arch/i386" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_board/none" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


