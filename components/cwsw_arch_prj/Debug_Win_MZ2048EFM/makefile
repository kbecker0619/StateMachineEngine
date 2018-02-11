################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ut/subdir.mk
-include firmware/src/system_config/pic32mz_ef_sk/system/ports/src/subdir.mk
-include firmware/src/system_config/pic32mz_ef_sk/system/devcon/src/subdir.mk
-include firmware/src/system_config/pic32mz_ef_sk/system/clk/src/subdir.mk
-include firmware/src/system_config/pic32mz_ef_sk/framework/system/ports/src/subdir.mk
-include firmware/src/system_config/pic32mz_ef_sk/framework/system/devcon/src/subdir.mk
-include firmware/src/system_config/pic32mz_ef_sk/framework/system/clk/src/subdir.mk
-include firmware/src/system_config/pic32mz_ef_sk/framework/driver/usart/src/subdir.mk
-include firmware/src/system_config/pic32mz_ef_sk/bsp/subdir.mk
-include firmware/src/system_config/pic32mz_ef_sk/subdir.mk
-include firmware/src/subdir.mk
-include firmware/cwsw_arch.X/build/pic32mz_ef_sk/production/_ext/849053718/subdir.mk
-include firmware/cwsw_arch.X/build/pic32mz_ef_sk/production/_ext/716819092/subdir.mk
-include firmware/cwsw_arch.X/build/pic32mz_ef_sk/production/_ext/378805689/subdir.mk
-include firmware/cwsw_arch.X/build/pic32mz_ef_sk/production/_ext/354129722/subdir.mk
-include firmware/cwsw_arch.X/build/pic32mz_ef_sk/production/_ext/1868830280/subdir.mk
-include firmware/cwsw_arch.X/build/pic32mz_ef_sk/production/_ext/1360937237/subdir.mk
-include firmware/cwsw_arch.X/build/pic32mz_ef_sk/production/_ext/1114424708/subdir.mk
-include firmware/cwsw_arch.X/build/pic32mz_ef_sk/production/_ext/1009894383/subdir.mk
-include cwsw_lib/src/subdir.mk
-include cwsw_arch/pic32mz/peripheral.save/ports/subdir.mk
-include cwsw_arch/pic32mz/app/subdir.mk
-include cwsw_arch/pic32mz/subdir.mk
-include cwsw_arch/i386/system/ports/src/subdir.mk
-include cwsw_arch/i386/system/clk/src/subdir.mk
-include cwsw_arch/i386/src/subdir.mk
-include cwsw_arch/i386/peripheral/ports/subdir.mk
-include cwsw_arch/MPC57xx/system/int/subdir.mk
-include cwsw_arch/MPC57xx/system/clk/subdir.mk
-include cwsw_arch/MPC57xx/src/subdir.mk
-include cwsw_arch/MPC57xx/Project_Settings/Startup_Code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: cwsw_arch

# Tool invocations
cwsw_arch: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc  -o "cwsw_arch" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) cwsw_arch
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
