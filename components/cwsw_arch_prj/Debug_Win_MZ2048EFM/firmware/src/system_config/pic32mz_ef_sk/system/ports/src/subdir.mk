################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../firmware/src/system_config/pic32mz_ef_sk/system/ports/src/sys_ports_static.c 

OBJS += \
./firmware/src/system_config/pic32mz_ef_sk/system/ports/src/sys_ports_static.o 

C_DEPS += \
./firmware/src/system_config/pic32mz_ef_sk/system/ports/src/sys_ports_static.d 


# Each subdirectory must supply rules for building sources it contributes
firmware/src/system_config/pic32mz_ef_sk/system/ports/src/%.o: ../firmware/src/system_config/pic32mz_ef_sk/system/ports/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D"XPRJ_Debug_Win_MZ2048EFM=1" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_arch/i386" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


