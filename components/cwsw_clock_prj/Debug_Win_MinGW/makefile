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
-include cwsw_board/none/src/subdir.mk
-include cwsw_arch/i386/system/ports/src/subdir.mk
-include cwsw_arch/i386/system/clk/src/subdir.mk
-include cwsw_arch/i386/src/subdir.mk
-include cwsw_arch/i386/peripheral/ports/subdir.mk
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
