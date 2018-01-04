################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/celt_lpc_sse.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/pitch_sse.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/pitch_sse2.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/pitch_sse4_1.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/x86_celt_map.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/x86cpu.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/celt_lpc_sse.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/pitch_sse.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/pitch_sse2.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/pitch_sse4_1.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/x86_celt_map.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/x86cpu.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/celt_lpc_sse.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/pitch_sse.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/pitch_sse2.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/pitch_sse4_1.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/x86_celt_map.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/x86cpu.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/%.o: ../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/x86/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


