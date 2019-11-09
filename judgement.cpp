/*  The program can help us to count the num.txt of data , 
find the even and prime.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<fstream>


using namespace std;

int main()
{
	ifstream  myIn;
	int cnt= 0,num ;
	int numEven=0;
	int numPrime=0;
	int i=2;
    bool prime=true;
    // Set some variables 
   
	
	myIn.open("num.txt");
    
	if (!myIn)
	{
		cout<<"File opening error.Program terminate.";
		return 1;
	}
	
	myIn >> num;
	
	
	while(myIn)        // First loop
	{
		cout<<num<<endl;

          while(i <num) 
      { 
	     if((num%i)==0)
         prime=false;
    
         
         i++;
        
      }
          if(prime)
	         ++numPrime;
	     // Second loop for the judgement of prime
	

		if((num%2) == 0)
           {
           numEven++ ;
       
		   }
           // Judge even or not
		   cnt++;
           
           myIn >> num;
		   i=2;
           prime=true;
           // Set prime parameter

	}
	
	cout<< "计: "<< cnt << endl;
	cout<< "案计: "<< numEven <<  endl;
	cout<< "计: "<< cnt-numEven << endl;
	cout<< "借计: "<< numPrime << endl;
	// Show the results
	myIn.close();
	return 0 ;
} 
