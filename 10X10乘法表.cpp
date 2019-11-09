#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int count,innerCount;
	
	count=1;
	
	while(count <=10)
 { 
   innerCount=1;
   while (innerCount <= 10)
   {
   	cout<<setw(5)<<count * innerCount;
   	innerCount++;
   }
 
	
	cout<<endl;
	count++;
 }	
 
 return 0;
}
