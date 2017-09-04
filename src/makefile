#
TARGET_NAME=rpgExperiment
#
CC=g++
#
$(TARGET_NAME): main.o TestSuite.o
	$(CC) -o $(TARGET_NAME) main.o TestSuite.o

main.o: main.cpp TestSuite.h
	$(CC) -c main.cpp

TestSuite.o: TestSuite.cpp TestSuite.h
	$(CC) -c TestSuite.cpp TestSuite.h


clean:
	rm $(TARGET_NAME) main.o TestSuite.o
