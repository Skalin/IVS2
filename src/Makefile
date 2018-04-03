.PHONY: all pack clean test doc run

CC := g++
CFLAGS := -Wall -g
TARGET := Calculator
QTMAKE := qtMakefile

all:
	qmake Calculator.pro
	make -f $(QTMAKE)
	make clean-qtmake

clean-doc:
	rm -rf ../doc
clean-objects:
	rm -f *.o
clean-mainwindow:
	rm -f *_mainwindow.*
clean-qtmake:
	rm -f $(QTMAKE)
clean-target:
	rm -f $(TARGET)


clean: clean-doc clean-objects clean-mainwindow clean-qtmake clean-target

pack:
	make clean
	# todo

test:

doc:
	doxygen

run:
	./$(TARGET)
