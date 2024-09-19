CC = gcc
CFLAGS = -g
RM = rm -f

default: all

all: add_bits

add_bits: add_bits.c
	$(CC) $(CFLAGS) -o add_bits add_bits.c

clean veryclean:
	$(RM) add_bits