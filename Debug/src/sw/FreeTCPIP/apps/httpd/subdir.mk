################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
..\src/sw/FreeTCPIP/apps/httpd/http-strings.c \
..\src/sw/FreeTCPIP/apps/httpd/httpd-fs.c \
..\src/sw/FreeTCPIP/apps/httpd/httpd.c 

OBJS += \
./src/sw/FreeTCPIP/apps/httpd/http-strings.o \
./src/sw/FreeTCPIP/apps/httpd/httpd-fs.o \
./src/sw/FreeTCPIP/apps/httpd/httpd.o 

C_DEPS += \
./src/sw/FreeTCPIP/apps/httpd/http-strings.d \
./src/sw/FreeTCPIP/apps/httpd/httpd-fs.d \
./src/sw/FreeTCPIP/apps/httpd/httpd.d 


# Each subdirectory must supply rules for building sources it contributes
src/sw/FreeTCPIP/apps/httpd/%.o src/sw/FreeTCPIP/apps/httpd/%.d: ../src/sw/FreeTCPIP/apps/httpd/%.c
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	rx-elf-gcc -MM -MP -MF "$(@:%.o=%.d)" -MT "$(@:%.o=%.d)"  -I"E:/Pessoal/Projetos_Pessoal/ProjetosRenesas/RenesasRX62N" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\fw" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\webserver" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\task" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -x c "$<"
	rx-elf-gcc -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\fw" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\webserver" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\task" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -c -x c -o "$(@:%.d=%.o)" "$<"
	@echo 'Finished scanning and building: $<'
	@echo.

