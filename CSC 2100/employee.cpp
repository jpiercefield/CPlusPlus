//James Piercefield
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

void saveEmployee(fstream& people, Employee* emp);
Employee getEmployeeList(fstream& people2, Employee *employeeArray, int n);



int main()
{
    int Number;
    cout << "Enter the number of employee records you want to save: ";
    cin >> Number;
    string name;
    cout << "Enter the name of the file with extension. (.txt): ";
    cin >> name;
    Employee *emp = new Employee[Number];
    fstream people(name, ios::app);
    for(int i=0;i<Number;i++)
    {
    	saveEmployee(people, emp);
    }
    people.close();
    fstream people2;
    people2.open(name, ios::in);
    Employee *employeeArray = new Employee[Number];
    getEmployeeList(people2, employeeArray, Number);
    cout << "Now Reading your File...\n" << endl;
    for(int m=0;m<Number;m++)
    {
    	cout << employeeArray[m].employeeId << ", ";
    	cout << employeeArray[m].employeeName << ", ";
    	cout << employeeArray[m].departmentName << endl;
    }
    cout << "\n Finished Reading and Displaying. " << endl;
    people2.close();
    
    
}

void saveEmployee(fstream& people, Employee* emp)
{
	int x=0;
	cout << "Enter Employee ID (Numbers Only): ";
	cin >> emp[x].employeeId;
	people << emp[x].employeeId << ";";
	cout << "Enter Employee Name: ";
	cin >> emp[x].employeeName;
	people << emp[x].employeeName << ";";
	cout << "Enter Department Name: ";
	cin >> emp[x].departmentName;
	people << emp[x].departmentName << endl;
	x++;
	
}

Employee getEmployeeList(fstream& people2, Employee *employeeArray, int n)
{
	for(int t=0;t<n;t++)
	{
		int w=0;
		char str[250];
		char ch;
		bool tf = true;
		while(tf==true)
		{
			people2.get(ch);
			if(ch == ';')
			{
				tf = false;
			}	
			else
			{
				str[w]=ch;
				w++;
			}
		}
		employeeArray[t].employeeId = atoi(str);
		getline(people2, employeeArray[t].employeeName, ';');
		getline(people2, employeeArray[t].departmentName);
	}
	return *employeeArray;
}



