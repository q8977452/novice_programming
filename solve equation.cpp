#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

void getRoot(float , float , float , float& , float& );

int main()
{
	ifstream myInfile;
	ofstream myOutfile;
	float a,b,c,first,second;
	int count=0;
	
    myInfile.open("eq.txt");
    
	if(!myInfile)
	{
		cout<<"The file doesn't have data."<<endl;
	}
	
	
	myOutfile.open("sol.txt");
	
	myInfile >> a >> b >> c ;
	
	while(count<5)
	{
		getRoot(a, b,  c,  first, second );
		
		myOutfile << a << " "<< b << " "<< c <<endl;
		cout<< a << " "<< b << " "<< c <<endl;
		if((b*b-4*a*c ) >= 0 )
      {
      	cout<< "root1:"<<" "<<first<<endl;
      	cout<< "root2:"<<" "<<second<<endl;
      	myOutfile<< "root1:"<<" "<<first<<endl;
      	myOutfile<< "root2:"<<" "<<second<<endl;
      	
      }		
        else
      {
        cout<<"The equation has no real solution"<<endl;
		myOutfile<<"The equation has no real solution"<<endl;
	  }
		count++;
	   myInfile >> a >> b >> c ;
	}
	
	myInfile.close();
	myOutfile.close();
    
	return 0;	
	
}
void getRoot(float a, float b, float c, float& root1, float& root2)
{
   float temp=b*b-4*a*c;
   
   root1=(-b+sqrt(temp))/2*a;
   
   root2=(-b-sqrt(temp))/2*a;

    return;
}
