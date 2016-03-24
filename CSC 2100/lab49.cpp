#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct Classes
{
	int classId;
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
	p=&s;
	//(*p).id is equivalent to p->id
	//(*p).id=3;
	p->id=3;
	cout << "Please enter the student's name:" << endl;
	//cin >> s.name;
	cin>>p->name;
	for(int i=0;i<3;i++)
	{
		cout << "Please enter the id of class:" << i+1 << endl;
		//cin >> s.c[i].classId;
		cin>>p->c[i].classId;
		cout << "Please enter name of class: " <<i+1 << endl;
		//cin>>s.c[i].className;
		cin>>p->c[i].className;
	}
}
//use the pass by reference method
//void updateStudent(Student &s)
//{

//}