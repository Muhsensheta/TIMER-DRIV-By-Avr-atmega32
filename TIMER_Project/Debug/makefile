################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/TIMER/subdir.mk
-include MCAL/GIE/subdir.mk
-include MCAL/EXT1/subdir.mk
-include MCAL/DIO/subdir.mk
-include HAL/SSD/subdir.mk
-include HAL/PB/subdir.mk
-include HAL/LED/subdir.mk
-include HAL/LCd/subdir.mk
-include HAL/KEYPAD/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
TIMER_Project.lss \

FLASH_IMAGE += \
TIMER_Project.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: TIMER_Project.elf secondary-outputs

# Tool invocations
TIMER_Project.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,TIMER_Project.map -mmcu=atmega32 -o "TIMER_Project.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

TIMER_Project.lss: TIMER_Project.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S TIMER_Project.elf  >"TIMER_Project.lss"
	@echo 'Finished building: $@'
	@echo ' '

TIMER_Project.hex: TIMER_Project.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex TIMER_Project.elf  "TIMER_Project.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: TIMER_Project.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 TIMER_Project.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) TIMER_Project.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
