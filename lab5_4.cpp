//to check if a number is divisible by 5 and 11 
//include package

#include <iostream>
using namespace std;

//main function 

int main()
{
	//initialization

	int r;bool f, e;

	//user prompt

	cout <<"Enter a number"<<endl;

	//input 
	cin >>r;

	//condition and output

	if (f=r%5==0)
	cout <<"The number is divisible by 5"<<endl;
	if (e=r%11==0)
	cout <<"The number is divisible by 11"<<endl;
	if (!(f || e))
	cout <<"Not divisible by any";
	return 0;
}

