// CS1300 Spring 2019
// Author: Trevor Green
// Recitation: T. Umada
// Cloud9 Workspace Editor Link:https://ide.c9.io/trgr5899/csci_1300_trevor_green
// Project 3
/*Algorithm-making hero class
*/
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include "Hero.h"
#include "Warrior.h"
#include "Warrior.cpp"
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;


   Hero::Hero() // default constructor
   {
    heroName="";
    heroMoney=0;
    heroInfluence=0;
    heroArmysize=0;
    heroRow=0;
    heroColumn=0;
    heroShip=false;
    heroAlive=false;
   }
   Hero::Hero(string Name,int Money,int Influence,int Armysize,Warrior w1,Warrior w2,Warrior w3,Warrior w4,int Row,int Column, bool Ship) // parameterized constructor
   {
    heroName=Name;
    heroMoney=Money;
    heroInfluence=Influence;
    heroArmysize=Armysize;
    heroRow=Row;
    heroWarriors[0]=w1;
    heroWarriors[1]=w2;
    heroWarriors[2]=w3;
    heroWarriors[3]=w4;
    heroColumn=Column;
    heroShip=Ship;
    heroAlive=true;
   }
   string Hero::getheroName()
   {
       return heroName;
   }
   void Hero::setheroName(string Name)
   {
       heroName=Name;
   }
   Warrior Hero::getheroWarrior(int i)
   {
       Warrior war=heroWarriors[i];
       return war;
   }
   void Hero::setheroWarrior(Warrior war,int i)
   {
       heroWarriors[i]=war;
   }
   int Hero::getheroMoney()
   {
       return heroMoney;
   }
   void Hero::setheroMoney(int Money)
   {
       heroMoney=Money;
   }
   int Hero::getheroInfluence()
   {
       return heroInfluence;
   }
   void Hero::setheroInfluence(int Influence)
   {
       heroInfluence=Influence;
   }
   int Hero::getheroArmysize()
   {
       return heroArmysize;
   }
   void Hero::setheroArmysize(int Armysize)
   {
       heroArmysize=Armysize;
   }
   bool Hero::getheroShip()
   {
       return heroShip;
   }
   void Hero::setheroShip(bool Ship)
   {
       heroShip=Ship;
   }
   bool Hero::getheroAlive()
   {
       return heroAlive;
   }
   void Hero::setheroAlive(bool Alive)
   {
       heroAlive=Alive;
   }
   int Hero::getheroRow()
   {
    return heroRow;
   }
   void Hero::setheroRow(int Row)
   {
    heroRow=Row;
   }
   int Hero::getheroColumn()
   {
    return heroColumn;
   }
   void Hero::setheroColumn(int Column)
   {
    heroColumn=Column;
   }
   int Hero::getheroPoints()
   {
    return points;
   }
   void Hero::setheroPoints(int i)
   {
    points=i;
   }
   
