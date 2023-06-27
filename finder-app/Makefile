CC := $(CROSS_COMPILE)gcc

all: default

default: writer

writer: writer.o
	$(CC) -o writer writer.c

clean:
	-rm -f writer *.o
