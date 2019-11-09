#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream  Infile;
	int number;	


	Infile.open("ndata.txt");
		
	if (!Infile)
	{
		cout<<"File opening error.Program terminate.";
		return 1;
	}
	
	
	
	Infile.close();
	return 0;
} 
