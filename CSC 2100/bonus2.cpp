#include <iostream>
using namespace std;
int *newArray(int length, int length2, int array[]);
int main()
{
	int length=0;
	cout << "Enter array length: ";
	cin >> length;
	int array[length];
	for(int i=0;i<length;i++)
	{
		cout << "Enter a letter to fill the array: ";
		cin >> array[i];
	}
	int length2=length*2;
	int *p = newArray(length, length2, array);
	for(int i=0; i<length2; i++)
	{
		cout << *p << " ";
		p++;
	}
}

int *newArray(int length, int length2, int array[])
{
	int newArray[length2];
	int *p2 = new int[length2];
	for(int i=0; i<length;i++)
	{
		p2[i]=array[i];
	}
	for(int k=length; k<length2;k++)
	{
		p2[k]=-1;
	}
	return p2;
}
