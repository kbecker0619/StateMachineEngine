################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ut/cwsw_lib_test.c 

OBJS += \
./ut/cwsw_lib_test.o 

C_DEPS += \
./ut/cwsw_lib_test.d 


# Each subdirectory must supply rules for building sources it contributes
ut/%.o: ../ut/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_XPRJ_Debug_Linux_GCC=1" -I"/home/kbecker/_Projects/workspace/PersonalDev/cwsw_lib/components/cwsw_lib_prj/cwsw_lib/include" -I"/home/kbecker/_Projects/workspace/PersonalDev/cwsw_lib/components/cwsw_lib_prj/ut" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


