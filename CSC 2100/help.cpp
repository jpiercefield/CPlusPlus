#include <iostream>
using namespace std;
int main()
{
	double number;
	int newNumber;
	cout << "Enter Number: ";
	cin >> number;
	newNumber = static_cast<int>(number);
	if(newNumber%2==0)
	{
		newNumber+=1;
		cout << newNumber << endl;
	}
	else
	{
		cout << newNumber << endl;
	}
}