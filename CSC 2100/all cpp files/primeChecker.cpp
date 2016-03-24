#include <iostream>
using namespace std;

int main()
{
	char c='y';
	while(c=='Y'||c=='y')
	{
	int n,i;
	cout << "Prime Program;\n";
	do
	{
		cout << "Enter a positive integer.\n";
		cin >> n;
	}
	while(n<=0);
	if (n==1||n==2)
		cout << n << " is a prime number\n";
	else
		for (int i=2;i<n;i++)
		{
			if(n%i==0)//i is a factor of n
			{
				cout << n << " is not a prime number because "<< i <<" is a factor of "<<n<<endl;
				break;
				}
		}
	if (array[i]%i==n)
		cout << n << " is a prime number\n";
		cout << "Do you want to try another number? (y/n)\n";
		cin >> c;
	}
}