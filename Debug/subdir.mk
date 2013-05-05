################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
..\HighFrequencyTimerTest.c \
..\IntQueueTimer.c \
..\ParTest.c \
..\main-full.c \
..\uIP_Task.c \
..\vects.c 

OBJS += \
./HighFrequencyTimerTest.o \
./IntQueueTimer.o \
./ParTest.o \
./main-full.o \
./uIP_Task.o \
./vects.o 

C_DEPS += \
./HighFrequencyTimerTest.d \
./IntQueueTimer.d \
./ParTest.d \
./main-full.d \
./uIP_Task.d \
./vects.d 


# Each subdirectory must supply rules for building sources it contributes
%.o %.d: ../%.c
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	rx-elf-gcc -MM -MP -MF "$(@:%.o=%.d)" -MT "$(@:%.o=%.d)" -nostdinc  -I"E:/Pessoal/Projetos_Pessoal/ProjetosRenesas/RTOSDemo" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\include" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\..\Source\portable\GCC\RX600" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\Common\include" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\webserver" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\FreeRTOS\FreeRTOSV7.4.2\FreeRTOSV7.4.2\FreeRTOS\Demo\RX600_RX62N-RDK_GNURX\RTOSDemo\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\FreeRTOS\FreeRTOSV7.4.2\FreeRTOSV7.4.2\FreeRTOS\Demo\RX600_RX62N-RDK_GNURX\RTOSDemo\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\FreeRTOS\FreeRTOSV7.4.2\FreeRTOSV7.4.2\FreeRTOS\Demo\RX600_RX62N-RDK_GNURX\RTOSDemo\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\FreeRTOS\FreeRTOSV7.4.2\FreeRTOSV7.4.2\FreeRTOS\Demo\RX600_RX62N-RDK_GNURX\RTOSDemo\src\fw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -x c "$<"
	rx-elf-gcc -nostdinc -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\include" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\..\Source\portable\GCC\RX600" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\..\..\Common\include" -I"E:/Pessoal/Projetos_Pessoal/FreeRTOS/FreeRTOSV7.4.2/FreeRTOSV7.4.2/FreeRTOS/Demo/RX600_RX62N-RDK_GNURX/RTOSDemo\webserver" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\rx-elf\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\..\rx-elf\lib\gcc\rx-elf\4.5-GNURX_v10.03\optlibinc" -I"C:\Renesas\e2studio\GNURXV~1.03-\rx-elf\rx-elf\optlibinc" -I"E:\Pessoal\Projetos_Pessoal\FreeRTOS\FreeRTOSV7.4.2\FreeRTOSV7.4.2\FreeRTOS\Demo\RX600_RX62N-RDK_GNURX\RTOSDemo\src\sw\FreeRTOS\port" -I"E:\Pessoal\Projetos_Pessoal\FreeRTOS\FreeRTOSV7.4.2\FreeRTOSV7.4.2\FreeRTOS\Demo\RX600_RX62N-RDK_GNURX\RTOSDemo\src\sw\FreeRTOS\include" -I"E:\Pessoal\Projetos_Pessoal\FreeRTOS\FreeRTOSV7.4.2\FreeRTOSV7.4.2\FreeRTOS\Demo\RX600_RX62N-RDK_GNURX\RTOSDemo\src\sw\FreeTCPIP" -I"E:\Pessoal\Projetos_Pessoal\FreeRTOS\FreeRTOSV7.4.2\FreeRTOSV7.4.2\FreeRTOS\Demo\RX600_RX62N-RDK_GNURX\RTOSDemo\src\fw" -DDEBUG -g2 -g -mlittle-endian-data -mcpu=rx600 -c -x c -o "$(@:%.d=%.o)" "$<"
	@echo 'Finished scanning and building: $<'
	@echo.

