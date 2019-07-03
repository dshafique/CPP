################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../pe7\ hw.cpp 

OBJS += \
./pe7\ hw.o 

CPP_DEPS += \
./pe7\ hw.d 


# Each subdirectory must supply rules for building sources it contributes
pe7\ hw.o: ../pe7\ hw.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"pe7 hw.d" -MT"pe7\ hw.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


