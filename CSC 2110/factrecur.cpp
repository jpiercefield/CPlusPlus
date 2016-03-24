// James Piercefield

#include <iostream>
#include <cstdlib>
using namespace std;

unsigned long long fact(int n);

int main(int argc,char * argv[])
{
	int n = atoi(argv[1]);
	if (n == 0)
	{
		cerr << "error, cannot calculate factorial" << endl;
		exit(1);
	}
	
	cout << n << "! is equal to " << fact(n) << endl;
	
	return 0;
}

unsigned long long fact(int n)
{
	if(n == 1)
	{
		cout << 1 << " = ";
		return 1;
	}
	
	cout << n << " * ";
	return n * fact(n-1);
}