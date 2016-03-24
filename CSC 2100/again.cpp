#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Employee
{
	int employeeId;
    string employeeName;
    string departmentName;
};

int main()
{
	int VAR;
	cout << "Enter var1: ";
	cin >> VAR;
	Employee emp[VAR];
}