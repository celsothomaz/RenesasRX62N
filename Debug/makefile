################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf *.lst *.lis *.lpp *.map

# All of the sources participating in the build are defined here
-include sources.mk
-include src/sw/webserver/subdir.mk
-include src/sw/task/subdir.mk
-include src/sw/MemMang/subdir.mk
-include src/sw/FreeTCPIP/subdir.mk
-include src/sw/FreeTCPIP/apps/httpd/subdir.mk
-include src/sw/FreeRTOS/subdir.mk
-include src/sw/FreeRTOS/port/subdir.mk
-include src/subdir.mk
-include src/fw/subdir.mk
-include src/fw/TMR/subdir.mk
-include src/fw/SWINT/subdir.mk
-include src/fw/SW/subdir.mk
-include src/fw/SPI/subdir.mk
-include src/fw/SCI/subdir.mk
-include src/fw/RTC/subdir.mk
-include src/fw/LED/subdir.mk
-include src/fw/IRQ/subdir.mk
-include src/fw/GLCD/subdir.mk
-include src/fw/ETH/subdir.mk
-include src/fw/Clock/subdir.mk
-include src/fw/CMT/subdir.mk
-include src/fw/AD/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_UPPER_DEPS)),)
-include $(C++_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(X_DEPS)),)
-include $(X_DEPS)
endif
ifneq ($(strip $(O_DEPS)),)
-include $(O_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(SRC_UPPER_DEPS)),)
-include $(SRC_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_UPPER_DEPS)),)
-include $(CPP_UPPER_DEPS)
endif
ifneq ($(strip $(OBJ_DEPS)),)
-include $(OBJ_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CC_UPPER_DEPS)),)
-include $(CC_UPPER_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_UPPER_DEPS)),)
-include $(CXX_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS += \
libRenesasRX62N.a \

LINKER_OUTPUT_OUTPUTS += \
RenesasRX62N.x \


# All Target
all: RenesasRX62N.mot
	@echo 'Build complete.'

# Tool invocations
RenesasRX62N.mot: $(LINKER_OUTPUT_OUTPUTS)
	@echo 'Invoking: Objcopy'
	rx-elf-objcopy -O srec -I elf32-rx-be-ns  $(LINKER_OUTPUT_OUTPUTS)"RenesasRX62N.mot"
	@echo 'Finished building target:'
	@echo.

libRenesasRX62N.a: 
	@echo 'Invoking: Library Generator'
	rx-elf-libgen --select-lib=optlib --header-files=math,stdio,stdlib,string --compiler-options=-mcpu=rx600,-mlittle-endian-data,-O3,-fno-function-cse,-funit-at-a-time,-funroll-loops,-fno-gcse --assembler-options=--mlittle-endian-data -o "libRenesasRX62N.a"
	@echo 'Finished building:'
	@echo.

RenesasRX62N.x: $(OBJS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS)
	@echo 'Invoking: Linker'
	@echo 'Building target:'
	rx-elf-ld -o "RenesasRX62N.x" -T"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\Debug\RenesasRX62N_Debug_auto.gsi" -T"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\Debug\LinkerSubCommand.tmp" $(USER_OBJS) $(LIBS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) -M=RenesasRX62N.map -e _start -warn-once -traditional-format -L"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\Debug" -L"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03" -L"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\lib" -L"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\lib\gcc\rx-elf\4.7-GNURX_v12.03" --start-group -lgcc -lRenesasRX62N --end-group
	@echo 'Finished building:'
	@echo.

# Other Targets
clean:
	-$(RM) $(OBJS)$(C++_UPPER_DEPS)$(C_DEPS)$(X_DEPS)$(O_DEPS)$(S_DEPS)$(CXX_DEPS)$(S_UPPER_DEPS)$(C++_DEPS)$(SRC_DEPS)$(ASM_DEPS)$(CC_DEPS)$(LINKER_OUTPUT_OUTPUTS)$(SRC_UPPER_DEPS)$(OBJCOPY_OUTPUTTYPE_OUTPUTS)$(CPP_UPPER_DEPS)$(OBJ_DEPS)$(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS)$(CPP_DEPS)$(CC_UPPER_DEPS)$(C_UPPER_DEPS)$(CXX_UPPER_DEPS) RenesasRX62N.mot
	@echo.
	@echo 'Clean complete.'

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
