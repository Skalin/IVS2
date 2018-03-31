cmake_minimum_required(VERSION 3.7)
project(IVS2)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "-Wall -Werror -pedantic")

find_package(Qt COMPONENTS QtOpenGL QtXml)
if ( NOT Qt_FOUND OR NOT QtXml_FOUND )
	message(FATAL_ERROR "Package Qt and component QtXml required, but not found!")
endif( NOT Qt_FOUND OR NOT QtXml_FOUND )

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