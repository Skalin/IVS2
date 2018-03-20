cmake_minimum_required(VERSION 3.7)
project(IVS2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
		"mockup/Calculator 1.png"
		"mockup/Calculator 2.png"
		mockup/mockup.png
		plan/xskala11_xvalka03_xhrbot01_xkysel12_plan.txt
		profiling/zprava.pdf
		src/calc.cpp
		src/Doxyfile
		src/Makefile
		#src/profiling.cpp
		debugging.png
		dokumentace.pdf
		hodnoceni.txt
		LICENSE
		README.md
		screenshot.png
		skutecnost.txt
		src/calc.h
		#src/profiling.h
		)

add_executable(IVS2 ${SOURCE_FILES})