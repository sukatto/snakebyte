all: snakebyte

snakebyte: Coord.o

Coord.o: Coord.cpp
	g++ -c Coord.cpp

clean:
	rm *.o
