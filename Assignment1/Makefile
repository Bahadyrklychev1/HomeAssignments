CXX = g++
CXXFLAGS = -std=c++17
TARGET = main
OBJS = main.o greetWord.o
all: $(TARGET)
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp
greetWord.o: greetWord.cpp
	$(CXX) $(CXXFLAGS) -c greetWord.cpp
clean:
	rm -f $(TARGET) $(OBJS)
