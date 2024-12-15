CC = g++
CFLAGS = -Wall

all: main
main: main.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) -c -o $@ $<
clean:
	rm -f main *.o
