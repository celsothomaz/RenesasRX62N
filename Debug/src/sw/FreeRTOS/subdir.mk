################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
..\src/sw/FreeRTOS/croutine.c \
..\src/sw/FreeRTOS/list.c \
..\src/sw/FreeRTOS/queue.c \
..\src/sw/FreeRTOS/tasks.c \
..\src/sw/FreeRTOS/timers.c 

OBJS += \
./src/sw/FreeRTOS/croutine.o \
./src/sw/FreeRTOS/list.o \
./src/sw/FreeRTOS/queue.o \
./src/sw/FreeRTOS/tasks.o \
./src/sw/FreeRTOS/timers.o 

C_DEPS += \
./src/sw/FreeRTOS/croutine.d \
./src/sw/FreeRTOS/list.d \
./src/sw/FreeRTOS/queue.d \
./src/sw/FreeRTOS/tasks.d \
./src/sw/FreeRTOS/timers.d 


# Each subdirectory must supply rules for building sources it contributes
src/sw/FreeRTOS/%.o src/sw/FreeRTOS/%.d: ../src/sw/FreeRTOS/%.c
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	rx-elf-gcc -MM -MP -MF "$(@:%.o=%.d)" -MT "$(@:%.o=%.d)"  -I"E:/Pessoal/Projetos_Pessoal/ProjetosRenesas/RenesasRX62N" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\fw" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\webserver" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\task" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -x c "$<"
	rx-elf-gcc -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\fw" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\webserver" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\task" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -c -x c -o "$(@:%.d=%.o)" "$<"
	@echo 'Finished scanning and building: $<'
	@echo.

