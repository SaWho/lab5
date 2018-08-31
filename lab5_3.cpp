//to check if a number is positive or negative or zero

//include package

#include <iostream>
using namespace std;

//main function 

int main()
{
	//initialization

	int r;

	//user prompt

	cout <<"Enter a number"<<endl;

	//input

	cin>>r;

	//condition and output

	if (r>0)
	cout <<"It is positive";
	else if (r<0)
	cout <<"It is negative";
	else 
	cout <<"It is zero";

	return 0;
}
