################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_autobaud.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_bccmd.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_exec_script.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_dsp_script__PB_109_DSP_rev8.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_101_CSR8811_CSP28_UART.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_109_CSR8811_REV16.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_173_CSR8X11_REV1.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_27_R20_BC6ROM_A04.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_90_REV6.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_init.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_patch_controller.c \
../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_set_ps_vars.c 

OBJS += \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_autobaud.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_bccmd.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_exec_script.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_dsp_script__PB_109_DSP_rev8.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_101_CSR8811_CSP28_UART.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_109_CSR8811_REV16.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_173_CSR8X11_REV1.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_27_R20_BC6ROM_A04.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_90_REV6.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_init.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_patch_controller.o \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_set_ps_vars.o 

C_DEPS += \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_autobaud.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_bccmd.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_exec_script.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_dsp_script__PB_109_DSP_rev8.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_101_CSR8811_CSP28_UART.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_109_CSR8811_REV16.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_173_CSR8X11_REV1.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_27_R20_BC6ROM_A04.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_get_script__PB_90_REV6.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_init.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_patch_controller.d \
./arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/btx_csr_set_ps_vars.d 


# Each subdirectory must supply rules for building sources it contributes
arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/%.o: ../arch/PIC32MZ2048EFM/framework/bluetooth/cdbt/extra/csr/Driver/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=gnu11 -D"XPRJ_Debug_Win_MinGW=1" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_lib/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/ut" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_clock/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/cwsw_bsp/include" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/framework/system/common" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/bsp" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config/framework/system/devcon" -I"C:/Users/kbecker/_projects/PersonalDev/cwsw_lib/components/cwsw_clock_prj/arch/PIC32MZ2048EFM/app/system_config" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


