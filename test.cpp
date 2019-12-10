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
/*int ran()
{
    int v1;
v1 = rand() % 3;  
return v1;
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
            if (change=="w")
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
}*/
int main() 
{ 
    
    ofstream file_;
    file_.open("results.txt");
    file_<<"<Name>   <Hero>   <points>"<<endl;
    file_.close();
    
    
}



