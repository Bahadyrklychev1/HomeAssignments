CXX = g++
CXXFLAGS = -std=c++17 -Wall -I/usr/include -pthread
GTEST_DIR = ~/googletest/googletest/build/lib
GTEST_INCLUDE = ~/googletest/googletest/googletest

# Путь к исходным файлам
SRC = Transformers.cpp Autobots.cpp Desepticons.cpp MiniRobots.cpp
OBJ = $(SRC:.cpp=.o)

# Исходники для тестов
TEST_SRC = allclasstesting.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)

# Итоговый исполнимый файл
TARGET = allclasses_test

# Сборка по умолчанию
all: $(TARGET)

# Линковка итогового исполнимого файла с библиотеками Google Test
$(TARGET): $(OBJ) $(TEST_OBJ)
	$(CXX) $(OBJ) $(TEST_OBJ) -o $(TARGET) -L$(GTEST_DIR) -lgtest -lgtest_main -lpthread

# Компиляция исходных файлов
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I$(GTEST_INCLUDE) -c $< -o $@

# Очистка скомпилированных файлов
clean:
	rm -f $(OBJ) $(TEST_OBJ) $(TARGET)

# Тестирование
test: $(OBJ) $(TEST_OBJ)
	$(CXX) $(OBJ) $(TEST_OBJ) -o $(TARGET) -L$(GTEST_DIR) -lgtest -lgtest_main -lpthread
	./$(TARGET)
