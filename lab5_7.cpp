//to check if alphabet or not
//including library

#include<iostream>
using namespace std;

//main function

int main()
{
	//initialisation of var

	char c;

	//user prompt
	
	cout << "Enter a character"<<endl;

	//input

	cin >>c;

	//required condition	

	if ((c>=65 && c<=90)||(c>=97 && c<=122))
	cout <<"The character is an alphabet"<<endl;
	else
	
	//output

	cout<< "The character is not an alphabet"<<endl;

	return 0;

}

