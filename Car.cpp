
#include "Car.h"


Car::Car()
{
	year = 0;
	speed = 0;
	make = "";
	model = "";
}


Car::Car(string mk, string md, int yr, int spd)
{
	year = yr;
	speed = spd;
	make = mk;
	model = md;
}

int Car::getYear()
{
	return year;
}

int Car::getSpeed()
{
	return speed;
}

string Car::getMake()
{
	return make;
}

string Car::getModel()
{
	return model;
}

void Car::setYear(int yr)
{
	year = yr;
}

void Car::setSpeed(int spd)
{
	speed = spd;
	if (spd < 0)
		speed = 0;
}

void Car::setMake(string mk)
{
	make = mk;
}
void Car::setModel(string md)
{
	model = md;
}

void Car::accelerate()
{
	speed += 5;
}
void Car::decelerate()
{
	speed -= 5;

	if (speed < 0)
		speed = 0;
}

void Car::pushBreak()
{
	speed = 0;
}
