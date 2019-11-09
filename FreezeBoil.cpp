/*
  FreezeBoll program
  This program computes the midpoint between
  the freezing and boiling points of water
*/
#include<iostream>
using namespace std;
const float FREEZE=32.0;        //Freezing point of water
const float BOIL  =212.0;       //Boiling point of water

int main()
{
	float avgTemp;             /*Holds the result of averaging
	                           FREEZE and BOIL*/

    cout<<"Water freezes at "<<FREEZE<<endl;
    cout<<"and boils at "<<BOIL
    <<" degrees."<<endl;
    
    avgTemp=FREEZE+BOIL;
    avgTemp=avgTemp/2.0;
    
    cout<<"Halfway between is ";
    cout<<avgTemp<<" degrees."<<endl;
    
    return 0;
}
