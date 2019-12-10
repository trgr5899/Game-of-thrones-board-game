// CS1300 Spring 2019
// Author: Trevor Green
// Recitation: T. Umada
// Cloud9 Workspace Editor Link:https://ide.c9.io/trgr5899/csci_1300_trevor_green
//Project 3
//Algorithm-hero class
#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include <stdio.h>
#include "Warrior.h"
#include <string.h>
using namespace std;
/**
  Stores all the data for the hero
 */
class Hero
{
private:
    string heroName;
    const static int numberWarriors=4;
    int heroMoney;
    int heroInfluence;
    int heroArmysize;
    Warrior heroWarriors[numberWarriors];
    int heroRow;
    int heroColumn;
    bool heroShip;
    bool heroAlive;
    int points;
    
    

public:
   Hero(); // default constructor
   Hero(string Name,int Money,int Influence,int Armysize,Warrior w1,Warrior w2,Warrior w3,Warrior w4,int Row,int Column, bool Ship); // parameterized constructor
   string getheroName();
   void setheroName(string ame);
   Warrior getheroWarrior(int i);
   void setheroWarrior(Warrior war,int i);
   int getheroMoney();
   void setheroMoney(int Money);
   int getheroInfluence();
   void setheroInfluence(int Influence);
   int getheroArmysize();
   void setheroArmysize(int Armysize);
   bool getheroShip();
   void setheroShip(bool Ship);
   bool getheroAlive();
   void setheroAlive(bool Alive);
   int getheroRow();
   void setheroRow(int heroRow);
   int getheroColumn();
   void setheroColumn(int heroColumn);
   int getheroPoints();
   void setheroPoints(int i);
   
   
   
};

#endif