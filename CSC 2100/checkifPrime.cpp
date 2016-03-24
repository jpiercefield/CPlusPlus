#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i,x;
	cout << "Enter an integer number: \n";
	cin >> i;
	bool test=true;
	
	x=2;
	while(x<i)
	{
	
		if(i%x==0)
		{
			test=false;
			break;
		}
		x++;
	}
	if(test==true)
	{
		cout << i << "is a prime number";
		
	}
	else
	{
		cout << i << " is not a prime number";
	
	}
}