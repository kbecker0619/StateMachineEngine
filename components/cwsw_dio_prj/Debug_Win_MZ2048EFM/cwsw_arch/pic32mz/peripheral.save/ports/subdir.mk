################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../cwsw_arch/pic32mz/peripheral.save/ports/ports_api.c 

OBJS += \
./cwsw_arch/pic32mz/peripheral.save/ports/ports_api.o 

C_DEPS += \
./cwsw_arch/pic32mz/peripheral.save/ports/ports_api.d 


# Each subdirectory must supply rules for building sources it contributes
cwsw_arch/pic32mz/peripheral.save/ports/%.o: ../cwsw_arch/pic32mz/peripheral.save/ports/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	xc32-gcc -std=gnu11 -g -D"XPRJ_Debug_Win_MZ2048EFM=1" -DXPRJ_pic32mz_ef_sk=pic32mz_ef_sk -DSimulator=1 -DUSE_SIMULATED_EVENTS=0 -Dpic32mz_ef_sk=1 -I"E:\_Programs\Microchip\xc32\v1.44\pic32mx\include" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/ut" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_arch/pic32mz" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_board/pic32mz_efm_sk" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/3rdparty/mhc/gen/bsp" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/3rdparty/mhc/lib" -I"E:\_Projects\PersonalDev\cwsw_lib\components\cwsw_dio_prj\3rdparty\mhc\gen" -I"E:\_Projects\PersonalDev\cwsw_lib\components\cwsw_dio_prj\3rdparty\mhc\lib\system\clk" -I"E:\_Projects\PersonalDev\cwsw_lib\components\cwsw_dio_prj\3rdparty\mhc\lib" -I"E:\_Projects\PersonalDev\cwsw_lib\components\cwsw_dio_prj\3rdparty\mhc\lib\peripheral" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_lib" -I"E:/_Projects/PersonalDev/cwsw_lib/components/cwsw_dio_prj/cwsw_bsp" -O0 -g3 -pedantic -Wall -Wextra -Wconversion -no-legacy-libc -c -fmessage-length=0 -mdebugger -mprocessor=32MZ2048EFM144 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


