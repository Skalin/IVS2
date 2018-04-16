.PHONY: all pack clean test doc run

CC := g++
CFLAGS := -std=c++11 -Wall -g -Werror -pedantic
TARGET := Calculator
QTMAKE := qtMakefile
TEST := testCalculator
PACK := xskala11_xvalka03_xhrbot01_xkysel12
OBJDIR := obj
OBJFLAG := -c


all:
	make clean-qt-objects
	make objects
	qmake Calculator.pro && make -f $(QTMAKE) && make clean-qtmake
	make clean-mainwindow

clean-doc:
	cd ..; rm -rf doc
clean-objects:
	rm -f *.o
	rm -f *.h.gch
clean-qt-objects: clean-mainwindow clean-qtmake
	rm -f main.o
	rm -f mainwindow.o

clean-mainwindow:
	rm -f *_mainwindow.*
clean-qtmake:
	rm -f $(QTMAKE)
clean-target:
	rm -f $(TARGET)
clean-zip:
	rm -f $(PACKFOLDER).zip
clean-test:
	rm -f $(TEST)
clean-repo:
	cd ..; rm -rf repo

clean: clean-doc clean-objects clean-qt-objects clean-mainwindow clean-qtmake clean-target clean-zip clean-test clean-repo

calculator.o: calculator.cpp calculator.h
	$(CC) $(CFLAGS) $(OBJFLAG) calculator.cpp

calc.o: calc.cpp
	$(CC) $(CFLAGS) $(OBJFLAG) calc.cpp

profiling.o: profiling.cpp
	$(CC) $(CFLAGS) $(OBJFLAG) profiling.cpp

basic.o: basic.cpp basic.h
	$(CC) $(CFLAGS) $(OBJFLAG) basic.cpp

objects: basic.o calc.o calculator.o profiling.o

pack:
	cd ..;rm -rf $(PACK)
	make clean
	cd ..; rm -rf repo
	cd ..; mkdir repo && rsync -r * repo; rm -rf repo/repo
	make doc
	cd ..; zip -r $(PACK).zip repo doc install

test: basic.o calc.o profiling.o
	$(CC) $(CFLAGS) -o $(TEST) tests.cpp basic.o calc.o profiling.o
	./$(TEST)

doc:
	doxygen

run:
	./$(TARGET)
