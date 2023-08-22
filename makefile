# -*-Makefile-*-
include test/makefile

SRC = printf.c
CC = gcc
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -pedantic -Wno-format -std=gnu89 -g
RM = rm -f
