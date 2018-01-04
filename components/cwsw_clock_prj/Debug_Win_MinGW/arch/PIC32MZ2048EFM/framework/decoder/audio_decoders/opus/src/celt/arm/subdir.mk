################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/arm_celt_map.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/armcpu.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_ne10_fft.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_ne10_mdct.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_neon_intr.c 

S_UPPER_SRCS += \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_pitch_xcorr_arm-gnu.S 

OBJS += \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/arm_celt_map.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/armcpu.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_ne10_fft.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_ne10_mdct.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_neon_intr.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_pitch_xcorr_arm-gnu.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/arm_celt_map.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/armcpu.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_ne10_fft.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_ne10_mdct.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/celt_neon_intr.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/%.o: ../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/%.o: ../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/arm/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


