// CS1300 Spring 2019
// Author: Trevor Green
// Recitation: T. Umada
// Cloud9 Workspace Editor Link:https://ide.c9.io/trgr5899/csci_1300_trevor_green
//Project 3
//Algorithm-cities class
#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "City.h"
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
  Stores all the data for each Game
 */
class Game
{
private:
string gameUser;
int gameUserpoints=0;
const static int numWar=14;
const static int numCity=26;
const static int numRows=25;
const static int numColumns=16;
const static int numHero=7;

    
    

public:
    int dragonglassrow[5];
    bool gameUserwin=false;
    int dragonglasscolumn[5];
    string map[numRows][numColumns];
    Hero gameHeroes[numHero];
    City gameCities[numCity];
    Warrior gameWarriors[numWar];
   Game(); // default constructor
   string getgameUser();
   int getdragonglassrow(int i);
   bool getgameUserwin();
   void setgamUserwin(bool j);
   int getdragonglasscolumn(int i);
   void setdragonglassrow(int i,int j);
   void setdragonglasscolumn(int i,int j);
   void setgameUser(string user);
   void setgameUserpoints(int point);
   int getgameUserpoints();
   void readWarriorsfile(string filename);
   void readCitiesfile(string filename);
   void readHeroesfile(string filename, Warrior gameWarriors[numWar]);
   void readMapfile(string filename);
   
    
   
   
};

#endif