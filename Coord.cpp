#include "Coord.hpp"

using namespace std;

// constructors for Coord; default values for x and y are 0 if not specified
Coord::Coord() {
	x = 0;
	y = 0;
}

Coord::Coord(int iniX, int iniY) {
	x = iniX;
	y = iniY;
}

// setters for new x and y values
void Coord::setX(int newX) {
	x = newX;
}

void Coord::setY(int newY) {
	y = newY;
}

// getters for x and y values
int Coord::getX() {
	return x;
}

int Coord::getY() {
	return y;
};
