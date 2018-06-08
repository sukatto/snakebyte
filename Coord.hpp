using namespace std;

class Coord {

	public:
	Coord();
	Coord(int iniX, int iniY);
	void setX(int newX);
	void setY(int newY);
	int getX();
	int getY();

	private:
	int x;
	int y;
};
