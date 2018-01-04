################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/bitmath.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/bitreader.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/cpu.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/crc.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/fixed.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/float.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/format.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/lpc.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/main.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/md5.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/memory.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/stream_decoder.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/bitmath.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/bitreader.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/cpu.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/crc.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/fixed.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/float.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/format.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/lpc.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/main.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/md5.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/memory.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/stream_decoder.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/bitmath.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/bitreader.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/cpu.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/crc.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/fixed.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/float.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/format.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/lpc.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/main.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/md5.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/memory.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/stream_decoder.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/%.o: ../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/flac/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


