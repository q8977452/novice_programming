#include<iostream>

using namespace std;

void Power(int,int,int&);

int main()
{
	int x,y,result;
	cin>>x>>y;
	Power(x, y, result);
	cout<<x<<y<<result<<endl;
} 
void Power(int x,int y,int& result)
{
	result=1;
	while(y>0)
	{
		result=result*x;
		y--;
	}
}
