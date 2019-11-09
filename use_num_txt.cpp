#include<iostream>
#include<cmath>
#include<fstream>


using namespace std;

int main()
{
	ifstream  myIn;
	int cnt= 0,num ;
	int numEven=0;
	int numPrime=0;
	int numSum=0;
	int i=2;
    bool prime=true;
   
	
	myIn.open("num.txt");
    
	if (!myIn)
	{
		cout<<"File opening error.Program terminate.";
		return 1;
	}
	
	myIn >> num;
	
	
	while(myIn)
	{
		cout<<num<<endl;

          while(i<num)
      { 
	     if((num%i)==0)
         prime=false;
    
         
         i++;
        
      }
    if(prime)
	++numPrime;
	else
	numPrime=numPrime;
	

		if((num%2) == 0)
           {
           numEven++ ;
       
		   }
           numSum=numSum+num;
		   cnt++;
           
           myIn >> num;
		   i=2;
           prime=true;
	}
	cout<< "计: "<< cnt << endl;
	cout<< "案计: "<< numEven <<  endl;
	cout<< "计: "<< cnt-numEven << endl;
	cout<< "借计: "<< numPrime << endl;
	cout<< "┮Τ计羆㎝: "<< numSum << endl;
	myIn.close();
	return 0 ;
} 
