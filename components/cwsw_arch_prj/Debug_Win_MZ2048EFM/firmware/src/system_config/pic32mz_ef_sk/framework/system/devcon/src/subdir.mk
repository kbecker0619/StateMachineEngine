################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/sys_devcon.c \
../firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/sys_devcon_pic32mz.c 

S_UPPER_SRCS += \
../firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/sys_devcon_cache_pic32mz.S 

OBJS += \
./firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/sys_devcon.o \
./firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/sys_devcon_cache_pic32mz.o \
./firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/sys_devcon_pic32mz.o 

C_DEPS += \
./firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/sys_devcon.d \
./firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/sys_devcon_pic32mz.d 


# Each subdirectory must supply rules for building sources it contributes
firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/%.o: ../firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D"XPRJ_Debug_Win_MZ2048EFM=1" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_arch/i386" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/%.o: ../firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_arch/i386" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


