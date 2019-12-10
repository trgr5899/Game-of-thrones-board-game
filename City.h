// CS1300 Spring 2019
// Author: Trevor Green
// Recitation: T. Umada
// Cloud9 Workspace Editor Link:https://ide.c9.io/trgr5899/csci_1300_trevor_green
//Project 3
//Algorithm-cities class
#ifndef CITY_H
#define CITY_H
#include <iostream>
#include "Hero.h"
#include <math.h>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;
/**
  Stores all the data for the city
 */
class City
{
private:
    string cityName;
    string cityLetter;
    int cityMoney;
    int cityArmysize;
    int cityPoints;
    string citycurrentHero;
    bool cityHero;
    
    

public:
   City(); // default constructor
   City(string Letter,string Name,int Money,int Armysize,int Points); // parameterized constructor
    string getcityName();
    void setcityName(string Name);
    string getcityLetter();
    void setcityLetter(string Letter);
    int getcityMoney();
    void setcityMoney(int Money);
    int getcityArmysize();
    void setcityArmysize(int Armysize);
    int getcityPoints();
    void setcityPoints(int Points);
    string getcitycurrentHero();
    void setcitycurrentHero(string currentHero);
    bool getcityHero();
    void setcityHero(bool hero);
    
   
   
};

#endif