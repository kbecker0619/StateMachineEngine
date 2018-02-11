################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../cwsw_arch/MPC57xx/system/int/MPC57xx__Interrupt_Init.c \
../cwsw_arch/MPC57xx/system/int/Vector.c \
../cwsw_arch/MPC57xx/system/int/intc_SW_mode_isr_vectors_MPC5748G.c \
../cwsw_arch/MPC57xx/system/int/pit.c 

S_UPPER_SRCS += \
../cwsw_arch/MPC57xx/system/int/intc_sw_handlers.S 

OBJS += \
./cwsw_arch/MPC57xx/system/int/MPC57xx__Interrupt_Init.o \
./cwsw_arch/MPC57xx/system/int/Vector.o \
./cwsw_arch/MPC57xx/system/int/intc_SW_mode_isr_vectors_MPC5748G.o \
./cwsw_arch/MPC57xx/system/int/intc_sw_handlers.o \
./cwsw_arch/MPC57xx/system/int/pit.o 

C_DEPS += \
./cwsw_arch/MPC57xx/system/int/MPC57xx__Interrupt_Init.d \
./cwsw_arch/MPC57xx/system/int/Vector.d \
./cwsw_arch/MPC57xx/system/int/intc_SW_mode_isr_vectors_MPC5748G.d \
./cwsw_arch/MPC57xx/system/int/pit.d 


# Each subdirectory must supply rules for building sources it contributes
cwsw_arch/MPC57xx/system/int/%.o: ../cwsw_arch/MPC57xx/system/int/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D"XPRJ_Debug_Win_MZ2048EFM=1" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_arch/i386" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cwsw_arch/MPC57xx/system/int/%.o: ../cwsw_arch/MPC57xx/system/int/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_arch/i386" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


