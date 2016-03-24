//James Piercefield

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char * argv[])
{
	int n = atoi(argv[1]);
	if (n == 0)
	{
		cerr << "error, cannot calculate factorial" << endl;
		exit(1);
	}
	unsigned long long fact = 1;
	for(int i=n;i>0;i--)
	{
		fact = fact * i;
	}
	cout << n << "! is equal to " << fact << endl;
	
	return 0;
}