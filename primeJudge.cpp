#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	start:
	int i=2,num;
	bool prime=true;
	
	cout<<"Enter a postitive integer:";
	cin >>num;
	
	while( i < num )
	{
		if (( num % i ) == 0)
		prime =false;
		i++;
	}
	
	if(prime)
	    cout<<num<<"is a prime number."<<endl;
	else
		cout<<num<<"is not a prime number."<<endl;
	goto start;
		return 0;
		
}
