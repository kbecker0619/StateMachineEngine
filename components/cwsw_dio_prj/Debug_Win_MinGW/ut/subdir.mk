################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ut/cwsw_dio_test.c 

OBJS += \
./ut/cwsw_dio_test.o 

C_DEPS += \
./ut/cwsw_dio_test.d 


# Each subdirectory must supply rules for building sources it contributes
ut/%.o: ../ut/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -DUSE_SIMULATED_EVENTS=0 -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_arch/i386" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_board/none" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/3rdparty/cwsw/gen" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/3rdparty/cwsw/gen/bsp" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/3rdparty/cwsw/lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_bsp" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


