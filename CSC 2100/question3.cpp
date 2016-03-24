#include <iostream>
using namespace std;

int main()
{
	int n,m,a;
	cout << "Common factors finder of two positive integers n and m\n";
	cout << "Enter the value of n:\n";
	cin >> n;
	cout << "Enter the value of m:\n";
	cin >> m;
	if(n==0&&m==0)
	{
		cout << "The common factors of 0 and 0 are all the integer numbers \n";
	}
	else
	{
		if(n<=m and n!=0)
		{
			a=n;
		}
		else
		{
			a=m;
		}
		cout << "The common factors of " << n << " and " << m << " are: \n";
		for(int i=1;i<=a;i++)
		{
			if(n%i==0)
			{
			
				if(m%i==0)
				{
					cout << i << endl;
				}
			}
		}
	}
}


