# Makefile to compile programs
# source file *.c
# Author: Aldo Nunez

CC := gcc
FLAGS := -Wall

SRC := $(wildcard *.c)
BIN := $(SRC:%.c=%)	

all: $(BIN)

%: %.c
	@echo "Compiling:"  $<
	$(CC) -o $@  $<

.PHONY: clean

clean:
	@echo "Cleaning"
	rm -f $(BIN)
