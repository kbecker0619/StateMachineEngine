################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_cwrs32.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_dft.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_entropy.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_laplace.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_mathops.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_mdct.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_rotation.c \
../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_types.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_cwrs32.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_dft.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_entropy.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_laplace.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_mathops.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_mdct.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_rotation.o \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_types.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_cwrs32.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_dft.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_entropy.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_laplace.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_mathops.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_mdct.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_rotation.d \
./arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/test_unit_types.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/%.o: ../arch/PIC32MZ2048EFM/framework/decoder/audio_decoders/opus/src/celt/tests/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


