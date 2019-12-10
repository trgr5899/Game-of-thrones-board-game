// CS1300 Spring 2019
// Author: Trevor Green
// Recitation: T. Umada
// Cloud9 Workspace Editor Link:https://ide.c9.io/trgr5899/csci_1300_trevor_green
// Project 3
/*Algorithm-making city class
*/
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include "City.h"
#include "Hero.h"
#include "Hero.cpp"
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

    City::City() // default constructor
    {
     cityName="";
     cityLetter="";
     cityMoney=0;
     cityArmysize=0;
     cityPoints=0;
     citycurrentHero="";
     cityHero=false;
    }
    City::City(string Letter,string Name,int Money,int Armysize,int Points) // parameterized constructor
    {
     cityName=Name;
     cityLetter=Letter;
     cityMoney=Money;
     cityArmysize=Armysize;
     cityPoints=Points;
    }
    string City::getcityName()
    {
     return cityName;
    }
    void City::setcityName(string Name)
    {
     cityName=Name;
    }
    string City::getcityLetter()
    {
     return cityLetter;
    }
    void City::setcityLetter(string Letter)
    {
     cityLetter=Letter;
    }
    int City::getcityMoney()
    {
     return cityMoney;
    }
    void City::setcityMoney(int Money)
    {
     cityMoney=Money;
    }
    int City::getcityArmysize()
    {
     return cityArmysize;
    }
    void City::setcityArmysize(int Armysize)
    {
     cityArmysize=Armysize;
    }
    int City::getcityPoints()
    {
     return cityPoints;
    }
    void City::setcityPoints(int Points)
    {
     cityPoints=Points;
    }
    string City::getcitycurrentHero()
    {
     return citycurrentHero;
    }
    void City::setcitycurrentHero(string currentHero)
    {
     citycurrentHero=currentHero;
    }
    bool City::getcityHero()
    {
     return cityHero;
    }
    void City::setcityHero(bool hero)
    {
     cityHero=hero;
    }
   
