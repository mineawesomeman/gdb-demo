CC=gcc
CFLAGS=-I. -Wall
SRCS=$(wildcard *.c)
BIN=brokenfile

%.o: %.c
    $(CC) -c -o -g $@ $< $(CFLAGS)

main: $(SRCS)
    $(CC) -o -g $(BIN) $(SRCS) $(LFLAGS) $(CFLAGS) -g

clean:
    rm -f $(BIN) *.o

all: main