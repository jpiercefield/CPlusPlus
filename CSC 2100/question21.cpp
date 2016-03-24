#include <iostream>
using namespace std;
int main()
{
	cout << "Enter two positive number to find the common factors for.\n";
	int number1=0;
	int number2=0;
	int min=0;
	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	
	if(number1<0 || number2<0)
	{
		cout << "Sorry at least one of these numbers are negative." << endl;
		return(0);
	}
	
	if(number1>number2)
	{
		min+=number1;
	}
	
	if(number2>=number1)
	{
		min+=number2;
	}
	
	for(int local1=1;local1<=min;local1++)
	{
		if(number1%local1==0 && number2%local1==0)
		{
			cout << local1 << endl;
		}
	}
	
	
}