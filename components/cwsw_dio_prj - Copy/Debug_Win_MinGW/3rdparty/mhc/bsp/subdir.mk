################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../3rdparty/mhc/bsp/bsp.c 

OBJS += \
./3rdparty/mhc/bsp/bsp.o 

C_DEPS += \
./3rdparty/mhc/bsp/bsp.d 


# Each subdirectory must supply rules for building sources it contributes
3rdparty/mhc/bsp/%.o: ../3rdparty/mhc/bsp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -DUSE_SIMULATED_EVENTS=0 -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_lib/include" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/ut" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_bsp/include" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_arch/i386" -I"E:/_Projects/PersonalDev/components/cwsw_dio_prj/cwsw_board/none" -I"E:\_Projects\PersonalDev\components\cwsw_dio_prj\3rdparty\cwsw\bsp" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


