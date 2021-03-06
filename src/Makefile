# phony...
.PHONY: all clean install

# defining variables
CC := g++
CFLAGS := -std=c++11 -Wall -g -Werror -pedantic
TARGET := Calculator
QTMAKE := qtMakefile
TEST := testCalculator
PACK := xskala11_xvalka03_xhrbot01_xkysel12
OBJDIR := obj
OBJFLAG := -c
PROFILING := profiling
DESTDIR := $(HOME)
INSFLAGS := -m 0755

# make all
all:
	make clean-qt-objects
	make objects
	qmake Calculator.pro && make -f $(QTMAKE) && make clean-qtmake
	make clean-mainwindow


# cleaning section
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
	rm -rf $(PACK).zip
clean-test:
	rm -f $(TEST)
clean-profiling:
	rm -f $(PROFILING)
	rm -f profilingApp.o
	rm -f gmon.out
clean-repo:
	cd ..; rm -rf repo
clean: clean-doc clean-objects clean-qt-objects clean-mainwindow clean-qtmake clean-target clean-zip clean-test clean-repo clean-profiling

# object files
calculator.o: calculator.cpp calculator.h
	$(CC) $(CFLAGS) $(OBJFLAG) -c calculator.cpp
calc.o: calc.cpp calc.h
	$(CC) $(CFLAGS) $(OBJFLAG) calc.cpp
profiling.o: profiling.cpp profiling.h
	$(CC) $(CFLAGS) $(OBJFLAG) -c profiling.cpp
basic.o: basic.cpp basic.h
	$(CC) $(CFLAGS) $(OBJFLAG) -c basic.cpp
profilingApp.o: profilingApplication.cpp
	$(CC) $(CFLAGS) $(OBJFLAG) -c -pg profilingApplication.cpp
objects: basic.o calc.o calculator.o profiling.o

# profiling
profiling: objects profilingApp.o
	make clean-profiling
	$(CC) $(CFLAGS) -o $(PROFILING) -pg profilingApplication.o profiling.o calc.o basic.o
	./$(PROFILING)

#packing
pack:
	cd ..; rm -rf $(PACK).zip; rm -rf $(PACK)
	make clean
	cd ..; rm -rf repo
	cd ..; mkdir repo && rsync -r * repo; rm -rf repo/repo; cp -r .git repo
	make doc
	cd ..; mkdir $(PACK);
	cd ..; mv repo $(PACK); mv doc $(PACK); cp -r install $(PACK)
	cd ..; zip -r $(PACK).zip $(PACK); rm -rf $(PACK)

# tests
test: objects
	$(CC) $(CFLAGS) -o $(TEST) tests.cpp basic.o calc.o profiling.o
	./$(TEST)

# documentation
doc:
	doxygen

# run application
run: all
	./$(TARGET)

# install application
install: all
	mkdir -p $(DESTDIR)/usr/bin
	install $(INSFLAGS) Calculator $(DESTDIR)/usr/bin
