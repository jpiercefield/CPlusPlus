#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct Employee
{
    int employeeId;
    string employeeName;
    string departmentName;

};

void saveEmployee(fstream& people, Employee& emp);
Employee getEmployeeList(fstream& people2, Employee employeeArray, int n);


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
        saveEmployee(people, *emp);
        people << endl;
    }
    people.close();
    fstream people2;
    people2.open(name, ios::in);
    if (people2)
    {
        for(int j=0;j<Number;j++)
        {
            getEmployeeList(people2, employeeArray, Number);
            cout << employeeArray.employeeId;
            cout << employeeArray.employeeName;
            cout << employeeArray.departmentName;
            
        }
    }
    
   

}

void saveEmployee(fstream& people, Employee emp)
{
	int x=0;
    cout << "Enter Employee Id: ";
    cin >> emp.employeeId;
	people << emp.employeeId << ";";
    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, emp.employeeName);
    people << emp.employeeName << ";";
    cout << "Enter Department Name: ";
    getline(cin, emp.departmentName);
    people << emp.departmentName;
    x++;
}

Employee getEmployeeList(fstream& people2, Employee& employeeArray, int n)
{
    int theNumber=n/3;
    for(int j=0;j<theNumber;j++)
    {
        string str1;
        getline(people2, str1, ';');
        int newNumber;
        employeeArray.employeeId=atoi(str1.c_str());
        string str2;
        getline(people2, str2, ';');
        employeeArray.employeeName=str2;
        string str3;
        getline(people2, str3, ';');
        employeeArray.departmentName=str3;
        
    }
    return employeeArray;
}



