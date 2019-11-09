/*
  chessboard program
  This program prints a chessboard pattern that is
  bulit up from basis strings of white and black
  characters
 */
 #include<iostream>
 #include<string>

using namespace std;

 const string BLACK="*******";       //Define black square line
 const string WHITE="       ";       //Define white square line

int main()
{
	string whiteRow;                 //White square beginning row
	string blackRow;                 //Black squaer beginning row
	
	//Create a white-black row
	whiteRow=WHITE+BLACK+WHITE+BLACK+WHITE+BLACK+WHITE+BLACK;
	//Create a black-white row
    blackRow=BLACK+WHITE+BLACK+WHITE+BLACK+WHITE+BLACK+WHITE;
	
	//Print five white-black rows
	cout<<whiteRow<<endl;
	cout<<whiteRow<<endl;
	cout<<whiteRow<<endl;
	cout<<whiteRow<<endl;
	cout<<whiteRow<<endl;
	
	//Print five black-white rows
	cout<<blackRow<<endl;
	cout<<blackRow<<endl;
	cout<<blackRow<<endl;
	cout<<blackRow<<endl;
	cout<<blackRow<<endl;
	//Print rest of the rows
	return 0;
} 
