CC = gcc 
CFLAGS = -Wall -Werror -Wextra
STANDART = -std=c11

all: state_sort

state_sort:
	$(CC) $(CFLAGS) $(STANDART) state_sort.c date.c -o ../build/state_sort

test:
	$(CC) $(CFLAGS) $(STANDART) test.c date.c -o ../build/test