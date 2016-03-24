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
	char y;
	cout << "Enter a letter: ";
	cin >> y;
	switch(y)
	{
		case 'd':
			dailyM=1;
			break;
		case 'w':
			weeklyM=2;
			break;
		case 'm':
			monthlyM=3;
			break;
	}
	cout << dailyM << endl;
	cout << weeklyM << endl;
	cout << monthlyM << endl;

}