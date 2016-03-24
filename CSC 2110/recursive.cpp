// James Piercefield
#include <iostream>
using namespace std;

int power(int x, int n);

int main()
{
	int number;
	cout << "Enter a number x: ";
	cin >> number;
	int exponent;
	cout << "Enter a number n: ";
	cin >> exponent;
	cout << "The number is: " << power(number, exponent) << endl;
	
	return 0;
	
}

int power(int x, int n)
{
	if(n == 1) 
	{
		return x;
	}
	else if (n == 0) 
	{
		return 1;
	}
	else 
	{
		return x * power(x, n-1);
	}
}