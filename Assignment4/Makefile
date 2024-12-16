
CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -std=c++17 -I/usr/include/gtest

LIBS = -lgtest -lgtest_main -pthread

SRCS = test_transformers.cpp transformer.cpp autobot.cpp decepticon.cpp maximal.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)

TEST_TARGET = test_transformers

all: $(TEST_TARGET)

$(TEST_TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

test_transformers.o: test_transformers.cpp transformer.h autobot.h decepticon.h maximal.h Weapon.h
	$(CXX) $(CXXFLAGS) -c test_transformers.cpp

transformer.o: transformer.cpp transformer.h
	$(CXX) $(CXXFLAGS) -c transformer.cpp

autobot.o: autobot.cpp autobot.h transformer.h Weapon.h
	$(CXX) $(CXXFLAGS) -c autobot.cpp

decepticon.o: decepticon.cpp decepticon.h transformer.h Weapon.h
	$(CXX) $(CXXFLAGS) -c decepticon.cpp

maximal.o: maximal.cpp maximal.h transformer.h
	$(CXX) $(CXXFLAGS) -c maximal.cpp

Weapon.o: Weapon.cpp Weapon.h
	$(CXX) $(CXXFLAGS) -c Weapon.cpp

clean:
	rm -f *.o $(TEST_TARGET)

.PHONY: all clean
