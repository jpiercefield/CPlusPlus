#include <iostream>
using namespace std;
int main()
{
	int length=0;
	cout << "Enter the length of the array: ";
	cin >> length;
	char array[length];
	cout << "Now let's fill the array." << endl;
	for(int i=0;i<length;i++)
	{
		cout << "Enter an upper or lowercased letter: ";
		cin >> array[i];
	}
	for(int i=0;i<length;i++)
	{
		if(islower(array[i]))
		{
			array[i]=toupper(array[i]);
		}
		else
		{
			array[i]=tolower(array[i]);
		}
	}
	cout << "The new array: ";
	for(int i=0;i<length;i++)
	{
		cout << array[i] << " ";
	}
}