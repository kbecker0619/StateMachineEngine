################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../firmware/src/system_config/pic32mz_ef_sk/fassert.c \
../firmware/src/system_config/pic32mz_ef_sk/system_exceptions.c \
../firmware/src/system_config/pic32mz_ef_sk/system_init.c \
../firmware/src/system_config/pic32mz_ef_sk/system_interrupt.c \
../firmware/src/system_config/pic32mz_ef_sk/system_tasks.c 

OBJS += \
./firmware/src/system_config/pic32mz_ef_sk/fassert.o \
./firmware/src/system_config/pic32mz_ef_sk/system_exceptions.o \
./firmware/src/system_config/pic32mz_ef_sk/system_init.o \
./firmware/src/system_config/pic32mz_ef_sk/system_interrupt.o \
./firmware/src/system_config/pic32mz_ef_sk/system_tasks.o 

C_DEPS += \
./firmware/src/system_config/pic32mz_ef_sk/fassert.d \
./firmware/src/system_config/pic32mz_ef_sk/system_exceptions.d \
./firmware/src/system_config/pic32mz_ef_sk/system_init.d \
./firmware/src/system_config/pic32mz_ef_sk/system_interrupt.d \
./firmware/src/system_config/pic32mz_ef_sk/system_tasks.d 


# Each subdirectory must supply rules for building sources it contributes
firmware/src/system_config/pic32mz_ef_sk/%.o: ../firmware/src/system_config/pic32mz_ef_sk/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D"XPRJ_Debug_Win_MZ2048EFM=1" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_arch/i386" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


