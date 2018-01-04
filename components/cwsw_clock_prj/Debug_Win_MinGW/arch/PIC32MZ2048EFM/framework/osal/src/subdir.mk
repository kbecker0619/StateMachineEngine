################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/osal/src/osal.c \
../arch/PIC32MZ2048EFM/framework/osal/src/osal_embos.c \
../arch/PIC32MZ2048EFM/framework/osal/src/osal_freertos.c \
../arch/PIC32MZ2048EFM/framework/osal/src/osal_freertos_v7xx.c \
../arch/PIC32MZ2048EFM/framework/osal/src/osal_openrtos.c \
../arch/PIC32MZ2048EFM/framework/osal/src/osal_openrtos_v7xx.c \
../arch/PIC32MZ2048EFM/framework/osal/src/osal_threadx.c \
../arch/PIC32MZ2048EFM/framework/osal/src/osal_ucos2.c \
../arch/PIC32MZ2048EFM/framework/osal/src/osal_ucos3.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/osal/src/osal.o \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_embos.o \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_freertos.o \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_freertos_v7xx.o \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_openrtos.o \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_openrtos_v7xx.o \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_threadx.o \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_ucos2.o \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_ucos3.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/osal/src/osal.d \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_embos.d \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_freertos.d \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_freertos_v7xx.d \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_openrtos.d \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_openrtos_v7xx.d \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_threadx.d \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_ucos2.d \
./arch/PIC32MZ2048EFM/framework/osal/src/osal_ucos3.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/osal/src/%.o: ../arch/PIC32MZ2048EFM/framework/osal/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


