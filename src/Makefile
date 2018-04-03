.PHONY: all pack clean test doc run

CC := g++
CFLAGS := -Wall -g
TARGET := Calculator
QTMAKE := qtMakefile


all:
	qmake IVS-kalkulacka.pro
	make -f $(QTMAKE)

pack:

clean:
	rm -rf $(TARGET) *.o ../doc *_mainwindow.* $(QTMAKE)

test:

doc:
	doxygen

run:
	./$(TARGET)
