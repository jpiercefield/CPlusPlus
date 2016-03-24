#include <iostream>
using namespace std;
int main()
{
	int length=0;
	cout << "Enter length of array: ";
	cin >> length;
	int array[length];
	int counter=0;
	for(int i=0;i<length;i++)
	{
		cout << "Enter value for array at index " << i << ": ";
		cin >> array[i];
	}
	cout << "\nThe first two integers divisible by 3 are: ";
	for(int i=0; i<length;i++)
	{
		if(counter<2)
		{
			if(array[i]%3==0)
			{
				cout << array[i] << " ";
				counter++;
			}
		}
	}
}