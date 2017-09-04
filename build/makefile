#
TARGET_NAME=rpgExperiment.exe
SRC_DIR=../src
BUILD_DIR=../build
#
CC=g++
#
$(TARGET_NAME): main.o TestSuite.o
	$(CC) -o $(TARGET_NAME) main.o TestSuite.o

main.o: $(SRC_DIR)/main.cpp $(SRC_DIR)/TestSuite.h
	$(CC) -c $(SRC_DIR)/main.cpp

TestSuite.o: $(SRC_DIR)/TestSuite.cpp $(SRC_DIR)/TestSuite.h
	$(CC) -c $(SRC_DIR)/TestSuite.cpp $(SRC_DIR)/TestSuite.h


clean:
	rm $(TARGET_NAME) main.o TestSuite.o
