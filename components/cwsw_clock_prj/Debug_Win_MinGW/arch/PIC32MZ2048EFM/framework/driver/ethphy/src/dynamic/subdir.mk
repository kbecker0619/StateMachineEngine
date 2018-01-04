################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_ethphy.c \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_dp83640.c \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_dp83848.c \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_ip101gr.c \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_ksz8041.c \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_ksz8061.c \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc8700.c \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc8720.c \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc8740.c \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc9303.c \
../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc9303_cmd.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_ethphy.o \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_dp83640.o \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_dp83848.o \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_ip101gr.o \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_ksz8041.o \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_ksz8061.o \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc8700.o \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc8720.o \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc8740.o \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc9303.o \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc9303_cmd.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_ethphy.d \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_dp83640.d \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_dp83848.d \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_ip101gr.d \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_ksz8041.d \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_ksz8061.d \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc8700.d \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc8720.d \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc8740.d \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc9303.d \
./arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/drv_extphy_smsc9303_cmd.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/%.o: ../arch/PIC32MZ2048EFM/framework/driver/ethphy/src/dynamic/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


