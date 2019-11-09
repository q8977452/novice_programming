#include<iostream>
using namespace std;
int main()
{
	int count,innerCount;
	
	count=1;
	
	while(count <=11)
 { 
   innerCount=1;
   while (innerCount <= (12-count) / 2)
   {
   	cout<<" ";
   	innerCount++;
   }
   
   innerCount=1;
   while (innerCount <= count)
   {
   	cout<<"@";
   	innerCount++;
   }
	
	cout<<endl;
	count++;
 }	
 
 return 0;
}
