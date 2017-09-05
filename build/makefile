#
TARGET_NAME=rpgGame.exe
SRC_DIR=../src
BUILD_DIR=../build
#
CC=g++
#
$(TARGET_NAME): main.o TestSuite.o GameEngine.o BasicConsole.o
	$(CC) -o $(TARGET_NAME) main.o TestSuite.o GameEngine.o BasicConsole.o

main.o: $(SRC_DIR)/main.cpp $(SRC_DIR)/TestSuite.h \
$(SRC_DIR)/GameEngine/GameEngine.h $(SRC_DIR)/osResources/BasicConsole.h
	$(CC) -c $(SRC_DIR)/main.cpp

TestSuite.o: $(SRC_DIR)/TestSuite.cpp $(SRC_DIR)/TestSuite.h
	$(CC) -c $(SRC_DIR)/TestSuite.cpp $(SRC_DIR)/TestSuite.h

GameEngine.o: $(SRC_DIR)/GameEngine/GameEngine.cpp \
$(SRC_DIR)/GameEngine/GameEngine.h
	$(CC) -c $(SRC_DIR)/GameEngine/GameEngine.cpp $(SRC_DIR)/GameEngine/GameEngine.h

BasicConsole.o: $(SRC_DIR)/osResources/BasicConsole.cpp \
$(SRC_DIR)/osResources/BasicConsole.h\
$(SRC_DIR)/osResources/ConsoleInterface.h
	$(CC) -c $(SRC_DIR)/osResources/BasicConsole.cpp $(SRC_DIR)/osResources/BasicConsole.h $(SRC_DIR)/osResources/ConsoleInterface.h
#
clean:
	rm $(TARGET_NAME) *.o
