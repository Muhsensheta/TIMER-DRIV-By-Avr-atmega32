################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/GIE/GIE_prog.c 

OBJS += \
./MCAL/GIE/GIE_prog.o 

C_DEPS += \
./MCAL/GIE/GIE_prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/GIE/%.o: ../MCAL/GIE/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\APP" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\HAL\KEYPAD" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\HAL\LCd" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\HAL\LED" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\HAL\PB" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\HAL\SSD" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\LIB" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\MCAL\DIO" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\MCAL\EXT1" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\MCAL\GIE" -I"F:\communication engineering\embedded system\nti\avr interfaces\eclipse_ex\TIMER_Project\MCAL\TIMER" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1600000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


