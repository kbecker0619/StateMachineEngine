################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream.c \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_i2c.c \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_pic32c.c \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_sdcard.c \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_sdcard_pic32c.c \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_udp.c \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usart.c \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usart_pic32c.c \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usb_hid.c \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usb_host.c \
../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usb_host_pic32c.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream.o \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_i2c.o \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_pic32c.o \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_sdcard.o \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_sdcard_pic32c.o \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_udp.o \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usart.o \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usart_pic32c.o \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usb_hid.o \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usb_host.o \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usb_host_pic32c.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream.d \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_i2c.d \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_pic32c.d \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_sdcard.d \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_sdcard_pic32c.d \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_udp.d \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usart.d \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usart_pic32c.d \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usb_hid.d \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usb_host.d \
./arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/datastream_usb_host_pic32c.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/%.o: ../arch/PIC32MZ2048EFM/framework/bootloader/src/datastream/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


