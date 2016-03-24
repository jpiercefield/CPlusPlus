#include <iostream>
using namespace std;
union MagazineType
{
	int dailyM;
	int weeklyM;
	int monthlyM;
};
int main()
{
	char letter;
	MagazineType x;
	cout << "Enter a letter: ";
	cin >> letter;
	switch(letter)
	{
		case 'd':
			x.dailyM=1;
			break;
		case 'w':
			x.weeklyM=2;
			break;
		case 'm':
			x.monthlyM=3;
			break;
	}
	
	cout << x.dailyM << endl;
	cout << x.weeklyM << endl;
	cout << x.monthlyM << endl;
}