# -*-Makefile-*-
SRC = array-printer.c base_n-converter.c format-printer.c _putchar.c printf.c
TESTS = test/0-char_test.c test/1-integer_test.c test/2-binary_test.c test/3-uint_test.c test/4-oct_test.c test/5-hex_upper_test.c test/6-hex_lower_test.c test/holbtest.c
CC = gcc
OBJ = $(SRC:.c=.o)
TESTS-O = $(TESTS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -g
RM = rm -f

$(OBJ): main.h

char_test: $(OBJ) test/0-char_test.c
	$(CC) $(CFLAGS) $(OBJ) test/0-char_test.c -o char

int_test: $(OBJ) test/1-integer_test.c
	$(CC) $(CFLAGS) $(OBJ) test/1-integer_test.c -o int

bin_test: $(OBJ) test/2-binary_test.c
	$(CC) $(CFLAGS) $(OBJ) test/2-binary_test.c -o bin

uint_test: $(OBJ) test/3-uint_test.c
	$(CC) $(CFLAGS) $(OBJ) test/3-uint_test.c -o uint

oct_test: $(OBJ) test/4-oct_test.c
	$(CC) $(CFLAGS) $(OBJ) test/4-oct_test.c -o oct

hex_upper_test: $(OBJ) test/5-hex_upper_test.c
	$(CC) $(CFLAGS) $(OBJ) test/5-hex_upper_test.c -o hex_upper

hex_lower_test: $(OBJ) test/6-hex_lower_test.c
	$(CC) $(CFLAGS) $(OBJ) test/6-hex_lower_test.c -o hex_lower

oclean:
	$(RM) ../*.o *.o
cleanall:
	$(RM) ../*.o *.o char int bin uint oct hex_lower hex_upper
.makeall_test: char int bin uint oct hex_lower hex_upper
main_test: $(OBJ) $(TESTS-O) test/main-test.c
	$(CC) $(CFLAGS) $(OBJ) $(TESTS-O) test/main-test.c -o main_test
