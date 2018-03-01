################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../cwsw_arch/pic32mz/system/devcon/src/sys_devcon.c \
../cwsw_arch/pic32mz/system/devcon/src/sys_devcon_none.c 

OBJS += \
./cwsw_arch/pic32mz/system/devcon/src/sys_devcon.o \
./cwsw_arch/pic32mz/system/devcon/src/sys_devcon_none.o 

C_DEPS += \
./cwsw_arch/pic32mz/system/devcon/src/sys_devcon.d \
./cwsw_arch/pic32mz/system/devcon/src/sys_devcon_none.d 


# Each subdirectory must supply rules for building sources it contributes
cwsw_arch/pic32mz/system/devcon/src/%.o: ../cwsw_arch/pic32mz/system/devcon/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -DUSE_SIMULATED_EVENTS=0 -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_lib/include" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/ut" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_bsp/include" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_arch/i386" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_board/none" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


