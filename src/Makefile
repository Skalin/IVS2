.PHONY: all pack clean test doc run

CC := g++
CFLAGS := -Wall -g
TARGET := Calculator
QTMAKE := qtMakefile
PACKFOLDER := xskala11_xvalka03_xhrbot01_xkysel12

all:
	make clean-objects
	qmake Calculator.pro
	make -f $(QTMAKE)
	make clean-qtmake
	make clean-mainwindow

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
clean-zip:
	rm -f $(PACKFOLDER).zip


clean: clean-doc clean-objects clean-mainwindow clean-qtmake clean-target clean-zip

pack:
	# pre packing cleanup
	make clean
	make doc
	mkdir -p ../$(PACKFOLDER)
	mkdir -p ../$(PACKFOLDER)/repo
	cp -rf ../doc ../$(PACKFOLDER)
	cp -rf ../mockup ../$(PACKFOLDER)/repo
	cp -rf ../p* ../$(PACKFOLDER)/repo
	cp -rf ../src ../$(PACKFOLDER)/repo
	cp -rf ../*.* ../$(PACKFOLDER)/repo
	cp -rf ../LICENSE ../$(PACKFOLDER)/repo
	# cp -rf ../install ../$(PACKFOLDER)
	zip -r ../$(PACKFOLDER)
	rm -rf ../$(PACKFOLDER)
	# cleanup after packing
	make clean

test:

doc:
	doxygen

run:
	./$(TARGET)
