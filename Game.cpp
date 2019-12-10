// CS1300 Spring 2019
// Author: Trevor Green
// Recitation: T. Umada
// Cloud9 Workspace Editor Link:https://ide.c9.io/trgr5899/csci_1300_trevor_green
// Project 3
/*Algorithm-creating game class it is lengthy but really only reads all the files and puts them into arrays

*/
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include <stdio.h>
#include "City.h"
#include "City.cpp"
#include "Game.h"
#include <string.h>

using namespace std;
int splitz (string str, char c,Warrior gameWarriors[],int numu,int maxr)
{
    if (str.length() == 0) 
    {
        return 0;
    }
    string word = "";
    int j = numu;
    int l= numu;
    int k=0;
    int books=0;
    int numbe=0;
    bool any=false;
    str = str + c;
    for (int i = 0; i < str.length(); i++)//goes through each character in the string 
    {
        if (str[i] == c) 
        {

            if (k==0)
            {
               gameWarriors[j].setwarriorName(word);
                //cout << word << endl; 

                word = "";
                k=1;
            }
            else if(k==1)
            {
                              // cout << word << endl; 

                numbe=stoi(word);
                gameWarriors[j].setwarriorStrength(numbe);
                word="";
                k=2;
            }
            else if(k==2)
            {
               numbe=stoi(word);
               gameWarriors[j].setwarriorLoyalty(numbe);
               word="";
               k=3;
            }
            else if(k==3)
            {
               numbe=stoi(word);
               gameWarriors[j].setwarriorMorale(numbe);
               word="";
               k=4;             
            }
            else if(k==4)
            {
               if (word=="no")
               {
                  any=false;
               }
               if (word=="yes")
               {
                  any=true;
               }
               gameWarriors[j].setwarriorStatus(any);
               word="";
               k=5;            
            }
            else if(k==5)
            {
               if (word=="no")
               {
                  any=false;
               }
               if (word=="yes")
               {
                  any=true;
               }
               gameWarriors[j].setwarriorShip(any);
               word="";
               k=6;             
            }
            else if(k==6)
            {
               if (word=="no")
               {
                  any=false;
               }
               if (word=="yes")
               {
                  any=true;
               }
               gameWarriors[j].setwarriorDragonglass(any);
               word="";
               k=7;              
            }
        } 
        else 
        {
            word = word + str[i];
        }
    }
}
int splits (string str, char c,City gameCities[],int numu,int maxr)
{
    if (str.length() == 0) 
    {
        return 0;
    }
    string word = "";
    int j = numu;
    int l= numu;
    int k=0;
    int books=0;
    int numbe=0;
    bool any=false;
    str = str + c;
    for (int i = 0; i < str.length(); i++)//goes through each character in the string 
    {
        if (str[i] == c) 
        {

            if (k==0)
            {
               gameCities[j].setcityLetter(word);
                //cout << word << endl; 

                word = "";
                k=1;
            }
            else if(k==1)
            {
                              // cout << word << endl; 
                gameCities[j].setcityName(word);
                word="";
                k=2;
            }
            else if(k==2)
            {
               numbe=stoi(word);
               gameCities[j].setcityMoney(numbe);
               word="";
               k=3;
            }
            else if(k==3)
            {
               numbe=stoi(word);
               gameCities[j].setcityArmysize(numbe);
               word="";
               k=4;             
            }
            else if(k==4)
            {
                numbe=stoi(word);
               gameCities[j].setcityPoints(numbe);
               word="";
               k=5;            
            }

        } 
        else 
        {
            word = word + str[i];
        }
    }
}
int splitss (string str, char c,Hero gameHeroes[],Warrior gameWarriors[],int numu,int maxr)
{
    if (str.length() == 0) 
    {
        return 0;
    }
    Warrior w0,w1,w2,w3,w4;
    w0.setwarriorName("null");
    string word = "";
    int j = numu;
    int l= numu;
    int k=0;
    int books=0;
    string wa;
    int numbe=0;
    bool any=false;
    str = str + c;
    for (int i = 0; i < str.length(); i++)//goes through each character in the string 
    {
        if (str[i] == c) 
        {

            if (k==0)
            {
                gameHeroes[j].setheroName(word);
                //cout << word << endl; 

                word = "";
                k=1;
            }
            else if(k==1)
            {
                numbe=stoi(word);
                // cout << word << endl; 
                gameHeroes[j].setheroMoney(numbe);
                word="";
                k=2;
            }
            else if(k==2)
            {
               numbe=stoi(word);
               gameHeroes[j].setheroInfluence(numbe);
               word="";
               k=3;
            }
            else if(k==3)
            {
                
               numbe=stoi(word);
               gameHeroes[j].setheroArmysize(numbe);               
               word="";
               k=4;             
            }
            else if(k==4)
            {;
                
                if (word=="NULL")
                {
                    
                   gameHeroes[j].setheroWarrior(w0,0); 
                }
                else 
                {
                    for(int h=0;h<14;h++)
                    {
                    
                    wa=gameWarriors[h].getwarriorName();
                    if (wa==word)
                    {
                        gameHeroes[j].setheroWarrior(gameWarriors[h],0);
                        
                    }
                    }
                }
                word="";
               k=5;            
            }
            else if(k==5)
            {
                
                
                if (word=="NULL")
                {
                    
                   gameHeroes[j].setheroWarrior(w0,1); 
                }
                else 
                {
                    for(int h=0;h<14;h++)
                    {
                    
                    wa=gameWarriors[h].getwarriorName();
                    if (wa==word)
                    {
                        gameHeroes[j].setheroWarrior(gameWarriors[h],1);
                        
                    }
                    }
                }
                word="";
               k=6;            
            }
            else if(k==6)
            {
                
                if (word=="NULL")
                {
                    
                   gameHeroes[j].setheroWarrior(w0,2); 
                }
                else 
                {
                    for(int h=0;h<14;h++)
                    {
                    
                    wa=gameWarriors[h].getwarriorName();
                    if (wa==word)
                    {
                        gameHeroes[j].setheroWarrior(gameWarriors[h],2);
                        
                    }
                    }
                }
                word="";
               k=7;            
            }
            else if(k==7)
            {
                
                if (word=="NULL")
                {
                    
                   gameHeroes[j].setheroWarrior(w0,3); 
                }
                else 
                {
                    for(int h=0;h<14;h++)
                    {
                    
                    wa=gameWarriors[h].getwarriorName();
                    if (wa==word)
                    {
                        gameHeroes[j].setheroWarrior(gameWarriors[h],3);
                        
                    }
                    }
                }
                word="";
               k=8;            
            }
            else if(k==8)
            {
                
               numbe=stoi(word);
               gameHeroes[j].setheroRow(numbe);          
               word="";
               k=9;             
            }
            else if(k==9)
            {
                
               numbe=stoi(word);
               gameHeroes[j].setheroColumn(numbe);          
               word="";
               k=10;             
            }
            else if(k==10)
            {
                
               if (word=="no")
               {
                   any=false;
               }
               else
               {
                   any=true;
               }
               gameHeroes[j].setheroShip(any);          
               word="";
               k=11;             
            }
        } 
        else 
        {
            word = word + str[i];
        }
    }
}
int splitsss (string str, char c,string map[26][16],int numu)
{
    if (str.length() == 0) 
    {
        return 0;
    }
    string word = "";
    int j = numu;
    int l= numu;
    int k=0;
    int books=0;
    int numbe=0;
    bool any=false;
    str = str + c;
    for (int i = 0; i < str.length(); i++)//goes through each character in the string 
    {
        if (str[i] == c) 
        {
          
            map[j][k]=word;
            k++;        
            word ="";
        }
        else 
        {
            word = word + str[i];
        }
    }
}
   Game::Game() // default constructor
   {
      
   }
   string Game::getgameUser()
   {
      return gameUser;
   }
   void Game::setgameUser(string user)
   {
      gameUser=user;
   }
   void Game::readWarriorsfile(string filename)
   {

        ifstream myfile;
        myfile.open(filename);
    if (myfile.is_open())//if the file opened
    {
        string line = "";
        int j=0;
        while (getline(myfile, line)) //get line
        {
            if (j>=numWar)//this is for segmentation error
            {
                return ;
            }
            if (line.length()>0)//if the line is not empty go on to ssplit function
            {
                
               splitz(line,',',gameWarriors,j,numWar);
                j++;
            }
    
    
        }
    }
    else 
    {
        return ;
    }
   
// closing the file
myfile.close();

      
   }
   void Game::readCitiesfile(string filename)
   {
       ifstream myfile;
        myfile.open(filename);
    if (myfile.is_open())//if the file opened
    {
        string line = "";
        int j=0;
        while (getline(myfile, line)) //get line
        {
            if (line.length()>0)//if the line is not empty go on to ssplit function
            {
                
                splits(line,',',gameCities,j,numCity);
                j++;
            }
    
    
        }
    }
    else 
    {
        return ;
    }
// closing the file
myfile.close();
   }
   void Game::readHeroesfile(string filename,Warrior gameWarrior[numWar])
   {
              ifstream myfile;
        myfile.open(filename);
    if (myfile.is_open())//if the file opened
    {
        string line = "";
        int j=0;
        while (getline(myfile, line)) //get line
        {
            
            if (line.length()>0)//if the line is not empty go on to ssplit function
            {
                splitss(line,',',gameHeroes,gameWarriors, j,numHero);
                j++;
            }
    
    
        }
    }
    else 
    {
        return ;
    }
// closing the file
myfile.close();
   }
   void Game::readMapfile(string filename)
   {
       ifstream myfile;
        myfile.open(filename);
    if (myfile.is_open())//if the file opened
    {
        string line = "";
        int j=0;
        while (getline(myfile, line)) //get line
        {
            
            if (line.length()>0)//if the line is not empty go on to ssplit function
            {
                
                splitsss(line,',',map,j);
                j++;
            }
    
    
        }
    }
    else 
    {
        return ;
    }
// closing the file
myfile.close();
       
   }
void Game::setgameUserpoints(int point)
{
    gameUserpoints=point;
}
   int Game::getdragonglassrow(int i)
   {
       return dragonglassrow[i];
   }
   bool Game::getgameUserwin()
   {
       return gameUserwin;
   }
   void Game::setgamUserwin(bool j)
   {
       gameUserwin=j;
   }
   int Game::getdragonglasscolumn(int i)
   {
       return dragonglasscolumn[i];
   }
   void Game::setdragonglassrow(int i,int j)
   {
       dragonglassrow[i]=j;
   }
   void Game::setdragonglasscolumn(int i,int j)
   {
       dragonglasscolumn[i]=j;
   }
int Game::getgameUserpoints()
{
    return gameUserpoints;
}

/*
    int main()
{
   Game game;
   game.readWarriorsfile("warriorsGOT.txt");
    cout<<game.gameWarriors[1].getwarriorName()<<" "<<game.gameWarriors[1].getwarriorDragonglass()<<endl;
   game.readCitiesfile("citiesGOT.txt");
   cout<<game.gameCities[1].getcityName()<<" "<<game.gameCities[1].getcityArmysize()<<endl;
   game.readHeroesfile("heroesGOT.txt",game.gameWarriors);
   cout<<game.gameHeroes[2].getheroWarrior(0).getwarriorName()<<endl;
   cout<<game.gameHeroes[2].getheroRow()<<endl;
   cout<<game.gameHeroes[2].getheroColumn()<<endl;
   cout<<game.gameHeroes[4].getheroShip()<<endl;
   game.readMapfile("mapGOT.txt");
    for(int i=0;i<25;i++)
    {
        for (int j=0;j<16;j++)
        {
          cout<<game.map[i][j];  
        }
        cout<<endl;
    }
}*/

