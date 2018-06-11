#include "Coord.hpp"
#include <vector>

using namespace std;

class Snake {
	
	// vector of Coords, each element corresponding to a part of the snake, with the head being the first element, and char to represent which way the snake is currently facing
	
	// constructor for snake; if no head coordinates or initial orientation are specified, the snake will start in the top-left corner with the head sticking out farthest on x-axis, facing right
	public:
	Snake();
	Snake(int headX, int headY, char iniOr);
	// getter function for returning a vector of coords corresponding to the coords of the snake parts
	vector <Coord> getCoords();
	// setter for new orientation
	void setOrientation(char newOr);
	// getter for orientation
	char getOrientation();
	// getter for the current size of the snake
	int getSize();
	// function to move the snake one unit based on its current orientation; the head moves up 1 space in said direction, and the trailing parts of the snake each move up to the next part's old location
	void move();
	// function to increase length of snake by one; moves the snake in the direction it is facing by one unit (by simply calling the aforementioned move function) and moves the snake to a new array with one additional unit at the end, being obviously at the previous position of the previous last part of the snake
	void increase();

	private:
	vector <Coord> coords;
	char orientation;
};
