################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Controller.c \
../src/LinkedList.c \
../src/eComputer.c \
../src/parser.c \
../src/recuperatorio2.c \
../src/utn.c 

OBJS += \
./src/Controller.o \
./src/LinkedList.o \
./src/eComputer.o \
./src/parser.o \
./src/recuperatorio2.o \
./src/utn.o 

C_DEPS += \
./src/Controller.d \
./src/LinkedList.d \
./src/eComputer.d \
./src/parser.d \
./src/recuperatorio2.d \
./src/utn.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


