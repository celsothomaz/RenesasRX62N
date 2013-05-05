################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Source/portable/MemMang/heap_2.c 

OBJS += \
./MemMang/heap_2.o 

C_DEPS += \
./MemMang/heap_2.d 


# Each subdirectory must supply rules for building sources it contributes
MemMang/heap_2.o MemMang/heap_2.d: E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Source/portable/MemMang/heap_2.c
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	rx-elf-gcc -MM -MP -MF "$(@:%.o=%.d)" -MT "$(@:%.o=%.d)" -nostdinc  -I"E:/Pessoal/Projetos_Pessoal/ProjetosRenesas/RTOSDemo" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\include" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\..\Source\include" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\..\Source\portable\GCC\RX600" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\Common\include" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\Common\ethernet\FreeTCPIP" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\webserver" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\FreeRTOS\FreeRTOSV7.4.2\FreeRTOSV7.4.2\FreeRTOS\Demo\RX600_RX62N-RDK_GNURX\RTOSDemo\src\sw\FreeRTOS\port" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -x c "$<"
	rx-elf-gcc -nostdinc -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\include" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\..\Source\include" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\..\Source\portable\GCC\RX600" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\Common\include" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\Common\ethernet\FreeTCPIP" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\webserver" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\FreeRTOS\FreeRTOSV7.4.2\FreeRTOSV7.4.2\FreeRTOS\Demo\RX600_RX62N-RDK_GNURX\RTOSDemo\src\sw\FreeRTOS\port" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -c -x c -o "$(@:%.d=%.o)" "$<"
	@echo 'Finished scanning and building: $<'
	@echo.

