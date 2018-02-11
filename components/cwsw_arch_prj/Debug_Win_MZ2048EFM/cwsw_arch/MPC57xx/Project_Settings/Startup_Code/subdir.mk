################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../cwsw_arch/MPC57xx/Project_Settings/Startup_Code/startup.S 

OBJS += \
./cwsw_arch/MPC57xx/Project_Settings/Startup_Code/startup.o 


# Each subdirectory must supply rules for building sources it contributes
cwsw_arch/MPC57xx/Project_Settings/Startup_Code/%.o: ../cwsw_arch/MPC57xx/Project_Settings/Startup_Code/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_arch_prj/cwsw_arch/i386" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


