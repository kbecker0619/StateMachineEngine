################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CPUPCTest.c \
../arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CRCFlashTest.c \
../arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CRCbyte.c \
../arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_ClockLineFrequencyTest.c \
../arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_ClockTest.c \
../arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMCheckerBoardTest.c \
../arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMMarchBTest.c \
../arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMMarchCStackTest.c \
../arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMMarchCTest.c 

S_UPPER_SRCS += \
../arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CPURegistersTest.S 

OBJS += \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CPUPCTest.o \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CPURegistersTest.o \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CRCFlashTest.o \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CRCbyte.o \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_ClockLineFrequencyTest.o \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_ClockTest.o \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMCheckerBoardTest.o \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMMarchBTest.o \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMMarchCStackTest.o \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMMarchCTest.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CPUPCTest.d \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CRCFlashTest.d \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_CRCbyte.d \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_ClockLineFrequencyTest.d \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_ClockTest.d \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMCheckerBoardTest.d \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMMarchBTest.d \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMMarchCStackTest.d \
./arch/PIC32MZ2048EFM/framework/classb/src/CLASSB_RAMMarchCTest.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/classb/src/%.o: ../arch/PIC32MZ2048EFM/framework/classb/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

arch/PIC32MZ2048EFM/framework/classb/src/%.o: ../arch/PIC32MZ2048EFM/framework/classb/src/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


