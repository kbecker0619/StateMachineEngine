################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ut/subdir.mk
-include cwsw_lib/src/subdir.mk
-include cwsw_bsp/src/subdir.mk
-include cwsw_board/pic32mz_efm_sk/src/subdir.mk
-include cwsw_arch/pic32mz/peripheral.save/ports/subdir.mk
-include cwsw_arch/pic32mz/app/subdir.mk
-include cwsw_arch/pic32mz/subdir.mk
-include 3rdparty/mhc/lib/system/ports/src/subdir.mk
-include 3rdparty/mhc/lib/system/int/src/subdir.mk
-include 3rdparty/mhc/lib/system/devcon/src/subdir.mk
-include 3rdparty/mhc/lib/system/clk/src/subdir.mk
-include 3rdparty/mhc/lib/peripheral/tmr/src/subdir.mk
-include 3rdparty/mhc/gen/bsp/subdir.mk
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
all: cwsw_dio.elf

# Tool invocations
cwsw_dio.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross GCC Linker'
	xc32-gcc -Wl,--defsym=__MPLAB_BUILD=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=Simulator=1,--defsym=_min_heap_size=0,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem -o "cwsw_dio.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) cwsw_dio.elf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
