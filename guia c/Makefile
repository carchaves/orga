
CC = gcc
CFLAGS = -Wall -Wextra -pedantic
ARCHIVO = ejercicio5
TARGET = $(ARCHIVO)

all: $(TARGET)

$(TARGET): $(ARCHIVO).o
	$(CC) $(CFLAGS) $(ARCHIVO).o -o $(ARCHIVO)

$(ARCHIVO).o: $(ARCHIVO).c	
	$(CC) $(CFLAGS) -c $(ARCHIVO).c -o $(ARCHIVO).o


clean:
	rm *.o $(ARCHIVO)

.PHONY: all clean
