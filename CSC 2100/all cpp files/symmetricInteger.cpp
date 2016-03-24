// Curtis Patel
#include<iostream>
// for input/output formatting
#include<string>
#include<iomanip>
using namespace std;
int main()
{
// we are going to use do while to run the program until the user enters 'n'

	int x,n,i;
	cout << "Symmetric Program\n";
	cout << "How many times do you want to run the program?\n";
	cin >>n;
	if(n<1||n>10)
		cout << " Your number has to be between 1 and 10";
	else	
		while(i<n)
		{
		cout << "Iteration number " << i << endl;
		cout << "Enter an integer value:\n";
		cin >> x;
		if(x<0||x>999)
			cout << "Your value is out of range\n";
		else if(x>=0&&x<=9)
			cout << x << " is not a symmetric number\n";
		else if (x>=10&&x<=99)
		{
			if(x%10==x/10)
				cout << x << " is a symmetric number\n";
			else	
				cout << x << " is not a symmetric number\n";
		}
		else 
		{
			if (x%10==x/100)
				cout << x << " is a symmetric number\n";
			else	
				cout << x << " is not a symmetric number\n";
		}
		}
}
