#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int array[6];
	int *p;
	
	p=array;
	
	for(int i=0;i<6;i++)
	{
		cout << "Please enter the value of element" << i << endl;
		cin >> *p;
		p++;
	}
}