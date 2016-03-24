#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct Classes
{
	int *classId;
	string className;
};

struct Student
{
	int id;
	string name;
	Classes c[3];
};

int main()
{
	Student s,*p;
	int x;
	p=&s;
	p->classId=&x;
	//p is a structure pointer
	//classId is a pointer and a member of the structure Student
	*(*p).classId=5;
}