#include <iostream>
using namespace std;
int main()
{
	int length=0;
	int *p;
	cout << "Enter length of array: " << endl;
	cin >> length;
	int array[length];
	for(int i=0;i<length;i++)
	{
		cout << "Enter element of array: ";
		cin >> array[i];
	}
	p=array;
	
	for(int i=0;i<length;i++)
	{
		if(*p<0)
		{
			*p=*p*(-1);
		}
		p++;
	}
	cout << "Your new array: ";
	for(int i=0;i<length;i++)
	{
		cout << array[i] << " ";
	}
}