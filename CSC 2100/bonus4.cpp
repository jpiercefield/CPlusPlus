#include <iostream>
using namespace std;
void thefunction(int length, int array[]);
int main()
{
	int length;
	cout << "Enter the length of the array: ";
	cin >> length;
	int array[length];
	cout << "Now let's fill the array: " << endl;
	for(int i=0;i<length;i++)
	{
		cout << "Enter a number: ";
		cin >> array[i];
	}
	thefunction(length, array);
	
}
void thefunction(int length, int array[])
{
	int div3=0;
	int div5=0;
	int div2=0;
	for(int i=0;i<length;i++)
	{
		if(array[i]%3==0)
		{
			div3++;
		}
		if(array[i]%5==0)
		{
			div5++;
		}
		if(array[i]%2==0)
		{
			div2++;
		}
	}
	cout << div3 << " digit(s) divisible by 3." << endl;
	cout << div5 << " digit(s) divisible by 5." << endl;
	cout << div2 << " digit(s) divisible by 2." << endl;
}
