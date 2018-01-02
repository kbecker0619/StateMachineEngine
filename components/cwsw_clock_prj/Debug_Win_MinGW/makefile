################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ut/subdir.mk
-include cwsw_lib/src/subdir.mk
-include cwsw_clock/src/subdir.mk
-include cwsw_bsp/src/subdir.mk
-include arch/PIC32MZ2048EFM/framework/system/tmr/src/subdir.mk
-include arch/PIC32MZ2048EFM/framework/system/int/src/subdir.mk
-include arch/PIC32MZ2048EFM/framework/system/devcon/src/subdir.mk
-include arch/PIC32MZ2048EFM/framework/system/clk/src/subdir.mk
-include arch/PIC32MZ2048EFM/app/system_config/bsp/subdir.mk
-include arch/PIC32MZ2048EFM/app/system_config/subdir.mk
-include arch/PIC32MZ2048EFM/app/framework/system/ports/subdir.mk
-include arch/PIC32MZ2048EFM/app/subdir.mk
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
all: cwsw_clock.exe

# Tool invocations
cwsw_clock.exe: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MinGW C Linker'
	gcc  -o "cwsw_clock.exe" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) cwsw_clock.exe
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
