CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -std=c++17 -I/usr/include/gtest

LIBS = -lgtest -lgtest_main -pthread

SRCS = main.cpp transformer.cpp autobot.cpp decepticon.cpp
OBJS = $(SRCS:.cpp=.o)

TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

main.o: main.cpp transformer.h autobot.h decepticon.h
	$(CXX) $(CXXFLAGS) -c main.cpp

transformer.o: transformer.cpp transformer.h
	$(CXX) $(CXXFLAGS) -c transformer.cpp

autobot.o: autobot.cpp autobot.h transformer.h
	$(CXX) $(CXXFLAGS) -c autobot.cpp

decepticon.o: decepticon.cpp decepticon.h transformer.h
	$(CXX) $(CXXFLAGS) -c decepticon.cpp

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
