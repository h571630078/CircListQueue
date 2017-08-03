CC= g++
CFLAGS= -Wall -std=c++11 -ggdb

main: main.cpp Queue.h.gch
	$(CC) $(CFLAGS) -o main main.cpp
Queue.h.gch: Queue.h
	$(CC) $(CFLAGS) Queue.h
clean:
	rm -f main Queue.h.gch
valgrind:
	valgrind --tool=memcheck --leak-check=yes --track-origins=yes --show-reachable=yes ./main
