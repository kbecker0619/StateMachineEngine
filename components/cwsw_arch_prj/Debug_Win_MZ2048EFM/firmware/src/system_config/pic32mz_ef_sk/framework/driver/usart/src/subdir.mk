################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/drv_usart_mapping.c \
../firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/drv_usart_static.c \
../firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/drv_usart_static_byte_model.c 

OBJS += \
./firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/drv_usart_mapping.o \
./firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/drv_usart_static.o \
./firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/drv_usart_static_byte_model.o 

C_DEPS += \
./firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/drv_usart_mapping.d \
./firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/drv_usart_static.d \
./firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/drv_usart_static_byte_model.d 


# Each subdirectory must supply rules for building sources it contributes
firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/%.o: ../firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D"XPRJ_Debug_Win_MZ2048EFM=1" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_arch/i386" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


