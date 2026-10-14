CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror -pedantic -g

.PHONY: all clean 

all: calc

calc: main.o ops.o
	$(CC) main.o ops.o -o calc

main.o: main.c ops.h
	$(CC) $(CFLAGS) -c main.c -o main.o

ops.o: ops.c ops.h
	$(CC) $(CFLAGS) -c ops.c -o ops.o

clean:
	rmf -f *.o calc
