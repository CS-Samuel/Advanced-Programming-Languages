

#include <string>

using namespace std;

class Car
{
	int year;
	int speed;
	string make;
	string model;
	


public:
	Car();
	
	Car(string mk, string md, int yr, int spd);

	int getYear();
	int getSpeed();
	string getMake();
	string getModel();

	void setYear(int yr);
	void setSpeed(int spd);
	void setMake(string mk);
	void setModel(string md);

	void accelerate();
	void decelerate();
	void pushBreak();

};

