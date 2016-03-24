// James Piercefield
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Welcome to the Class Grade Calculator." << endl;
	cout << "The following classes are available for calculation: \n";
	cout << "(1)Research Class, (2)Literature Class, or (3)Lab Class." << endl;
	cout << "Enter the number represented for the class to procede." << endl;
	
	int Number;
	cin >> Number;
	
	if (Number == 1)
    {
        cout << "You've chosen Research Class, let's begin." << endl;
        
    }
	else if (Number == 2)
    {
        cout << "You've chosen Literature Class, let's begin." << endl;
    }
	else if (Number == 3)
    {
		cout << "You've chosen Lab Class, let's begin." << endl;
    }
	else if (Number > 3)
    {
		cout << "You've selected an invalid option. Please restart the" << endl;
		cout << "program and select a valid option (1,2,3)." << endl;
    }
    else if (Number < 1)
    {
		cout << "You've selected an invalid option. Please restart the" << endl;
		cout << "program and select a valid option (1,2,3)." << endl;
    }
    
    return 0;
	
}