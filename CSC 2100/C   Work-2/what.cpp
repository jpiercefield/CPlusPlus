#include <iostream>
using namespace std;
int main()
{
	char temp;
	char array[5];
	for(int i=0;i<5;i++)
	{
		cout << "enter item of array: ";
		cin >> array[i];
	}
	char *p;
	p=array;
	temp = *p;
	cout << temp;

}