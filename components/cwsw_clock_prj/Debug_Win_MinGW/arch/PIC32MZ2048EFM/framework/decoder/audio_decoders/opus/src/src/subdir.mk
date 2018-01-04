################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/analysis.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/mlp.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/mlp_data.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_compare.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_decoder.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_demo.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_encoder.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_multistream.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_multistream_decoder.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_multistream_encoder.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/repacketizer.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/repacketizer_demo.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/analysis.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/mlp.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/mlp_data.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_compare.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_decoder.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_demo.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_encoder.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_multistream.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_multistream_decoder.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_multistream_encoder.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/repacketizer.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/repacketizer_demo.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/analysis.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/mlp.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/mlp_data.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_compare.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_decoder.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_demo.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_encoder.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_multistream.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_multistream_decoder.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/opus_multistream_encoder.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/repacketizer.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/repacketizer_demo.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/%.o: ../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


