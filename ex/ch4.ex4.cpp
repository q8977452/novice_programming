#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	char ch1;
	cin>>a>>b>>c;
	
	cin.ignore(100,'\n');
	cin.get(ch1);
	cin>>d>>e>>f;
	cin.ignore(100,'\n');
	cin.ignore(100,'\n');
	cin>>a>>b;
	cout<<ch1<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	return 0;
} 
