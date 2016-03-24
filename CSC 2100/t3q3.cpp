#include <iostream>
using namespace std;
int main()
{
	union 
	{
		int dailyM;
		int weeklyM;
		int monthlyM;
	};
	char x;
	cout << "Enter d for daily, w for weekly, or m for monthly: ";
	cin >> x;
	if(x == 'd')
	{
		dailyM = 1;
	}
	else if(x == 'w')
	{
		weeklyM = 2;
	}
	else if(x =='m')
	{
		monthlyM = 3;
	}
	else
	{
		cout << "Sorry you've entered an invalid character.";
	}
	cout << dailyM << endl;
	cout << weeklyM << endl;
	cout << monthlyM << endl;
	return(0);
}