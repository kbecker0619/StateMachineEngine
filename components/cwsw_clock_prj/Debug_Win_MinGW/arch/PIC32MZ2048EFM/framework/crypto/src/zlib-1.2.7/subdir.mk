################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/adler32.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/compress.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/crc32.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/deflate.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzclose.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzlib.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzread.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzwrite.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/infback.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/inffast.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/inflate.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/inftrees.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/trees.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/uncompr.c \
../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/zutil.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/adler32.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/compress.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/crc32.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/deflate.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzclose.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzlib.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzread.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzwrite.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/infback.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/inffast.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/inflate.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/inftrees.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/trees.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/uncompr.o \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/zutil.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/adler32.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/compress.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/crc32.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/deflate.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzclose.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzlib.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzread.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/gzwrite.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/infback.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/inffast.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/inflate.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/inftrees.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/trees.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/uncompr.d \
./arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/zutil.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/%.o: ../arch/PIC32MZ2048EFM/framework/crypto/src/zlib-1.2.7/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


