// Samuel Weems
// November 06, 2017
// Project 3
// CMPS 5113 Advanced Programming Languages
// Dr. Johnson
//
// This program demonstrates a car class

#include "car.h"
#include <iostream>
#include <time.h>
#include <iomanip>

// Function Declerations

void getInfo(Car &currentCar);
void printCar(Car currentCar);
void raceCars(Car &car1, Car &car2);
int carEvent(Car &car, int event);


int main()
{
    srand(time(0));
    
    Car raceCar1;
    Car raceCar2("Chevy", "Corvette", 1974, 70);
    
    getInfo(raceCar1);
    
    raceCars(raceCar1, raceCar2);
    
    return 0;
}


// Sets information for a car object


void getInfo(Car &currentCar)
{
    int spd, yr;
    string mk, md;
    
    cout << "Please enter car information." << endl;
    cout << "Make:";
    cin >> mk;
    
    cout << "Model:";
    cin >> md;
    
    cout << "Year:" ;
    cin >> yr;
    
    cout << "Speed:";
    cin >> spd;
    
    currentCar.setMake(mk);
    currentCar.setModel(md);
    currentCar.setYear(yr);
    currentCar.setSpeed(spd);
    
    cout << endl;
}

// Prints current car information

void printCar(Car currentCar)
{
    cout << "Current Car Information" << endl;
    cout << "Make:" << currentCar.getMake() << endl;
    cout << "Model:" << currentCar.getModel() << endl;
    cout << "Year:" << currentCar.getYear() << endl;
    cout << "Speed:" << currentCar.getSpeed() << endl << endl;
}


// Races 2 cars

void raceCars(Car &car1, Car &car2)
{
    float car1LapTime, car2LapTime, lapDistance = 2.5, car1TotalTime, car2TotalTime, eventTimeAdjust;
    
    cout << "Let's Race!" << endl;
    cout << "Contestant 1!" << endl;
    printCar(car1);
    
    cout << "Contestant 2!" << endl;
    printCar(car2);
    
    // Lap 1 - no events
    
    car1LapTime = car1TotalTime = lapDistance / car1.getSpeed() * 60;
    car2LapTime = car2TotalTime = lapDistance / car2.getSpeed() * 60;
    
    if (car1.getSpeed() == 0)
    {
        cout << "Contestant 1 isn't moving! Contestant 2 wins!!!" << endl;
        return;
    }
    else if (car2.getSpeed() == 0)
    {
        cout << "Contestant 2 isn't moving! Contestant 1 wins!!!" << endl;
        return;
    }
    
    
    cout << "Lap 1 Time Results:" << endl;
    cout << "Contestant 1: " << setprecision(4) << car1LapTime << " minutes." << endl;
    cout << "Contestant 2: " << setprecision(4) << car2LapTime << " minutes." << endl << endl;
    
    // Lap 2 - event
    
    cout << "Contestant 1 Update:" << endl;
    eventTimeAdjust = carEvent(car1, (rand() % 10));
    
    if (car1.getSpeed() == 0)
    {
        cout << "Contestant 1 isn't moving! Contestant 2 wins!!!" << endl;
        return;
    }
    
    car1LapTime = (lapDistance / car1.getSpeed() * 60) + eventTimeAdjust / 60;
    car1TotalTime += car1LapTime;
    
    cout << "Contestant 2 Update:" << endl;
    eventTimeAdjust = carEvent(car2, (rand() % 10));
    
    
    if (car2.getSpeed() == 0)
    {
        cout << "Contestant 2 isn't moving! Contestant 2 wins!!!" << endl;
        return;
    }
    
    car2LapTime = (lapDistance / car2.getSpeed() * 60) + eventTimeAdjust / 60;
    car2TotalTime += car2LapTime;
    
    cout << "Lap 2 Time Results:" << endl;
    cout << "Contestant 1: " << setprecision(4) << car1LapTime << " minutes." << endl;
    cout << "Contestant 2: " << setprecision(4) << car2LapTime << " minutes." << endl << endl;
    
    // Lap 3 - event
    
    cout << "Contestant 1 Update:" << endl;
    eventTimeAdjust = carEvent(car1, (rand() % 10));
    
    if (car1.getSpeed() == 0)
    {
        cout << "Contestant 1 isn't moving! Contestant 2 wins!!!" << endl;
        return;
    }
    
    car1LapTime = (lapDistance / car1.getSpeed() * 60) + eventTimeAdjust / 60;
    car1TotalTime += car1LapTime;
    
    cout << "Contestant 2 Update:" << endl;
    eventTimeAdjust = carEvent(car2, (rand() % 10));
    
    if (car2.getSpeed() == 0)
    {
        cout << "Contestant 2 isn't moving! Contestant 1 wins!!!" << endl;
        return;
    }
    
    car2LapTime = (lapDistance / car2.getSpeed() * 60) + eventTimeAdjust / 60;
    car2TotalTime += car2LapTime;
    
    cout << "Lap 3 Time Results:" << endl;
    cout << "Contestant 1: " << setprecision(4) << car1LapTime << " minutes." << endl;
    cout << "Contestant 2: " << setprecision(4) << car2LapTime << " minutes." << endl << endl;
    
    // Lap 4 - event
    
    cout << "Contestant 1 Update:" << endl;
    eventTimeAdjust = carEvent(car1, (rand() % 10));
    
    if (car1.getSpeed() == 0)
    {
        cout << "Contestant 1 isn't moving! Contestant 2 wins!!!" << endl;
        return;
    }
    
    car1LapTime = (lapDistance / car1.getSpeed() * 60) + eventTimeAdjust / 60;
    car1TotalTime += car1LapTime;
    
    cout << "Contestant 2 Update:" << endl;
    eventTimeAdjust = carEvent(car2, (rand() % 10));
    
    if (car2.getSpeed() == 0)
    {
        cout << "Contestant 2 isn't moving! Contestant 2 wins!!!" << endl;
        return;
    }
    
    car2LapTime = (lapDistance / car2.getSpeed() * 60) + eventTimeAdjust / 60;
    car2TotalTime += car2LapTime;
    
    cout << "Lap 4 Time Results:" << endl;
    cout << "Contestant 1: " << setprecision(4) << car1LapTime << " minutes." << endl;
    cout << "Contestant 2: " << setprecision(4) << car2LapTime << " minutes." << endl << endl;
    
    // Lap 5 - event
    
    cout << "Contestant 1 Update:" << endl;
    eventTimeAdjust = carEvent(car1, (rand() % 10));
    
    if (car1.getSpeed() == 0)
    {
        cout << "Contestant 1 isn't moving! Contestant 2 wins!!!" << endl;
        return;
    }
    
    car1LapTime = (lapDistance / car1.getSpeed() * 60) + eventTimeAdjust / 60;
    car1TotalTime += car1LapTime;
    
    cout << "Contestant 2 Update:" << endl;
    eventTimeAdjust = carEvent(car2, (rand() % 10));
    
    if (car2.getSpeed() == 0)
    {
        cout << "Contestant 2 isn't moving! Contestant 2 wins!!!" << endl;
        return;
    }
    
    car2LapTime = (lapDistance / car2.getSpeed() * 60) + eventTimeAdjust / 60;
    car2TotalTime += car2LapTime;
    
    cout << "Lap 5 Time Results:" << endl;
    cout << "Contestant 1: " << setprecision(4) << car1LapTime << " minutes." << endl;
    cout << "Contestant 2: " << setprecision(4) << car2LapTime << " minutes." << endl << endl;
    
    
    // Race results
    
    cout << "Total Results:" << endl;
    cout << "Contestant 1: " << setprecision(4) << car1TotalTime << " minutes." << endl;
    cout << "Contestant 2: " << setprecision(4) << car2TotalTime << " minutes." << endl << endl;
    
    if (car1TotalTime < car2TotalTime)
        cout << "Contestant 1 is the winner!" << endl;
    else if (car1TotalTime > car2TotalTime)
        cout << "Contestant 2 is the winner!" << endl;
    else
        cout << "It's a tie!!!" << endl;
    
}

// Random Events

// 0 - Fishtail - loose 5 seconds
// 1 - Groove - gain 5 seconds
// 2 - Drafting - gain 5 speed
// 3 - Drunk Driving - lose 10 speed
// 4 - Tire blow out - pit stop - lose 10 seconds
// 5 - Pit crew quit! - lose 5 speed
// 6 - Excellent Driving! - gain 10 speed
// 7 - Engine Fire! - pit stop - lose 10 seconds
// 8 - Distracted by fans - lose 5 seconds
// 9 - Spin out! - lose 5 seconds

int carEvent(Car &car, int event)
{
    
    if (event == 0)
    {
        cout << "The car fish-tails losing 5 seconds!" << endl << endl;
        return 5;
    }
    else if (event == 1)
    {
        cout << "The car finds the inner lane groove gaining 5 seconds!" << endl << endl;
        return -5;
    }
    else if (event == 2)
    {
        cout << "The car is using drafting to increase speed by 5!" << endl << endl;
        car.accelerate();
        return 0;
    }
    else if (event == 3)
    {
        cout << "The car's driver is drinking and driving! Lose 10 speed!" << endl << endl;
        car.decelerate();
        car.decelerate();
        return 0;
    }
    else if (event == 4)
    {
        cout << "The car blows out a tire! Pit stop loses 10 seconds!" << endl << endl;
        return 10;
    }
    else if (event == 5)
    {
        cout << "The pit crew quit! Lose 5 speed!" << endl << endl;
        car.decelerate();
        return 0;
    }
    else if (event == 6)
    {
        cout << "Excellent driving! Gain 10 speed!" << endl << endl; 
        car.accelerate();
        car.accelerate();
        return 0;
    }
    else if (event == 7)
    {
        cout << "Engine fire! Pit stop loses 10 seconds!" << endl << endl;
        return 10;
    }
    else if (event == 8)
    {
        cout << "The driver is distracted by fans! Lose 10 seconds." << endl << endl;
        return 10;
    }
    
    else
    {
        cout << "The car spins out! Lose 5 seconds!" << endl << endl;
        return 5;
        
    }
    
}



