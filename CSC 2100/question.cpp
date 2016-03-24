#include <iostream>
using namespace std;
int main()
{
	int x;
	int n;
	cout << "Enter n (n must be larger than 0): ";
	cin >> n;
	cout << "Enter x: ";
	cin >> x;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=x*i;
		
	}
	
	cout << sum << endl;
	
}