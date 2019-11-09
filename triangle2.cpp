#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float a,b,c;
	float s;
	float A;
	start:
	cout<<"請輸入三角形的邊長:"<<endl;
    cin >> a >> b >> c   ;
    s = ( a + b + c ) / 2.0;
    A= sqrt ( s * ( s - a ) * ( s - b ) * ( s - c ) )  ;
  
  if ( ( a + b >c ) && ( a + c > b ) && ( b + c >a ) )
   {
	cout<<"周長:" << 2 * s << endl ;
	cout<<"面積:" <<A<<endl;
   }

  else
 {
 cout<<"三邊長無法構成三角形"<<endl;  
 
 }
goto start;

	return 0; 
}
