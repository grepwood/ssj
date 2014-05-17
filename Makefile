CC=gcc
CFLAGS=-std=gnu99 -Wall -Wextra -O2 -pedantic
#if you don't like or don't want gcc, feel free to change CC

all: ssj

ssj:
	$(CC) $(CFLAGS) main.c -o ssj

install: ssj
	cp ssj-asciis.h /usr/include
	cp ssj /usr/bin

uninstall:
	rm /usr/include/ssj-asciis.h
	rm /usr/bin/ssj

clean:
	rm -f ssj
