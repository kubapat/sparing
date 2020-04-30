COMP=g++
CFLAGS=-std=c++11 -O3 -Wall -lm -static

all:
	$(COMP) $(CFLAGS) gen.cpp -o ./gen
