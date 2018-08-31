//to print odd numbers from 1 to 100
//include package

#include <iostream>
using namespace std;

//main function 

int main()
{
	//initialization

	int r=1;
	//loop

	while(r<=100)
		{
		if(r%2!=0)
		cout <<r<<endl;
		r++;
		}
	return 0;
}
