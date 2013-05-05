################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
..\src/fw/start.asm 

C_SRCS += \
..\src/fw/fw_setup.c \
..\src/fw/hwinit.c \
..\src/fw/hwsetup.c \
..\src/fw/inthandler.c \
..\src/fw/vects.c 

OBJS += \
./src/fw/fw_setup.o \
./src/fw/hwinit.o \
./src/fw/hwsetup.o \
./src/fw/inthandler.o \
./src/fw/start.o \
./src/fw/vects.o 

C_DEPS += \
./src/fw/fw_setup.d \
./src/fw/hwinit.d \
./src/fw/hwsetup.d \
./src/fw/inthandler.d \
./src/fw/vects.d 

ASM_DEPS += \
./src/fw/start.d 


# Each subdirectory must supply rules for building sources it contributes
src/fw/%.o src/fw/%.d: ../src/fw/%.c
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	rx-elf-gcc -MM -MP -MF "$(@:%.o=%.d)" -MT "$(@:%.o=%.d)"  -I"E:/Pessoal/Projetos_Pessoal/ProjetosRenesas/RenesasRX62N" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\fw" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\webserver" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\task" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -x c "$<"
	rx-elf-gcc -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\fw" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\webserver" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\task" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -c -x c -o "$(@:%.d=%.o)" "$<"
	@echo 'Finished scanning and building: $<'
	@echo.

src/fw/%.o src/fw/%.d: ../src/fw/%.asm
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	rx-elf-gcc -MM -MP -MF "$(@:%.o=%.d)" -MT "$(@:%.o=%.d)"  -I"E:/Pessoal/Projetos_Pessoal/ProjetosRenesas/RenesasRX62N" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\fw" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\webserver" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\task" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -Wa,-gdwarf2 -x assembler-with-cpp "$<"
	rx-elf-gcc -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\fw" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\webserver" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\task" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -Wa,-gdwarf2 -c -x assembler-with-cpp -o "$(@:%.d=%.o)" "$<"
	@echo 'Finished scanning and building: $<'
	@echo.

