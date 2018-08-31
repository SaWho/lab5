//to print the greater number

//include package

#include <iostream>
using namespace std;

//main function 

int main()
{
	//initialization
	int r,k,m;

	//user prompt

	cout<< "Enter three number "<<endl;

	//input

	cin >>r>>k>>m;

	//condition

	cout <<"The greater of the three is ";

	if (r>k)
	if (r>m)
	cout << r;
	else 
	cout <<m;
	else if (k>m)
	cout <<k;
	else 
	cout <<m;
	return 0;
}
