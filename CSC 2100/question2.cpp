#include <iostream>
using namespace std;
int main()
{
	int number1=0;
	int number2=0;
	int max=0;
	
	cout << "Enter two numbers to find the common factors of." << endl;
	cout << "Number 1: ";
	cin >> number1;
	cout << "Number 2: ";
	cin >> number2;
	
	if(number1<0 || number2<0)
	{
		cout << "Sorry, positive numbers only" << endl;
		return(0);
	}
	
	if(number1<number2)
	{
		max+=number2;
	}
	if(number2<=number1)
	{
		max+=number1;
	}
	
	for(int local1=1; local1<=max; local1++)
	{
		if(number1%local1==0 && number2%local1==0)
		{
			cout << local1 << endl;
		}
	}
}