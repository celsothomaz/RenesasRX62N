################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
..\src/fw/GLCD/font_8x16.c \
..\src/fw/GLCD/font_8x8.c \
..\src/fw/GLCD/font_bitmap.c \
..\src/fw/GLCD/font_helvr10.c \
..\src/fw/GLCD/font_winfreesystem14x16.c \
..\src/fw/GLCD/font_x5x7.c \
..\src/fw/GLCD/font_x6x13.c \
..\src/fw/GLCD/fw_glcd.c 

OBJS += \
./src/fw/GLCD/font_8x16.o \
./src/fw/GLCD/font_8x8.o \
./src/fw/GLCD/font_bitmap.o \
./src/fw/GLCD/font_helvr10.o \
./src/fw/GLCD/font_winfreesystem14x16.o \
./src/fw/GLCD/font_x5x7.o \
./src/fw/GLCD/font_x6x13.o \
./src/fw/GLCD/fw_glcd.o 

C_DEPS += \
./src/fw/GLCD/font_8x16.d \
./src/fw/GLCD/font_8x8.d \
./src/fw/GLCD/font_bitmap.d \
./src/fw/GLCD/font_helvr10.d \
./src/fw/GLCD/font_winfreesystem14x16.d \
./src/fw/GLCD/font_x5x7.d \
./src/fw/GLCD/font_x6x13.d \
./src/fw/GLCD/fw_glcd.d 


# Each subdirectory must supply rules for building sources it contributes
src/fw/GLCD/%.o src/fw/GLCD/%.d: ../src/fw/GLCD/%.c
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	rx-elf-gcc -MM -MP -MF "$(@:%.o=%.d)" -MT "$(@:%.o=%.d)"  -I"E:/Pessoal/Projetos_Pessoal/ProjetosRenesas/RenesasRX62N" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\fw" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\webserver" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\task" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -x c "$<"
	rx-elf-gcc -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\fw" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\webserver" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw\task" -I"E:\Pessoal\Projetos_Pessoal\ProjetosRenesas\RenesasRX62N\src\sw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -c -x c -o "$(@:%.d=%.o)" "$<"
	@echo 'Finished scanning and building: $<'
	@echo.

