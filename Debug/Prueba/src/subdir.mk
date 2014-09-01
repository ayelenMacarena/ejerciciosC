################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Prueba/src/Prueba.c \
../Prueba/src/ejercicios.c 

OBJS += \
./Prueba/src/Prueba.o \
./Prueba/src/ejercicios.o 

C_DEPS += \
./Prueba/src/Prueba.d \
./Prueba/src/ejercicios.d 


# Each subdirectory must supply rules for building sources it contributes
Prueba/src/%.o: ../Prueba/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


