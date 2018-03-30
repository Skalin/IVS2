cmake_minimum_required(VERSION 3.7)
project(IVS2)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "-Wall -Werror -pedantic")

set(SOURCE_FILES
		src/calc.cpp
		src/Doxyfile
		src/Makefile
		src/profiling.cpp
		LICENSE
		README.md
		src/calc.h
		src/profiling.h
		src/calculator.cpp
		src/calculator.h
		src/basic.cpp
		src/basic.h
		src/main.cpp)

add_executable(IVS2 ${SOURCE_FILES})