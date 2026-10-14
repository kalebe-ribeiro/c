.PHONY: all clean
all: programa

clean:
	rm -f *.o programa
programa: linker.o fantasma.o
	gcc linker.o fantasma.o -o programa
linker.o: linker.c
	gcc -std=c11 -Wall -Wextra -Werror -pedantic -c linker.c -o linker.o
fantasma.o: fantasma.c
	gcc -std=c11 -Wall -Wextra -Werror -pedantic -c fantasma.c -o fantasma.o

