#include "Snake.hpp"

using namespace std;
	
	// constructor for snake; if no head coordinates or initial orientation are specified, the snake will start in the top-left corner with the head sticking out farthest on x-axis, facing right
Snake::Snake() {
	coords.push_back(Coord(4, 0));
	coords.push_back(Coord(3, 0));
	coords.push_back(Coord(2, 0));
	coords.push_back(Coord(1, 0));
	coords.push_back(Coord(0, 0));
	orientation = 'r';
}

Snake::Snake(int headX, int headY, char iniOr) {
	coords.push_back(Coord(headX, headY));
	coords.push_back(Coord(headX - 1, headY));
	coords.push_back(Coord(headX - 2, headY));
	coords.push_back(Coord(headX - 3, headY));
	coords.push_back(Coord(headX - 4, headY));
	orientation = iniOr;
}

// getter function for returning an array of coords corresponding to the coords of the snake parts
vector <Coord> Snake::getCoords() {
	return coords;
}

// setter for new orientation
void Snake::setOrientation(char newOr) {
	orientation = newOr;
}

// getter for orientation
char Snake::getOrientation() {
	return orientation;
}

// getter for the current size of the snake
int Snake::getSize() {
	return coords.size();
}

// function to move snake up one unit; cuts off its tail and then increments it using its increase function
void Snake::move() {
	coords.pop_back();
	increase();
}

// function to increment snake up one unit; Coord element is inserted at beginning of coords vector, which thus becomes the new head
void Snake::increase() {
	if (orientation == 'u')
		coords.insert(coords.begin(), Coord(coords.front().getX(), coords.front().getY() - 1));
	if (orientation == 'd')
		coords.insert(coords.begin(), Coord(coords.front().getX(), coords.front().getY() + 1));
	if(orientation == 'l')
		coords.insert(coords.begin(), Coord(coords.front().getX() - 1, coords.front().getY()));
	if (orientation == 'r')
		coords.insert(coords.begin(), Coord(coords.front().getX() + 1, coords.front().getY()));
}
