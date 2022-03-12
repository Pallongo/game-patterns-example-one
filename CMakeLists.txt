cmake_minimum_required(VERSION 3.21)
project(ProgrammingPatterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProgrammingPatterns src/main.cpp src/command_pattern.h src/fibonacci_command.h src/math_operation.h src/array_pattern.h src/array_value.h src/array_pattern.cpp src/array_value.cpp src/input_handler.h src/input_handler.cpp src/math_operation.cpp src/exponential_command.h)
