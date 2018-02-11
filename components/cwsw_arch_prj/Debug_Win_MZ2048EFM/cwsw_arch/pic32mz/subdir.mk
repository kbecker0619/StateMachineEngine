################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../cwsw_arch/pic32mz/cwsw_arch.c 

OBJS += \
./cwsw_arch/pic32mz/cwsw_arch.o 

C_DEPS += \
./cwsw_arch/pic32mz/cwsw_arch.d 


# Each subdirectory must supply rules for building sources it contributes
cwsw_arch/pic32mz/%.o: ../cwsw_arch/pic32mz/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D"XPRJ_Debug_Win_MZ2048EFM=1" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_arch/i386" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


