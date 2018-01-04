################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_bartlett.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_blackman.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_cosine.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_hamm.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_hann.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_bartlett.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_blackman.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_cosine.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_hamm.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_hann.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_kaiser.c \
../arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_kaiser.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_bartlett.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_blackman.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_cosine.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_hamm.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_hann.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_bartlett.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_blackman.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_cosine.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_hamm.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_hann.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_kaiser.o \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_kaiser.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_bartlett.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_blackman.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_cosine.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_hamm.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_hann.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_bartlett.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_blackman.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_cosine.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_hamm.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_hann.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_init_kaiser.d \
./arch/PIC32MZ2048EFM/framework/math/dsp/src/dsp_transform_window_kaiser.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/math/dsp/src/%.o: ../arch/PIC32MZ2048EFM/framework/math/dsp/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


