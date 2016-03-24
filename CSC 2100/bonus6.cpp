#include <iostream>
using namespace std;
void thefunction(int length, char array[]);
int main()
{
	int length=0;
	cout << "Enter the length of the array: ";
	cin >> length;
	char array[length];
	cout << "Now enter the contents of the array: " << endl;
	for(int i=0;i<length;i++)
	{
		cout << "Enter an upper or lowercased letter: ";
		cin >> array[i];
	}
	thefunction(length, array);
	
}

void thefunction(int length, char array[])
{
	int lower=0;
	int upper=0;
	for(int i=0;i<length;i++)
	{
		if(islower(array[i]))
		{
			lower++;
		}
		else
		{
			upper++;
		}
	}
	cout << "There are " << lower << " lowercase letters and " << upper;
	cout << " uppercased letters." << endl;
	
}