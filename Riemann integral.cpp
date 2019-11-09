#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float lo_lim,up_lim,dx,x_bar,sum=0;
	int n;
	
	cout<<"Enter lower and upper limits:";
	cin>>lo_lim>>up_lim;
	
	
	cout<<"Enter number of partition:";
	cin>>n;
	
	dx=(up_lim-lo_lim)/n;
		
	for(int i=0;i<n;i++)
	 {
	 	x_bar=dx*(lo_lim+dx*i)/(pow((lo_lim+dx*i),3)+1);
	 	sum=sum+x_bar;
	 }
	 cout<<sum;
	 return 0;
	
}
