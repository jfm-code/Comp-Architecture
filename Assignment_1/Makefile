CC = gcc
CFLAGS = -g
RM = rm -f

default: all

all: convert_bits

convert_bits: convert_bits.c
	$(CC) $(CFLAGS) -o convert_bits convert_bits.c

clean veryclean:
	$(RM) convert_bits