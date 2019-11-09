/*
   PrintName program
   This program prints a name in two different  formats
*/
#include<iostream>              //for cout and endl
#include<string>                //for data type string

using namespace std;



int main()
{
	const string FIRST = "Sen";     //Person`s first name
	const string LAST  = "Zen";     //Person`s last name
	const string MIDDLE= "You";      //Person`s Middle inital
	
	string firstLast;           //Name in first-last format
	string lastFirst;           //Name in last-first format
	
	firstLast=FIRST+LAST;
	cout<<"Name in first-last format is"<<" "<<firstLast<<endl;
	  	
    lastFirst=LAST+","+FIRST+' ';
	cout<<"Name in last-first format is"<<endl
	            <<lastFirst<<MIDDLE<<'.'<<endl;
	return 0;  

}

