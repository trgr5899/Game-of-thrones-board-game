// CS1300 Spring 2019
// Author: Trevor Green
// Recitation: T. Umada
// Cloud9 Workspace Editor Link:https://ide.c9.io/trgr5899/csci_1300_trevor_green
// Hwk 8
/*Algorithm-
*create functions that get and set variables within 
*/
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include "Warrior.h"
#include <stdio.h>
#include <string.h>
using namespace std;

Warrior::Warrior() // default constructor
{
    warriorName="";
    warriorStrength=0;
    warriorLoyalty=0;
    warriorMorale=0;
    warriorStatus=false;
    warriorShip=false;
    warriorDragonglass=false;
}
Warrior::Warrior(string name,int strength,int loyalty,int morale, bool status,bool ship, bool dragonglass) // parameterized constructor
{
    warriorName=name;
    warriorStrength=strength;
    warriorLoyalty=loyalty;
    warriorMorale=morale;
    warriorStatus=status;
    warriorShip=ship;
    warriorDragonglass=dragonglass;
}
   int Warrior::getwarriorRow()
   {
       return warriorRow;
   }
   void Warrior::setwarriorRow(int row)
   {
       warriorRow=row;
   }
   int Warrior::getwarriorColumn()
   {
       return warriorColumn;
   }
   void Warrior::setwarriorColumn(int column)
   {
       warriorColumn=column;
   }
string Warrior::getwarriorName()
{
    return warriorName;
}
void Warrior::setwarriorName(string name)
{
    warriorName=name;
}
int Warrior::getwarriorStrength()
{
    return warriorStrength;
}
void Warrior::setwarriorStrength(int strength)
{
    warriorStrength=strength;
}
int Warrior::getwarriorLoyalty()
{
    return warriorLoyalty;
}
void Warrior::setwarriorLoyalty(int loyalty)
{
    warriorLoyalty=loyalty;
}
int Warrior::getwarriorMorale()
{
    return warriorMorale;
}
void Warrior::setwarriorMorale(int morale)
{
    warriorMorale=morale;
}
bool Warrior::getwarriorStatus()
{
    return warriorStatus;
}
void Warrior::setwarriorStatus(bool free)
{
    warriorStatus=free;
}
bool Warrior::getwarriorShip()
{
    return warriorShip;
}
void Warrior::setwarriorShip(bool ship)
{
    warriorShip=ship;
}
bool Warrior::getwarriorDragonglass()
{
    return warriorDragonglass;
}
void Warrior::setwarriorDragonglass(bool dragonglass)
{
    warriorDragonglass=dragonglass;
}

