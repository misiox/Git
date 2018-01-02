################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Factory.cpp 

OBJS += \
./src/Factory.o 

CPP_DEPS += \
./src/Factory.d 


# Each subdirectory must supply rules for building sources it contributes
src/Factory.o: ../src/Factory.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/Factory.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


