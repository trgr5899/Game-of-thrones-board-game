// CS1300 Spring 2019
// Author: Trevor Green
// Recitation: T. Umada
// Cloud9 Workspace Editor Link:https://ide.c9.io/trgr5899/csci_1300_trevor_green
//Project 3
//Algorithm-warrior class
#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
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
  Stores all the data for the warrior
 */
class Warrior
{
private:
    string warriorName;
    int warriorStrength;
    int warriorLoyalty;
    int warriorMorale;
    int warriorRow;
    int warriorColumn;
    bool warriorStatus;
    bool warriorShip;
    bool warriorDragonglass;
public:
   Warrior(); // default constructor
   Warrior(string name,int strength,int loyalty,int morale, bool status,bool ship, bool dragonglass); // parameterized constructor
   string getwarriorName();
   int getwarriorRow();
   void setwarriorRow(int row);
   int getwarriorColumn();
   void setwarriorColumn(int column);
   void setwarriorName(string name);
   int getwarriorStrength();
   void setwarriorStrength(int strength);
   int getwarriorLoyalty();
   void setwarriorLoyalty(int loyalty);
   int getwarriorMorale();
   void setwarriorMorale(int morale);
   bool getwarriorStatus();
   void setwarriorStatus(bool free);
   bool getwarriorShip();
   void setwarriorShip(bool ship);
   bool getwarriorDragonglass();
   void setwarriorDragonglass(bool dragonglass);
};

#endif