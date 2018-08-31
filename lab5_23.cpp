//to write n natural numbers in descending order
//include package

#include <iostream>
using namespace std;

//main function 

int main()
{
	//initialization

	int r,k;

	//user prompt

	cout <<"Enter the value of n"<<endl;

	//input 

	cin>>k;
	r=k;
	//loop

	while (r>=1)
	{
		cout <<r<<endl;
		r--;
	}
	return 0;
}

