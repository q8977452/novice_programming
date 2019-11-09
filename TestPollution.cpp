#include<iostream>

void DisplayMessage(int);
using namespace std;

int main()
{
	int pollutionlndex;
	
	cout<<"Enter air pollution index:";
	cin>>pollutionlndex;
	DisplayMessage(pollutionlndex);
	return 0;
} 

void DisplayMessage(int index)
{
	if(index<35)
	   cout<<"Pleasant";
	else if(index<=60)
	   cout<<"Unpleasant";
	else
	   cout<<"Health Hazard";
}

