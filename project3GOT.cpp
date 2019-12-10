// CS1300 Spring 2019
// Author: Trevor Green
// Recitation: T. Umada
// Cloud9 Workspace Editor Link:https://ide.c9.io/trgr5899/csci_1300_trevor_green
// Project 3
/*Algorithm-creating the actual game using all the classes I created 

*/
//download stuff to practice
#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "City.h"
#include "Game.cpp"//Game reads all the files then puts them into arrays
#include "Game.h"
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
int whichhero(Game game);
Game createhero(Game game,string user_name);
Game settinglocation(Game game);
int randomnubb()
{
    int v1;
v1 = rand() % 25; 
return v1;
}
int randomnub()
{
    int v1;
v1 = rand() % 16;  
return v1;
}
Game dragonglass(Game game)
{
    int row,column;
    for (int i=0;i<5;i++)
    {
        row=randomnubb();
        game.setdragonglassrow(i,row);
    }
    for (int i=0;i<5;i++)
    {
        column=randomnub();
        game.setdragonglasscolumn(i,column);
    }
    return game;
    
}
Game travel(Game game,int index)
{
   int row,column,newrow,newcolumn,setrown,setrows,setcolumn;
string map;
bool ship,ship1,ship2,ship3,ship4;
    //asks user where they want to travel
    //check to see if it is land,water city or out of bounds
    //make sure they input valid data
    row=game.gameHeroes[index].getheroRow();
    column=game.gameHeroes[index].getheroColumn();
    newcolumn=column-1;
    newrow=row-1;
    setrown=newrow-1;
    setrows=row;
    
    
    cout<<"Where do you want to move?"<<endl<<"1.)North"<<endl<<"2.)South"<<endl<<"3.)West"<<endl<<"4.)East"<<endl;
      int k,j,l,m,mon,arm;
      string cityyy;
  cin>>k;
  switch(k)
           {
           case 1:  //north
           map=game.map[setrown][newcolumn];
           if(setrown>0)
           {
               if (map=="w")
               {
                   ship=game.gameHeroes[index].getheroShip();
                   ship1=game.gameHeroes[index].getheroWarrior(0).getwarriorShip();
                    ship2=game.gameHeroes[index].getheroWarrior(1).getwarriorShip();
                    ship3=game.gameHeroes[index].getheroWarrior(2).getwarriorShip();
                   ship4=game.gameHeroes[index].getheroWarrior(3).getwarriorShip();

                   if ((ship==true)||(ship1==true)||(ship2==true)||(ship3==true)||(ship4==true))
                   {
                       game.gameHeroes[index].setheroRow(newrow);
                       mon=game.gameHeroes[index].getheroMoney();
                       mon=mon+10;
                       game.gameHeroes[index].setheroMoney(mon);
                       j=game.getgameUserpoints();
                       game.setgameUserpoints(j+1);
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
                   }
                     else
                   {
                       cout<<"You dont have a Ship!!!"<<endl;
                       return travel(game,index);
                   }
                   
               }
               else if(map=="p")
               {
                       game.gameHeroes[index].setheroRow(newrow);
                                              mon=game.gameHeroes[index].getheroMoney();
                       mon=mon+20;
                       game.gameHeroes[index].setheroMoney(mon);
                       arm=game.gameHeroes[index].getheroArmysize();
                       arm=arm+10;
                       game.gameHeroes[index].setheroArmysize(arm);
                       j=game.getgameUserpoints();
                       game.setgameUserpoints(j+1);
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
               }
               else
               {
                   for(int p=0;p<26;p++)
                   {
                     cityyy=game.gameCities[p].getcityLetter();
                     if (map==cityyy)
                   {
                   
                       game.gameHeroes[index].setheroRow(newrow);
                       j=game.gameCities[p].getcityPoints();
                       l=game.gameCities[p].getcityMoney();
                       m=game.gameCities[p].getcityArmysize();
                       l=l+game.gameHeroes[index].getheroMoney();
                       j=j+game.getgameUserpoints();
                       m=m+game.gameHeroes[index].getheroArmysize();
                       game.gameHeroes[index].setheroArmysize(m);
                       game.gameHeroes[index].setheroMoney(l);
                       game.setgameUserpoints(j); 
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
                        return game;

                   }
                   }
                   
               }
           }
           else
           {
               cout<<"That would put you out of bounds, choose different location!!"<<endl;
               return travel(game,index);
           }
           return game;
               break;
           case 2:  //south
           map=game.map[setrows][newcolumn];
           if(setrows<=25)
           {
               if (map=="w")
               {
                   ship=game.gameHeroes[index].getheroShip();
                   ship1=game.gameHeroes[index].getheroWarrior(0).getwarriorShip();
                    ship2=game.gameHeroes[index].getheroWarrior(1).getwarriorShip();
                    ship3=game.gameHeroes[index].getheroWarrior(2).getwarriorShip();
                   ship4=game.gameHeroes[index].getheroWarrior(3).getwarriorShip();

                   if ((ship==true)||(ship1==true)||(ship2==true)||(ship3==true)||(ship4==true))
                   {
                       game.gameHeroes[index].setheroRow(row+1);
                    mon=game.gameHeroes[index].getheroMoney();
                       mon=mon+10;
                       game.gameHeroes[index].setheroMoney(mon);
                       j=game.getgameUserpoints();
                       game.setgameUserpoints(j+1);
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
                   }
                   else
                   {
                       cout<<"You dont have a Ship!!!"<<endl;
                       return travel(game,index);
                   }
               }
               else if(map=="p")
               {
                        mon=game.gameHeroes[index].getheroMoney();
                       mon=mon+20;
                       game.gameHeroes[index].setheroMoney(mon);
                                              arm=game.gameHeroes[index].getheroArmysize();
                       arm=arm+10;
                       game.gameHeroes[index].setheroArmysize(arm);
                       game.gameHeroes[index].setheroRow(row+1);
                       j=game.getgameUserpoints();
                       game.setgameUserpoints(j+1);
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
               }
               else
               {
                   for(int p=0;p<26;p++)
                   {
                     cityyy=game.gameCities[p].getcityLetter();
                     if (map==cityyy)
                   {
                   
                       game.gameHeroes[index].setheroRow(row+1);
                             j=game.gameCities[p].getcityPoints();
                       l=game.gameCities[p].getcityMoney();
                       m=game.gameCities[p].getcityArmysize();
                       l=l+game.gameHeroes[index].getheroMoney();
                       j=j+game.getgameUserpoints();
                       m=m+game.gameHeroes[index].getheroArmysize();
                       game.gameHeroes[index].setheroArmysize(m);
                       game.gameHeroes[index].setheroMoney(l);
                       game.setgameUserpoints(j); 
                        return game;

                   }
                   }
                   
               }
           }
           else
           {
               cout<<"That would put you out of bounds, choose different location!!"<<endl;
               return travel(game,index);
           }
           return game;
               break;
            case 3://east
            map=game.map[newrow][newcolumn-1];
           if(newcolumn-1>=0)
           {
               if (map=="w")
               {
                   ship=game.gameHeroes[index].getheroShip();
                   ship1=game.gameHeroes[index].getheroWarrior(0).getwarriorShip();
                    ship2=game.gameHeroes[index].getheroWarrior(1).getwarriorShip();
                    ship3=game.gameHeroes[index].getheroWarrior(2).getwarriorShip();
                   ship4=game.gameHeroes[index].getheroWarrior(3).getwarriorShip();

                   if ((ship==true)||(ship1==true)||(ship2==true)||(ship3==true)||(ship4==true))
                   {
                       game.gameHeroes[index].setheroColumn(newcolumn);
                        mon=game.gameHeroes[index].getheroMoney();
                       mon=mon+10;
                       game.gameHeroes[index].setheroMoney(mon);
                       j=game.getgameUserpoints();
                       game.setgameUserpoints(j+1);
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
                   }
                else
                   {
                       cout<<"You dont have a Ship!!!"<<endl;
                       return travel(game,index);
                   }
               }
               else if(map=="p")
               {
                       game.gameHeroes[index].setheroColumn(newcolumn);
                        mon=game.gameHeroes[index].getheroMoney();
                       mon=mon+20;
                                              arm=game.gameHeroes[index].getheroArmysize();
                       arm=arm+10;
                       game.gameHeroes[index].setheroArmysize(arm);
                       game.gameHeroes[index].setheroMoney(mon);
                       j=game.getgameUserpoints();
                       game.setgameUserpoints(j+1);
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
               }
               else
               {
                   for(int p=0;p<26;p++)
                   {
                     cityyy=game.gameCities[p].getcityLetter();
                     if (map==cityyy)
                   {
                   
                       game.gameHeroes[index].setheroColumn(newcolumn);
                       j=game.gameCities[p].getcityPoints();
                       l=game.gameCities[p].getcityMoney();
                       m=game.gameCities[p].getcityArmysize();
                       l=l+game.gameHeroes[index].getheroMoney();
                       j=j+game.getgameUserpoints();
                       m=m+game.gameHeroes[index].getheroArmysize();
                       game.gameHeroes[index].setheroArmysize(m);
                       game.gameHeroes[index].setheroMoney(l);
                       game.setgameUserpoints(j); 
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
                        return game;

                   }
                   }
                   
               }
           }
           else
           {
               cout<<"That would put you out of bounds, choose different location!!"<<endl;
               return travel(game,index);
           }
           return game;
               break;
            case 4://west
               map=game.map[newrow][newcolumn+1];
           if(newcolumn+1<=16)
           {
               if (map=="w")
               {
                   ship=game.gameHeroes[index].getheroShip();
                   ship1=game.gameHeroes[index].getheroWarrior(0).getwarriorShip();
                    ship2=game.gameHeroes[index].getheroWarrior(1).getwarriorShip();
                    ship3=game.gameHeroes[index].getheroWarrior(2).getwarriorShip();
                   ship4=game.gameHeroes[index].getheroWarrior(3).getwarriorShip();

                   if ((ship==true)||(ship1==true)||(ship2==true)||(ship3==true)||(ship4==true))
                   {
                       game.gameHeroes[index].setheroColumn(column+1);
                        mon=game.gameHeroes[index].getheroMoney();
                       mon=mon+10;
                       
                       game.gameHeroes[index].setheroMoney(mon);
                       j=game.getgameUserpoints();
                       game.setgameUserpoints(j+1);
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
                   }
                else
                   {
                       cout<<"You dont have a Ship!!!"<<endl;
                       return travel(game,index);
                   }
               }
               else if(map=="p")
               {
                       game.gameHeroes[index].setheroColumn(column+1);
                    mon=game.gameHeroes[index].getheroMoney();
                       mon=mon+20;
                                              arm=game.gameHeroes[index].getheroArmysize();
                       arm=arm+10;
                       game.gameHeroes[index].setheroArmysize(arm);
                       game.gameHeroes[index].setheroMoney(mon);
                       j=game.getgameUserpoints();
                       game.setgameUserpoints(j+1);
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
               }
               else
               {
                   for(int p=0;p<26;p++)
                   {
                     cityyy=game.gameCities[p].getcityLetter();
                     if (map==cityyy)
                   {
                   
                       game.gameHeroes[index].setheroColumn(column+1);
                       j=game.gameCities[p].getcityPoints();
                       l=game.gameCities[p].getcityMoney();
                       m=game.gameCities[p].getcityArmysize();
                       l=l+game.gameHeroes[index].getheroMoney();
                       j=j+game.getgameUserpoints();
                       m=m+game.gameHeroes[index].getheroArmysize();
                       game.gameHeroes[index].setheroArmysize(m);
                       game.gameHeroes[index].setheroMoney(l);
                       game.setgameUserpoints(j);  
                       cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
                        return game;

                   }
                   }
                   
               }
           }
           else
           {
               cout<<"That would put you out of bounds, choose different location!!"<<endl;
               return travel(game,index);
           }
           return game;
                break;
           default: 
           cout<<"Not a valid input"<<endl;
            break;
    
}
}
Game rest(Game game,int index)
{
    string warriorss,warriorsss;
    Warrior wat;
    int stre;
    //if player decides to rest hero dos not move
    //and heros and warriors gain 1 strength
    for (int i=0;i<4;i++)
    {
        warriorss=game.gameHeroes[index].getheroWarrior(i).getwarriorName();
        //cout<<warriorss<<endl;
        if ((warriorss=="null")||(warriorss=="NULL"))
        {
            
        }
        else
        {
        for(int j=0;j<14;j++)
        {
            warriorsss=game.gameWarriors[j].getwarriorName();
            if (warriorss==warriorsss)
            {
                stre=game.gameWarriors[j].getwarriorStrength();
                stre=stre+1;
                //cout<<stre<<endl;
                game.gameWarriors[j].setwarriorStrength(stre);
                //cout<<game.gameWarriors[j].getwarriorStrength()<<endl;
            }
        }
        }
    }
        cout<<"You increases all your warriors strength by 1"<<endl;

    return game;
    
}

Game consult_with_gods(Game game,int index)
{
    //hero doesnt move 
    //gain 1 in morals
    string warriorss,warriorsss;
    Warrior wat;
    int stre;
    //if player decides to rest hero dos not move
    //and heros and warriors gain 1 strength
    for (int i=0;i<4;i++)
    {
        warriorss=game.gameHeroes[index].getheroWarrior(i).getwarriorName();
        //cout<<warriorss<<endl;
        if ((warriorss=="null")||(warriorss=="NULL"))
        {
            
        }
        else
        {
        for(int j=0;j<14;j++)
        {
            warriorsss=game.gameWarriors[j].getwarriorName();
            if (warriorss==warriorsss)
            {
                stre=game.gameWarriors[j].getwarriorMorale();
                stre=stre+1;
               // cout<<stre<<endl;
                game.gameWarriors[j].setwarriorMorale(stre);
                //cout<<game.gameWarriors[j].getwarriorMorale()<<endl;
            }
        }
        }
    }
        cout<<"You increases all your warriors morale by 1"<<endl;

    return game;
    
}
Game win(Game game,int index,int otherindex,int i)//if player wins a battle, speech or buy
{
    //losing hero is removed
    int money,influence,army,points,p;
    p=0;
    Warrior w1,w2;
    string heross,warriorss,herosss;
    if(i==1)
    {
        cout<<game.gameHeroes[otherindex].getheroName()<<" has retired."<<endl;
        money=game.gameHeroes[otherindex].getheroMoney();
        influence=game.gameHeroes[otherindex].getheroInfluence();
        army=game.gameHeroes[otherindex].getheroArmysize();
        points=game.gameHeroes[otherindex].getheroPoints();
        money=money+game.gameHeroes[index].getheroMoney();
        game.gameHeroes[index].setheroMoney(money);
        influence=influence+game.gameHeroes[index].getheroInfluence();
        game.gameHeroes[index].setheroInfluence(influence);
        army=army+game.gameHeroes[index].getheroArmysize();
        game.gameHeroes[index].setheroArmysize(army);
        points=points+game.gameHeroes[index].getheroPoints();
        game.gameHeroes[index].setheroPoints(points);
        game.gameHeroes[otherindex].setheroAlive(false);
        //Get the heroes warriors
    for (int k=0;k<14;k++)
    {
        warriorss=game.gameWarriors[k].getwarriorName();
        for (int i=0;i<7;i++)
        {
            for(int j=0;j<4;j++)
            {
                
                heross=game.gameHeroes[otherindex].getheroWarrior(j).getwarriorName();
                
                    if (heross==warriorss)
                    {
                        for(int l=0;l<4;l++)
                        {
                            herosss=game.gameHeroes[index].getheroWarrior(l).getwarriorName();
                            if (p==0)
                            {
                                if ((herosss=="null")||(herosss=="NULL"))
                                {
                                    w1=game.gameWarriors[k];
                                    game.gameHeroes[index].setheroWarrior(w1,l);
                                    cout<<"You got this warrior: "<<game.gameWarriors[k].getwarriorName()<<endl;
                                    p=1;
                                    
                                }
                            }
                        }
                        
                    }

            }
        }
                            p=0;

    }

        return game;
    }
    if(i==2)
    {
        cout<<game.gameHeroes[otherindex].getheroName()<<" has retired."<<endl;
        money=game.gameHeroes[otherindex].getheroMoney();
        influence=game.gameHeroes[otherindex].getheroInfluence();
        army=game.gameHeroes[otherindex].getheroArmysize();
        points=game.gameHeroes[otherindex].getheroPoints();
        money=money+game.gameHeroes[index].getheroMoney();
        game.gameHeroes[index].setheroMoney(money);
        influence=influence+game.gameHeroes[index].getheroInfluence();
        game.gameHeroes[index].setheroInfluence(influence);
        army=army+game.gameHeroes[index].getheroArmysize();
        game.gameHeroes[index].setheroArmysize(army);
        points=points+game.gameHeroes[index].getheroPoints();
        game.gameHeroes[index].setheroPoints(points);
        game.gameHeroes[otherindex].setheroAlive(false);
        //Get the heroes warriors
    for (int k=0;k<14;k++)
    {
        warriorss=game.gameWarriors[k].getwarriorName();
        for (int i=0;i<7;i++)
        {
            for(int j=0;j<4;j++)
            {
                heross=game.gameHeroes[otherindex].getheroWarrior(j).getwarriorName();
                cout<<heross<<" "<<warriorss<<endl;
                    if (heross==warriorss)
                    {
                        for(int l=0;l<4;l++)
                        {
                        herosss=game.gameHeroes[index].getheroWarrior(l).getwarriorName();
                        cout<<herosss<<endl;
                        if ((herosss=="null")||(herosss=="NULL"))
                        {
                            w1=game.gameWarriors[k];
                            game.gameHeroes[index].setheroWarrior(w1,l);
                            cout<<"You got this warrior: "<<game.gameWarriors[k].getwarriorName()<<endl;
                        }
                        }
                    }
                    
            }
        }
    }

        return game;
    }
    //main hero aquires warriors,influence,money and army size
    
}
Game lose(Game game,int index,int otherindex,int i)//if player loses battle, speech or buy 
{        int infl,money;

    //if user lost battle then end the game
    //if lost buyhero,encounter ends, other hero escapes user loses half money
    //if lost give speech lose half their influenc
    if (i==1)
    {
        infl=game.gameHeroes[index].getheroInfluence()/2;
        game.gameHeroes[index].setheroInfluence(infl);
        cout<<"You lost influence! Now you have "<<game.gameHeroes[index].getheroInfluence()<<endl;
        return game;
    }
    if (i==2)
    {
        money=game.gameHeroes[index].getheroMoney()/2;
        game.gameHeroes[index].setheroMoney(money);
        cout<<"You lost money! Now you have "<<game.gameHeroes[index].getheroMoney()<<endl;
        return game;
    }
    if (i==3)
    {
        cout<<"You died!! Better luck next time "<<game.getgameUser()<<" you had "<<game.getgameUserpoints()<<" points."<<endl;
        game.gameHeroes[index].setheroAlive(false);
        return game;
        
    }



    return game;
}
double computeprob(Game game,int index,int otherindex,int i)//computes the probability in an encounter
{
        double hero1,hero2;
    double prob;
    Warrior warr;
    string warrname,warr2name;
    if (i==1)
    {
        hero1=game.gameHeroes[index].getheroInfluence();
        //cout<<hero1<<endl;
        warr=game.gameHeroes[otherindex].getheroWarrior(0);
        warrname=warr.getwarriorName();
        //cout<<warrname<<endl;
        for (int j=0;j<14;j++)
        {
            warr2name=game.gameWarriors[j].getwarriorName();
            if ((warrname=="null")||(warr2name=="NULL"))
            {
                prob=1;
                return prob;
            }
            if (warr2name==warrname)
            {
                //cout<<warrname<<endl;
                hero2=game.gameWarriors[j].getwarriorMorale();
                //cout<<hero2<<endl;
                //cout<<hero2<<endl;
                hero1=hero1/1600;
                hero2=(hero2/-100)+1;
               // cout<<hero1<<" "<<hero2<<endl;
                prob=hero1*hero2;
               // cout<<prob<<endl;
                return prob;
            }

            
        }
        
    }
    if (i==2)
    {
        hero1=game.gameHeroes[index].getheroMoney();
        warr=game.gameHeroes[otherindex].getheroWarrior(0);
        warrname=warr.getwarriorName();
        for (int j=0;j<14;j++)
        {
            warr2name=game.gameWarriors[j].getwarriorName();
            if ((warrname=="null")||(warr2name=="NULL"))
            {
                prob=1;
                return prob;
            }
            if (warr2name==warrname)
            {
                hero2=game.gameWarriors[j].getwarriorLoyalty();
                hero1=hero1/1780;
                hero2=(hero2/-100)+1;
                prob=hero1*hero2;
                return prob;
            }
        }
    }
    
}
Game give_speech(Game game,int index,int otherindex)
{//compute probabilty of winning encounter
//if they win go to win fucntion 
//if they lose go to lose function
    double prob;
    prob=computeprob(game,index,otherindex,1);
    //cout<<prob<<endl;
    if((prob>=0)&&(prob<0.5))
    {
        cout<<"You lost half your influence!"<<endl;
       game= lose(game,index,otherindex,1);
       return game;
    }
    if (prob>=0.5)
    {
        game=win(game,index,otherindex,1);
    return game;
}
}
Game buy_hero(Game game,int index,int otherindex)
{//compute probabilty of winning encounter
//if they win go to win fucntion 
//if they lose go to lose function 
    double prob;
    prob=computeprob(game,index,otherindex,2);
    //cout<<prob<<endl;
    if((prob>=0)&&(prob<0.5))
    {
        cout<<"You lost half your money!"<<endl;
       game= lose(game,index,otherindex,2);
       return game;
    }
    if (prob>=0.5)
    {
        game=win(game,index,otherindex,1);
    }
    return game;
}
Game battle(Game game,int index,int otherindex)
{//compute probabilty of winning encounter
//if they win go to win fucntion 
//if they lose go to lose function
string w1,w2,w3,w4;
w1=game.gameHeroes[index].getheroWarrior(0).getwarriorName();
w3=game.gameHeroes[index].getheroWarrior(2).getwarriorName();
w2=game.gameHeroes[otherindex].getheroWarrior(0).getwarriorName();
w4=game.gameHeroes[otherindex].getheroWarrior(2).getwarriorName();
if (((w1=="null")||(w1=="NULL"))&&((w3=="null")||(w3=="NULL")))
{
    cout<<"You have no warriors so you lose!!"<<endl;
    game=lose(game,index,otherindex,3);
    
    return game;
}
if (((w2=="null")||(w2=="NULL"))&&((w4=="null")||(w4=="NULL")))
{
    cout<<"The other hero has no warriors so you win!!"<<endl;
    game=win(game,index,otherindex,1);
    return game;
}
cout<<"Choose a warrior for battle:"<<endl<<"1.) "<<game.gameHeroes[index].getheroWarrior(0).getwarriorName()<<endl<<"2.) "<<game.gameHeroes[index].getheroWarrior(1).getwarriorName()<<endl<<"3.) "<<game.gameHeroes[index].getheroWarrior(2).getwarriorName()<<endl<<"4.) "<<game.gameHeroes[index].getheroWarrior(3).getwarriorName()<<endl;
  int k,strengthplay,armyplay,strengthoth,armyoth,chance1,chance2;
  string warriorplay,warr2name,warrioroth,warr3name;
  armyplay=game.gameHeroes[index].getheroArmysize();
  armyoth=game.gameHeroes[otherindex].getheroArmysize();
  cin>>k;
  switch(k)
           {
           case 1:  //
           cout<<"You chose: "<<game.gameHeroes[index].getheroWarrior(0).getwarriorName()<<endl;
               warriorplay=game.gameHeroes[index].getheroWarrior(0).getwarriorName();
               for (int j=0;j<14;j++)
                {
                    warr2name=game.gameWarriors[j].getwarriorName();
                    if (warr2name==warriorplay)
                    {
                        strengthplay=game.gameWarriors[j].getwarriorStrength();
                    }
                }
               warrioroth=game.gameHeroes[otherindex].getheroWarrior(0).getwarriorName();
               for (int j=0;j<14;j++)
                {
                    warr3name=game.gameWarriors[j].getwarriorName();
                    if (warr3name==warrioroth)
                    {
                        strengthoth=game.gameWarriors[j].getwarriorStrength();
                    }
                }
                chance1=strengthplay*armyplay;
                chance2=strengthoth*armyoth;
                if (chance1>=chance2)
                {
                    cout<<"You won the battle!!"<<endl;
                    game=win(game,index,otherindex,1);
                    return game;
                }
                if (chance2>chance1)
                {
                    cout<<"You lost!!"<<endl;
                        game=lose(game,index,otherindex,3);
                     return game;
                }
               return game;
                   break;
           case 2:  //
                      cout<<"You chose: "<<game.gameHeroes[index].getheroWarrior(1).getwarriorName()<<endl;
               warriorplay=game.gameHeroes[index].getheroWarrior(1).getwarriorName();
               for (int j=0;j<14;j++)
                {
                    warr2name=game.gameWarriors[j].getwarriorName();
                    if (warr2name==warriorplay)
                    {
                        strengthplay=game.gameWarriors[j].getwarriorStrength();
                    }
                }
               warrioroth=game.gameHeroes[otherindex].getheroWarrior(0).getwarriorName();
               for (int j=0;j<14;j++)
                {
                    warr3name=game.gameWarriors[j].getwarriorName();
                    if (warr3name==warrioroth)
                    {
                        strengthoth=game.gameWarriors[j].getwarriorStrength();
                    }
                }
                chance1=strengthplay*armyplay;
                chance2=strengthoth*armyoth;
                if (chance1>=chance2)
                {
                    cout<<"You won the battle!!"<<endl;
                    game=win(game,index,otherindex,1);
                    return game;
                }
                if (chance2>chance1)
                {
                    cout<<"You lost!!"<<endl;
                        game=lose(game,index,otherindex,3);
                     return game;
                }
               return game;
                   break;
            case 3:
                cout<<"You chose: "<<game.gameHeroes[index].getheroWarrior(2).getwarriorName()<<endl;
               warriorplay=game.gameHeroes[index].getheroWarrior(2).getwarriorName();
               for (int j=0;j<14;j++)
                {
                    warr2name=game.gameWarriors[j].getwarriorName();
                    if (warr2name==warriorplay)
                    {
                        strengthplay=game.gameWarriors[j].getwarriorStrength();
                    }
                }
               warrioroth=game.gameHeroes[otherindex].getheroWarrior(0).getwarriorName();
               for (int j=0;j<14;j++)
                {
                    warr3name=game.gameWarriors[j].getwarriorName();
                    if (warr3name==warrioroth)
                    {
                        strengthoth=game.gameWarriors[j].getwarriorStrength();
                    }
                }
                chance1=strengthplay*armyplay;
                chance2=strengthoth*armyoth;
                if (chance1>=chance2)
                {
                    cout<<"You won the battle!!"<<endl;
                    game=win(game,index,otherindex,1);
                    return game;
                }
                if (chance2>chance1)
                {
                    cout<<"You lost!!"<<endl;
                        game=lose(game,index,otherindex,3);
                     return game;
                }
                return game;
                    break;
            case 4:
                cout<<"You chose: "<<game.gameHeroes[index].getheroWarrior(3).getwarriorName()<<endl;
               warriorplay=game.gameHeroes[index].getheroWarrior(3).getwarriorName();
               for (int j=0;j<14;j++)
                {
                    warr2name=game.gameWarriors[j].getwarriorName();
                    if (warr2name==warriorplay)
                    {
                        strengthplay=game.gameWarriors[j].getwarriorStrength();
                    }
                }
               warrioroth=game.gameHeroes[otherindex].getheroWarrior(0).getwarriorName();
               for (int j=0;j<14;j++)
                {
                    warr3name=game.gameWarriors[j].getwarriorName();
                    if (warr3name==warrioroth)
                    {
                        strengthoth=game.gameWarriors[j].getwarriorStrength();
                    }
                }
                chance1=strengthplay*armyplay;
                chance2=strengthoth*armyoth;
                if (chance1>=chance2)
                {
                    cout<<"You won the battle!!"<<endl;
                    game=win(game,index,otherindex,1);
                    return game;
                }
                if (chance2>chance1)
                {
                    cout<<"You lost!!"<<endl;
                        game=lose(game,index,otherindex,3);
                     return game;
                }
                return game;
                    break;
           default: 
           return battle(game,index,otherindex);
            break;
    
}


    return game;
}
Game makedecision(Game game,int index,int otherindex)
{
cout<<game.gameHeroes[otherindex].getheroName()<<" is nearby!!"<<endl<<"What would you like to do?"<<endl<<"1.) Give a Speech"<<endl<<"2.) Buy them outright"<<endl<<"3.) Battle"<<endl;
  int k;
  cin>>k;
  switch(k)
           {
           case 1:  //
           game=give_speech(game,index,otherindex);
           return game;
               break;
           case 2:  //
           game=buy_hero(game,index,otherindex);
           return game;
               break;
            case 3:
            game=battle(game,index,otherindex);
            return game;
                break;
           default: 
           return makedecision(game,index,otherindex);
            break;
    
}
}
Game check_area(Game game,int index)//takes location of player//checks to see if there is a warrior or hero within 2 tile area
{
    int roww,colnn,rowww,colnnn,diff,diffc,diffc2;
    bool alive;
    roww=game.gameHeroes[index].getheroRow();
    colnn=game.gameHeroes[index].getheroColumn();
    for (int i=0;i<7;i++)
    {
        diff=0;
        diffc=0;
        rowww=0;
        colnnn=0;
        if (index==i)
        {
            
        }
        else
        {
            rowww=game.gameHeroes[i].getheroRow();
            colnnn=game.gameHeroes[i].getheroColumn();
            if (roww>=rowww)
            {
                diff=roww-rowww;
            }
            if (rowww>roww)
            {
                diff=rowww-roww;
            }
            diffc=colnn-colnnn;
            diffc2=colnnn-colnn;
            if (diffc2>diffc)
            {
                diffc=diffc2;
            }
           // cout<<game.gameHeroes[i].getheroName()<<endl;
            //cout<<colnn<<" "<<colnnn<<endl;
            //cout<<diff<<" "<<diffc<<endl;
            if ((diff<=2)&&(diffc<=2))
            {
                alive=game.gameHeroes[i].getheroAlive();
                //cout<<"hiii"<<alive<<endl;
                if (alive==true)
                {
                     game=makedecision(game,index,i);
                    return game;
                }
                
            }
            
            
        }
        
    }
    cout<<"There are no other heroes nearby"<<endl;
    return game;
}
Game makedecisionw(Game game,int index,int otherindex)
{
    cout<<game.gameWarriors[otherindex].getwarriorName()<<" the warrior is nearby!!"<<endl<<"What would you like to do?"<<endl<<"1.) Take them"<<endl<<"2.) Leave them"<<endl;
  int k,p,u;
  p=0;
  u=0;
  Warrior w1;
  string herosss;
  cin>>k;
  switch(k)
           {
           case 1:  //
            w1=game.gameWarriors[otherindex];
            for(int l=0;l<4;l++)
                        {
                            herosss=game.gameHeroes[index].getheroWarrior(l).getwarriorName();
                                if (u==0)
                                {
                                    if ((herosss=="null")||(herosss=="NULL"))
                                    {
                                        
                                        game.gameHeroes[index].setheroWarrior(w1,l);
                                        cout<<"You got this warrior: "<<game.gameWarriors[otherindex].getwarriorName()<<endl;
                                        u=1;
                                        
                                        
                                    }
                                    else
                                    {
                                        p++;
                                    }
                                }
                            }
            if(p==4)
            {
                cout<<"You have no space for a hero"<<endl;
            }
           return game;
               break;
           case 2:  //
           return game;
               break;
           default: 
           return makedecision(game,index,otherindex);
            break;
    
}
    
}
Game check_areaw(Game game,int index)
{
    string heross,warriorss;
   
        int roww,colnn,rowww,colnnn,diff,diffc,diffc2,check;
    bool alive;
    roww=game.gameHeroes[index].getheroRow();
    colnn=game.gameHeroes[index].getheroColumn();
    for (int i=0;i<14;i++)
    {
        diff=0;
        diffc=0;
        rowww=0;
        colnnn=0;
            rowww=game.gameWarriors[i].getwarriorRow();
            colnnn=game.gameWarriors[i].getwarriorColumn();
            warriorss=game.gameWarriors[i].getwarriorName();
            if (roww>=rowww)
            {
                diff=roww-rowww;
            }
            if (rowww>roww)
            {
                diff=rowww-roww;
            }
            diffc=colnn-colnnn;
            diffc2=colnnn-colnn;
            if (diffc2>diffc)
            {
                diffc=diffc2;
            }
           // cout<<game.gameHeroes[i].getheroName()<<endl;
            //cout<<colnn<<" "<<colnnn<<endl;
            //cout<<diff<<" "<<diffc<<endl;
            if ((diff<=2)&&(diffc<=2))
            {
                        for (int i=0;i<7;i++)
                        {
                            for(int j=0;j<4;j++)
                            {
                                heross=game.gameHeroes[i].getheroWarrior(j).getwarriorName();
                                    if (heross==warriorss)
                                    {
                                        check=27;
                                    }
                                    
                            }
                        }
                if (check==27)
                {
                    
                }
                else
                {
                    game=makedecisionw(game,index,i);
                    return game;
                }
                
                
            }
            
            
        }
        
    
    cout<<"There are no other Warriors nearby"<<endl;
    return game;
    
}
int randomnumnn()
{
    int v1;
v1 = rand() % 4; 
return v1;
}
Game changeherolocal(Game game,int index)
{
    string heross,warriorss;
    int heroc,heror,check,num,roww,colnn;
    for(int i=0;i<6;i++)
    {
        if (index==i)
        {
        }
        else 
        {
            roww=game.gameHeroes[i].getheroRow();
            colnn=game.gameHeroes[i].getheroColumn();
            num=randomnumnn();
            if (num==0)
            {
                roww=roww-1;
            }
            else if (num==1)
            {
                roww=roww+1;         
            }
            else if(num==2)
            {
                colnn=colnn-1;
            }
            else if(num==3)
            {
                colnn=colnn+1;      
            }
            if(roww<=0)
            {
                roww=roww+5;
            }
            if(roww>25)
            {
                roww=roww-5;
            }
            if(colnn<=0)
            {
                colnn=colnn+5;
            }
            if(roww>16)
            {
                colnn=colnn-5;
            }
            //cout<<game.gameHeroes[i].getheroRow()<<endl;
            //cout<<game.gameHeroes[i].getheroColumn()<<endl;
            game.gameHeroes[i].setheroRow(roww);
            game.gameHeroes[i].setheroColumn(colnn);
            //cout<<game.gameHeroes[i].getheroRow()<<endl;
            //cout<<game.gameHeroes[i].getheroColumn()<<endl;
        }
        
    }
    for (int k=0;k<14;k++)
    {
        warriorss=game.gameWarriors[k].getwarriorName();
        check=0;
        for (int i=0;i<7;i++)
        {
            for(int j=0;j<4;j++)
            {
                heross=game.gameHeroes[i].getheroWarrior(j).getwarriorName();
                    if (heross==warriorss)
                    {
                        roww=game.gameHeroes[i].getheroRow();
                        colnn=game.gameHeroes[i].getheroColumn();
                        game.gameWarriors[k].setwarriorColumn(colnn);
                        game.gameWarriors[k].setwarriorRow(roww);
                    }
                    
            }
        }
    }
    return game;
}
Game changwarlocal(Game game)
{
    string heross,warriorss;
    int heroc,heror,check,num,roww,colnn;
            
    for (int k=0;k<14;k++)
    {
        warriorss=game.gameWarriors[k].getwarriorName();
        check=0;
        for (int i=0;i<7;i++)
        {
            for(int j=0;j<4;j++)
            {
                heross=game.gameHeroes[i].getheroWarrior(j).getwarriorName();
                    if (heross==warriorss)
                    {
                        check=27;
                    }
                    
            }
        }
        if (check==27)
        {
        }
        else
        {
            roww=game.gameWarriors[k].getwarriorRow();
            colnn=game.gameWarriors[k].getwarriorColumn();
            num=randomnumnn();
            //cout<<num<<endl;
            if (num==0)
            {
                roww=roww-1;
            }
            else if (num==1)
            {
                roww=roww+1;         
            }
            else if(num==2)
            {
                colnn=colnn-1;
            }
            else if(num==3)
            {
                colnn=colnn+1;      
            }
            if(roww<=0)
            {
                roww=roww+5;
            }
            if(roww>25)
            {
                roww=roww-5;
            }
            if(colnn<=0)
            {
                colnn=colnn+5;
            }
            if(colnn>16)
            {
                colnn=colnn-5;
            }
       // cout<<game.gameWarriors[k].getwarriorColumn()<<endl;
        //cout<<game.gameWarriors[k].getwarriorRow()<<endl;

        game.gameWarriors[k].setwarriorRow(roww);
        //cout<<game.gameWarriors[k].getwarriorRow()<<endl;
        game.gameWarriors[k].setwarriorColumn(colnn);   
       // cout<<game.gameWarriors[k].getwarriorColumn()<<endl;
        //cout<<game.gameWarriors[k].getwarriorRow()<<endl;
        }
        check=0;
    }
    return game;

    
}




void whitewalkers()//depenging on certain conditions
{
    //if the user reaches certain milestones in the game they will have to face the white walkers
    //if they win or lose either way the game ends 
}

void print_map(Game game)
{
    for(int i=0;i<25;i++)
    {
        for (int j=0;j<16;j++)
        {
            cout<<game.map[i][j];
        }
        cout<<endl;
    }
}

int choosehero(Game game,string user_name)
{
  cout<<endl<<"Would you like to choose a hero "<<game.getgameUser()<<", Your Grace?(Y/N):";
  char k;
  cin>>k;
  switch(k)
           {
           case 'y':  //
           return whichhero(game);
               break;
           case 'n':  //
               return 27;
               break;
            case 'N':
               return 27;
                break;
            case'Y':
             return whichhero(game);
                break;
           default: 
           cout<<"Enter a Y or N";
            break;
}
}
Game createhero(Game game,string user_name)//creates new hero 
{
    int money,influence,armysize,row,column;
    cout<<endl<<"Your Grace "<< game.getgameUser()<<", you have chosen to go on this journey alone.Please provide starting values for your adventure."<<endl<<endl;
    game.gameHeroes[6].setheroName(user_name);
    for(int i=0;i<1000;i++)
    {
        cout<<"Enter the amount of money you desire between 0 to 10000:"<<endl;
        cin>>money;
        if((money>=0)&&(money<=10000))
        {
            game.gameHeroes[6].setheroMoney(money);
            i=100000;
        }
        
    }
    for(int j=0;j<1000;j++)
    {
    cout<<"Enter the amount of influence you desire between 0 to 10000:"<<endl;
        cin>>influence;
        if((influence>=0)&&(influence<=10000))
        {
            game.gameHeroes[6].setheroInfluence(influence);
            j=100000;
        }
        
    }
    for(int k=0;k<1000;k++)
    {
    cout<<"Enter the amount of army size you desire between 0 to 10000:"<<endl;
        cin>>armysize;
        if((armysize>=0)&&(armysize<=10000))
        {
            game.gameHeroes[6].setheroArmysize(armysize);
            k=100000;
        }
        
    }
    game=settinglocation(game);
    
return game;

}
Game settinglocation(Game game)
{
    int check1,check2;
    int row,column;
    bool ship;
    string test;
    for(int l=0;l<1000;l++)
    {
    cout<<"Enter the row you wish to start at between 1 to 25:"<<endl;
        cin>>row;
        if((row>=1)&&(row<=25))
        {
            l=100000;
        }
        
    }
    for(int z=0;z<1000;z++)
    {
    cout<<"Enter the column you wish to start at between 1 to 16:"<<endl;
        cin>>column;
        if((column>=1)&&(column<=16))
        {
            z=100000;
        }
        
    }
    for(int i=0;i<6;i++)
    {
        check1=game.gameHeroes[i].getheroRow();
        if (check1==row)
        {
            check2=game.gameHeroes[i].getheroColumn();
            if (check2==column)
            {
                cout<<"There is already a Hero at this location"<<endl;
                settinglocation(game);
            }
        }
    }
    for(int j=0;j<6;j++)//need to check and see if there are any warrriors in that location
    {
        check1=game.gameWarriors[j].getwarriorRow();
        if (check1==row)
        {
            check2=game.gameWarriors[j].getwarriorColumn();
            if (check2==column)
            {
                cout<<"There is already a Hero at this location"<<endl;
                settinglocation(game);
            }
        }
    }
    
                
            game.gameHeroes[6].setheroRow(row);
            game.gameHeroes[6].setheroColumn(column);
            
            row=row-1;
            column=column-1;
            test=game.map[row][column];
            if (test=="w")
            {
                ship=true;
                game.gameHeroes[6].setheroShip(ship);
                cout<<"The location entered was in water so here is a SHIP!!!!!!!!!!"<<endl;
            }
            else 
            {
                ship=false;
                game.gameHeroes[6].setheroShip(ship);
            }
            return game;
}
void displaySurroundings(int row,int column,Game game)
{
    cout<<endl<<"Here is a map of your surroundings"<<endl;
    cout<<"You are at row "<<row<<" and column "<<column<<endl<<endl;
    int newrow,newcolumn,newwrow,newwcolumn;
    int dragrow,dragcol;
    string change;
    row=row-1;
    newrow=row-3;
    newwrow=row+4;
    if (newrow<0)
    {
        newrow=0;
    }
    if (newwrow>25)
    {
        newwrow=25;
    }
    column=column-1;
    newcolumn=column-3;
    newwcolumn=column+4;
    if (newcolumn<0)
    {
        newcolumn=0;
    }
    if (newwcolumn>16)
    {
        newwcolumn=16;
    }
    for(int i=newrow;i<newwrow;i++)
    {
        for (int j=newcolumn;j<newwcolumn;j++)
        {
            change=game.map[i][j];
            for(int k=0;k<5;k++)
            {
                dragrow=game.getdragonglassrow(k);
                dragcol=game.getdragonglasscolumn(k);
                if ((dragcol==j+1)&&(dragrow==i+1))
                {
                    cout<<"d ";
                    change="no";
                }
            }
            if ((i==row)&&(j==column))
            {
                cout<<"u ";
            }
            else if (change=="w")
            {
                cout<<"~ ";
            }
            else if (change=="p")
            {
                cout<<"* ";
            }
            else
            {
                if (change=="no")
                {
                }
                else
                {
                cout<<change<<" ";
                }
            }
        }
        cout<<endl;
    }
}


int whichhero(Game game)
{
    cout<<endl<<"Please choose from the following heroes:"<<endl<<endl<<"1. Cersei Lannister"<<endl<<"2. Stannis Baratheon"<<endl<<"3. Jon Snow"<<endl<<"4. Sansa Stark"<<endl;
    cout<<"5. Euron Greyjoy"<<endl<<"6. Daenerys Targaryen"<<endl;
    int i=0;
    cin>>i;
    //while((i==1)||(i==2)||(i==3)||(i==4))
    //{
     switch(i)
           {
           case 1:  
                    cout<<"You Chose: "<<game.gameHeroes[0].getheroName()<<endl;
           return 0;
           
                break;
           case 2:  
                     cout<<"You Chose: "<<game.gameHeroes[1].getheroName()<<endl;
                     return 1;
               break;
            case 3:
                      cout<<"You Chose: "<<game.gameHeroes[2].getheroName()<<endl;
                      return 2;
                break;
            case 4:
                      cout<<"You Chose: "<<game.gameHeroes[3].getheroName()<<endl;
                      return 3;
                break;
            case 5:
                      cout<<"You Chose: "<<game.gameHeroes[4].getheroName()<<endl;
                      return 4;
                break;
            case 6:
                      cout<<"You Chose: "<<game.gameHeroes[5].getheroName()<<endl;
                      return 5;
                break;
           default: 
           
            break;
           //}

}
//return whichhero(game);
}
int randomnum()
{
    int v1;
v1 = rand() % 25; 
return v1;
}
int randomnu()
{
    int v1;
v1 = rand() % 16;  
return v1;
}

Game randomizewarrior(Game game)
{
    for(int i=0;i<14;i++)
    {

        game.gameWarriors[i].setwarriorRow(randomnum());

    }
    for(int i=0;i<14;i++)
    {
        game.gameWarriors[i].setwarriorColumn(randomnu());
    }
    
    
    return game;
}
    //
    //This is where all the fucntions are put into the main to make the game run!!
    //
Game choosemove(Game game,int index)
{
  cout<<endl<<"What would you like to do next?"<<endl<<endl<<"1.) Travel"<<endl<<"2.) Rest"<<endl<<"3.) Consult with the gods"<<endl;
  int k;
  cin>>k;
 // while (cin>>k)
 // {
  switch(k)
           {
           case 1:  //
           game=travel(game,index);
           return game;
               break;
           case 2:  //
           game=rest(game,index);
           return game;
               break;
            case 3:
            game=consult_with_gods(game,index);
            return game;
                break;
           default: 
           return choosemove(game,index);
            break;
//}
}
}
Game inti_warriors(Game game)
{
    string heross,warriorss;
    int heroc,heror,check;
            
    for (int k=0;k<14;k++)
    {
        warriorss=game.gameWarriors[k].getwarriorName();
        check=0;
        for (int i=0;i<6;i++)
        {
            for(int j=0;j<4;j++)
            {
                heross=game.gameHeroes[i].getheroWarrior(j).getwarriorName();
                    if (heross==warriorss)
                    {
                        heror=game.gameHeroes[i].getheroRow();
                        heroc=game.gameHeroes[i].getheroColumn();
                        game.gameWarriors[k].setwarriorColumn(heroc);
                        game.gameWarriors[k].setwarriorRow(heror);
                        check=27;
                    }
                    
            }
        }
        if (check==27)
        {
        }
        else
        {
        game.gameWarriors[k].setwarriorRow(randomnum());
        //cout<<game.gameWarriors[k].getwarriorRow()<<endl;
        game.gameWarriors[k].setwarriorColumn(randomnu());   
        }
        check=0;
    }
    return game;
}
Game settingpoints(Game game)
{int ro,col,j,l,m;
string ma,cityyy;
    for(int i=0;i<6;i++)
    {
        col=game.gameHeroes[i].getheroColumn()-1;
        ro=game.gameHeroes[i].getheroRow()-1;
         ma=game.map[ro][col];
        // cout<<ro<<" "<<col<<" "<<ma<<endl;
               if (ma=="w")
               {
                       j=game.gameHeroes[i].getheroPoints();
                       game.gameHeroes[i].setheroPoints(j+1);
               }
               else if(ma=="p")
               {
                       j=game.gameHeroes[i].getheroPoints();
                       game.gameHeroes[i].setheroPoints(j+1);
               }
               else
               {
                   for(int p=0;p<26;p++)
                   {
                         cityyy=game.gameCities[p].getcityLetter();
                         if (ma==cityyy)
                       {
                       
                           j=game.gameCities[p].getcityPoints();
                           l=game.gameCities[p].getcityMoney();
                           m=game.gameCities[p].getcityArmysize();
                           l=l+game.gameHeroes[i].getheroMoney();
                           j=j+game.gameHeroes[i].getheroPoints();
                           m=m+game.gameHeroes[i].getheroArmysize();
                           game.gameHeroes[i].setheroArmysize(m);
                           game.gameHeroes[i].setheroMoney(l);
                           game.gameHeroes[i].setheroPoints(j) ;


                       }
                   }
                }
        }
        return game;

}
Game checkfordragon(Game game,int index)
{
    int row,column,rowd,columnd;
    string warriorplay,warr2name;
    row=game.gameHeroes[index].getheroRow();
    column=game.gameHeroes[index].getheroColumn();
    for (int i=0;i<5;i++)
    {
        rowd=game.getdragonglassrow(i);
        columnd=game.getdragonglasscolumn(i);
        if((row==rowd)&&(column==columnd))
        {
            cout<<"Great news! You have stumbled upon Dragonglass. Choose which one"<<endl<<"of your warriors would you like to equip with Dragonglass:"<<endl;
            cout<<"1.) "<<game.gameHeroes[index].getheroWarrior(0).getwarriorName()<<endl<<"2.) "<<game.gameHeroes[index].getheroWarrior(1).getwarriorName()<<endl<<"3.) "<<game.gameHeroes[index].getheroWarrior(2).getwarriorName()<<endl<<"4.) "<<game.gameHeroes[index].getheroWarrior(3).getwarriorName()<<endl;
              int k;
                 cin>>k;
                  switch(k)
                           {
                           case 1:  //
                           cout<<"You chose: "<<game.gameHeroes[index].getheroWarrior(0).getwarriorName()<<endl;
                               warriorplay=game.gameHeroes[index].getheroWarrior(0).getwarriorName();
                               for (int j=0;j<14;j++)
                                {
                                    warr2name=game.gameWarriors[j].getwarriorName();
                                    if (warr2name==warriorplay)
                                    {
                                        game.gameWarriors[j].setwarriorDragonglass(true);
                                    }
                                }
                             
                               return game;
                                   break;
                           case 2:  //
                                      cout<<"You chose: "<<game.gameHeroes[index].getheroWarrior(1).getwarriorName()<<endl;
                               warriorplay=game.gameHeroes[index].getheroWarrior(1).getwarriorName();
                                for (int j=0;j<14;j++)
                                {
                                    warr2name=game.gameWarriors[j].getwarriorName();
                                    if (warr2name==warriorplay)
                                    {
                                        game.gameWarriors[j].setwarriorDragonglass(true);
                                    }
                                }
                               return game;
                                   break;
                            case 3:
                                cout<<"You chose: "<<game.gameHeroes[index].getheroWarrior(2).getwarriorName()<<endl;
                               warriorplay=game.gameHeroes[index].getheroWarrior(2).getwarriorName();
                                for (int j=0;j<14;j++)
                                {
                                    warr2name=game.gameWarriors[j].getwarriorName();
                                    if (warr2name==warriorplay)
                                    {
                                        game.gameWarriors[j].setwarriorDragonglass(true);
                                    }
                                }
                                return game;
                                    break;
                            case 4:
                                cout<<"You chose: "<<game.gameHeroes[index].getheroWarrior(3).getwarriorName()<<endl;
                               warriorplay=game.gameHeroes[index].getheroWarrior(3).getwarriorName();
                               for (int j=0;j<14;j++)
                                {
                                    warr2name=game.gameWarriors[j].getwarriorName();
                                    if (warr2name==warriorplay)
                                    {
                                        game.gameWarriors[j].setwarriorDragonglass(true);
                                    }
                                }
                                return game;
                                    break;
                           default: 
                           return checkfordragon(game,index);
                            break;
                    
                }
    }
    
}
return game;
}
Game precondtioned_events(Game game)
{
    //depending on certain circumstances heros will gain stuff once a milestone is reached
    Warrior dragon,null;//gets dragon
    Warrior w1;
    null.setwarriorName("null");
    int army,check;
    string warr;
    if(game.gameHeroes[5].getheroAlive()==true)
    {
        dragon.setwarriorMorale(80);
        dragon.setwarriorName("Dragons");
        dragon.setwarriorStrength(180);
        dragon.setwarriorLoyalty(100);
        check=0;
        for (int i=0;i<4;i++)
        {
            warr=game.gameHeroes[5].getheroWarrior(i).getwarriorName();
            if ((warr=="null")||(warr=="NULL"))
            {
                if (check==0)
                {
                game.gameHeroes[5].setheroWarrior(dragon,i);
                check=1;
                }
            }
            else if ((i==3)&&(check=0))
            {
            game.gameHeroes[5].setheroWarrior(dragon,3);

            }
        }
        army=game.gameHeroes[5].getheroArmysize();
        army=army+5000;
        game.gameHeroes[5].setheroArmysize(army);
    }
    //stansa dies
    if(game.gameHeroes[1].getheroAlive()==true)
    {
                game.gameHeroes[1].setheroAlive(false);
            char k;
            cout<<"Stannis has retired. Press F to pay respects."<<endl;
            cin>>k;
            switch(k)
                   {
                   case 'f':  //
                   cout<<"mood"<<endl;
                       break;
                   case 'F':  //
                   cout<<"mood"<<endl;
                      
                   default: 
                   cout<<"Have you no respect?! Press F to pay respects."<<endl;
                    break;
        }
    }
    //if sansa is alive then they get a warrior
    if (game.gameHeroes[3].getheroAlive()==true)
    {
        w1=game.gameWarriors[9];
        game.gameHeroes[3].setheroWarrior(w1,0);
    }
    if(game.gameHeroes[0].getheroAlive()==true)
    {
        game.gameHeroes[0].setheroWarrior(null,0);
    }
return game;
}
Game winter(Game game,int index,int i)
{   //winter will have a 30 percent chance of occuring and if it does then the player might end up with these possibilities
    //drought
    //desserter
    //jackpot
    //kindness
switch(i)
           {
           case 0:  //drought
           {
                string warriorss,warriorsss;
                Warrior wat;
                int stre,morl;
                for (int i=0;i<4;i++)
                {
                    warriorss=game.gameHeroes[index].getheroWarrior(i).getwarriorName();
                    //cout<<warriorss<<endl;
                    if ((warriorss=="null")||(warriorss=="NULL"))
                    {
                        
                    }
                    else
                    {
                        for(int j=0;j<14;j++)
                        {
                            warriorsss=game.gameWarriors[j].getwarriorName();
                            if (warriorss==warriorsss)
                            {
                                stre=game.gameWarriors[j].getwarriorStrength();
                                stre=stre-10;
                                //cout<<stre<<endl;
                                game.gameWarriors[j].setwarriorStrength(stre);
                                morl=game.gameWarriors[j].getwarriorMorale();
                                morl=morl-10;
                                game.gameWarriors[j].setwarriorMorale(morl);
                                
                            }
                        }
                    }
                }
                cout<<"There was a drought and all you warriors lost 10 strength and morale"<<endl;
           return game;
               break;
           }
           case 1:  //Deserters
           {
                string warriorss,warriorsss;
                Warrior wat;
                int lol,army;
                army=game.gameHeroes[index].getheroArmysize();
                army=army-10;
                game.gameHeroes[index].setheroArmysize(army);
                for (int i=0;i<4;i++)
                {
                    warriorss=game.gameHeroes[index].getheroWarrior(i).getwarriorName();
                    //cout<<warriorss<<endl;
                    if ((warriorss=="null")||(warriorss=="NULL"))
                    {
                        
                    }
                    else
                    {
                        for(int j=0;j<14;j++)
                        {
                            warriorsss=game.gameWarriors[j].getwarriorName();
                            if (warriorss==warriorsss)
                            {
                                lol=game.gameWarriors[j].getwarriorLoyalty();
                                lol=lol-10;
                                //cout<<stre<<endl;
                                game.gameWarriors[j].setwarriorLoyalty(lol);
                                
                                
                            }
                        }
                    }
                }
                cout<<"There were some deserters and all you warriors lost 10 loyalty and you lost 10 army size"<<endl;
           return game;
               break;
           }
           case 2:  //jackpot
           {
                int money;
                money=game.gameHeroes[index].getheroMoney();
                money=money*2;
                game.gameHeroes[index].setheroMoney(money);
                cout<<"You hit the jackpot and your money has doubled"<<endl;
               return game;
                   break;
           }
            case 3://kindness
           {
                string warriorss,warriorsss;
                Warrior wat;
                int lol,army;
                army=game.gameHeroes[index].getheroArmysize();
                army=army+10;
                game.gameHeroes[index].setheroArmysize(army);
                for (int i=0;i<4;i++)
                {
                    warriorss=game.gameHeroes[index].getheroWarrior(i).getwarriorName();
                    //cout<<warriorss<<endl;
                    if ((warriorss=="null")||(warriorss=="NULL"))
                    {
                        
                    }
                    else
                    {
                        for(int j=0;j<14;j++)
                        {
                            warriorsss=game.gameWarriors[j].getwarriorName();
                            if (warriorss==warriorsss)
                            {
                                lol=game.gameWarriors[j].getwarriorLoyalty();
                                lol=lol+10;
                                //cout<<stre<<endl;
                                game.gameWarriors[j].setwarriorLoyalty(lol);
                                
                                
                            }
                        }
                    }
                }
                cout<<"You offered shelter to some refugees and all you warriors gained 10 loyalty and you gained 10 in army size"<<endl;
           return game;
               break;
           }
           default: 
            break;
    }
}
int ran()
{
    int v1;
v1 = rand() % 3;  
return v1;
}
int rann()
{
    int v1;
v1 = rand() % 4;  
return v1;
}
int rannw()
{
    int v1;
v1 = rand() % 10;  
v1=v1+1;
return v1;
}
Game whiteWalkers(Game game,int index)
{
    int k=0;
    double prob,power,army,influ,points,strength,probw,numberr;
    string warriorss,warriorsss;
    army=game.gameHeroes[index].getheroArmysize();
    power=army;
    for (int i=0;i<4;i++)
                {
                    warriorss=game.gameHeroes[index].getheroWarrior(i).getwarriorName();
                    //cout<<warriorss<<endl;
                    if ((warriorss=="null")||(warriorss=="NULL"))
                    {
                        
                    }
                    else
                    {
                        for(int j=0;j<14;j++)
                        {
                            warriorsss=game.gameWarriors[j].getwarriorName();
                            if (warriorss==warriorsss)
                            {
                                if(game.gameWarriors[j].getwarriorDragonglass()==true)
                                {
                                    power=power+10000;
                                }
                                strength=game.gameWarriors[j].getwarriorLoyalty();
                                power=power+strength;

                            }
                        }
                    }
                }
    points=game.gameHeroes[index].getheroPoints()/2;
    influ=game.gameHeroes[index].getheroInfluence()/4;
    influ=influ*points;
    power=power+influ;
    cout<<"This is your power "<<power<<endl;
    prob=exp(-power/30000);
    prob=1.0-prob;
    prob=prob*10;
    probw=10-prob;
    cout<<"This is your probability of winning out of 10: "<<prob<<endl;
    while(k<3)
    {
        numberr=rannw();
        if (numberr>prob)
        {
            cout<<"You lost round number "<<k+1<<endl;
        }
        if (numberr<=prob)
        {
            game.setgamUserwin(true);
            game.gameHeroes[index].setheroAlive(true);
            cout<<"YOU WONNNNNNNNNNN!!!!!!!!! YEAH!!!!!!!!"<<endl;
            return game;
        }
        k++;
        
        
    }
if (k==3)
{
    game.gameHeroes[index].setheroAlive(false);
}
    return game;
}
 int main()
{
    //Opens all the files for the game and puts them in the appropriate arrays
   Game game;
   game.readWarriorsfile("warriorsGOT.txt");
   game.readCitiesfile("citiesGOT.txt");
   game.readHeroesfile("heroesGOT.txt",game.gameWarriors);
   game.readMapfile("mapGOT.txt");
   game=dragonglass(game);
    game=inti_warriors(game);
    for(int y=0;y<7;y++)
    {
        game.gameHeroes[y].setheroAlive(true);
    }
   int index=0;
   int poi,wintt;
       bool alll;
    int alllaredead;
    int checkwhitewalks;
    checkwhitewalks=0;
    char k;
   
   //Prompt user to enter their name and choose or create a hero
   cout<<"Welcome to the G A M E of T H R O N E S!"<<endl<<endl;
   
   cout<<"State your name, Your Grace: ";
   
   string user_name;
   getline(cin,user_name);
   game.setgameUser(user_name);
   for (int i=0;i<1000;i++)//neeed to figure out user error for inputs
   
   {
        index=choosehero(game,user_name);
        if ((index>=0)&&(index<=6))
        {
            i=100000;
        }
        else if(index==27)
        {
            i=10000;
        }
   }
   if (index==27)//if the user decides to create their own hero choosehero will output 27 and that will prompt them to make their own character
    {
    game=createhero(game,user_name);
    index=6;

    }
       //Print out the map at the location of the user
game=settingpoints(game);//figure this out
poi=game.gameHeroes[index].getheroPoints();
game.setgameUserpoints(poi);//figure this out

displaySurroundings(game.gameHeroes[index].getheroRow(),game.gameHeroes[index].getheroColumn(),game);   
 
 // ask user if they want to rest,travel, or talk to the gods and it will go to the appropraite functions

for(int i=0;i<1000;i++)
{
    game=choosemove(game,index);
    game=checkfordragon(game,index);
    displaySurroundings(game.gameHeroes[index].getheroRow(),game.gameHeroes[index].getheroColumn(),game); 
    //cout<<game.gameHeroes[5].getheroRow()<<" "<<game.gameHeroes[5].getheroColumn()<<endl;
    //cout<<game.gameHeroes[index].getheroRow()<<" "<<game.gameHeroes[index].getheroColumn()<<endl;
    cout<<"You have this many points "<<game.getgameUserpoints()<<endl;
    cout<<"You have this much army size "<<game.gameHeroes[index].getheroArmysize()<<endl;
    cout<<"You have this much money "<<game.gameHeroes[index].getheroMoney()<<endl;
    cout<<"You have this much Influence "<<game.gameHeroes[index].getheroInfluence()<<endl;
    cout<<"These are all of your warriors: "<<game.gameHeroes[index].getheroWarrior(0).getwarriorName();
    cout<<", "<<game.gameHeroes[index].getheroWarrior(1).getwarriorName();
    cout<<", "<<game.gameHeroes[index].getheroWarrior(2).getwarriorName();
    cout<<", "<<game.gameHeroes[index].getheroWarrior(3).getwarriorName()<<endl;
    cout<<"This is your "<<i<<" turn"<<endl<<endl;





    //cout<<game.gameWarriors[7].getwarriorRow()<<endl;
    //cout<<game.gameWarriors[7].getwarriorColumn()<<endl;
    
    game=changeherolocal(game,index);
    game=changwarlocal(game);
    game=check_area(game,index);
    if (game.gameHeroes[index].getheroAlive()==false)
    {
        i=10000;
    }
    else
    {
    game=check_areaw(game,index);
    }
    if(i==10)
    {
        game=precondtioned_events(game);
    }
    wintt=ran();
    if (wintt==0)
    {
        wintt=rann();
        game=winter(game,index,wintt);
    }
                alllaredead=0;
            for (int i=0;i<7;i++)
            {
                if (i==index)
                {
                }
                else 
                {
                    alll=game.gameHeroes[i].getheroAlive();
                    if (alll==false)
                    {
                        alllaredead=alllaredead+1;
                    }
                }
            }
    if (game.gameHeroes[index].getheroAlive()==true)
    {
            if (i>=50)//all of the following if statements check to see if the whitewalkers are around
            {
                cout<<endl<<"Sad news! The White Walkers are approaching our location. Would you like to battle them now? (Y/N):"<<endl;
              cin>>k;
              switch(k)
                       {
                       case 'y':  //
                       game=whiteWalkers(game,index);
                       
                           break;
                       case 'n':  //
                           checkwhitewalks=checkwhitewalks+1;
                           break;
                        case 'N':
                            checkwhitewalks=checkwhitewalks+1;                
                            break;
                        case'Y':
                         game=whiteWalkers(game,index);
                            break;
                       default: 
                       cout<<"Enter a Y or N";
                        break;
                }
                
            }
            else if (game.gameHeroes[index].getheroArmysize()>=2000)
            {
                cout<<endl<<"Sad news! The White Walkers are approaching our location. Would you like to battle them now? (Y/N):"<<endl;
              cin>>k;
              switch(k)
                       {
                       case 'y':  //
                       game=whiteWalkers(game,index);
                           break;
                       case 'n':  //
                           checkwhitewalks=checkwhitewalks+1;
                           break;
                        case 'N':
                            checkwhitewalks=checkwhitewalks+1;                
                            break;
                        case'Y':
                         game=whiteWalkers(game,index);
                            break;
                       default: 
                       cout<<"Enter a Y or N";
                        break;
                }
                
            }
            else if(game.getgameUserpoints()>=400)
            {
                cout<<endl<<"Sad news! The White Walkers are approaching our location. Would you like to battle them now? (Y/N):"<<endl;
              cin>>k;
              switch(k)
                       {
                       case 'y':  //
                       game=whiteWalkers(game,index);
                           break;
                       case 'n':  //
                           checkwhitewalks=checkwhitewalks+1;
                           break;
                        case 'N':
                            checkwhitewalks=checkwhitewalks+1;                
                            break;
                        case'Y':
                         game=whiteWalkers(game,index);
                            break;
                       default: 
                       cout<<"Enter a Y or N";
                        break;
                }
                
            }
            else if (alllaredead>=5)//checks to see if all the heros are dead
            {
                cout<<endl<<"Sad news! The White Walkers are approaching our location. Would you like to battle them now? (Y/N):"<<endl;
              cin>>k;
              switch(k)
                       {
                       case 'y':  //
                       game=whiteWalkers(game,index);
                           break;
                       case 'n':  //
                           checkwhitewalks=checkwhitewalks+1;
                           break;
                        case 'N':
                            checkwhitewalks=checkwhitewalks+1;                
                            break;
                        case'Y':
                         game=whiteWalkers(game,index);
                            break;
                       default: 
                       cout<<"Enter a Y or N";
                        break;
                }
                
            }
            if(checkwhitewalks==5)
            {
                game=whiteWalkers(game,index);
            }
    }
    if (game.gameHeroes[index].getheroAlive()==false)
    {
        i=10000;
    }
    if(game.getgameUserwin()==true)
    {
        i=10000;
    }
    
    

}

if(game.getgameUserwin()==true)
    {
        cout<<"Congrats play again"<<endl;
    }
    else
    {
        cout<<"You suck!"<<endl;
    }
ofstream myfile ("resultsGOT.txt",ios::app);
string line;
line="";
  if (myfile.is_open())
  {

            
                myfile<<game.getgameUser()<<"   "<<game.gameHeroes[index].getheroName()<<"   "<<game.getgameUserpoints()<<endl;
    myfile.close();
    
    
        }

  
/*cout<<game.gameWarriors[7].getwarriorRow()<<endl;
cout<<game.gameWarriors[7].getwarriorColumn()<<endl;
cout<<game.gameHeroes[index].getheroColumn()<<endl;
cout<<game.gameHeroes[index].getheroRow()<<endl;*/


//cout<<game.gameWarriors[7].getwarriorStrength();

   //then go to check encounter function to see if there are any heros nearby
   //if so then ask the user if they want to battle,speech or buy hero then got to appropraite functions
  
  
   //at certain points go to the predeternimed fucntion to make sure certain heros are given warrios and stats
   
   
   //after certain milestones call to the whitewalkers function to have the final battle 
   
   //upload all the user data to a text file

}