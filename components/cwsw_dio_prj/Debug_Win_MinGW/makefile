################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ut/subdir.mk
-include cwsw_bsp/src/subdir.mk
-include cwsw_board/none/src/subdir.mk
-include cwsw_arch/i386/system/ports/src/subdir.mk
-include cwsw_arch/i386/system/clk/src/subdir.mk
-include cwsw_arch/i386/src/subdir.mk
-include cwsw_arch/i386/peripheral/ports/subdir.mk
-include cwsw_arch/MPC57xx/system/int/subdir.mk
-include cwsw_arch/MPC57xx/system/clk/subdir.mk
-include cwsw_arch/MPC57xx/src/subdir.mk
-include cwsw_arch/MPC57xx/Project_Settings/Startup_Code/subdir.mk
-include 3rdparty/cwsw/lib/system/int/subdir.mk
-include 3rdparty/cwsw/gen/subdir.mk
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
all: cwsw_dio.exe

# Tool invocations
cwsw_dio.exe: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MinGW C Linker'
	gcc  -o "cwsw_dio.exe" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) cwsw_dio.exe
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
