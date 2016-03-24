#include <iostream>
using namespace std;
int Increment(int);
int main()
{
	int count = 1;
	while(count < 10)
	{
		cout << " The number after " << count;
		cout << " is " << Increment(count) << endl;
		count++;
	}
	return 0;
}

int Increment(int nextNumber)
{
	nextNumber++;
	return nextNumber;
}