#include <iostream>
#include <string>
using namespace std;
struct Chapter
{	
	string name;
	int pageNumber;
	int sectionTotal;
};
struct Course
{
	string courseName;
	Chapter array[3];
};

int main()
{
	int x=0;
	cout << "How many Courses would you like to enter? ";
	cin >> x;
	Course *Name = new Course[x];
	
	for(int i=0;i<x;i++)
	{
		cout << "Enter the Course Name: ";
		cin >> Name[i].courseName;
		for(int j=0;j<3;j++)
		{
			cout << "Enter the name of a chapter: ";
			cin >> Name[i].array[j].name;
			cout << "Enter the Page Number: ";
			cin >> Name[i].array[j].pageNumber;
			cout << "Enter the section total: ";
			cin >> Name[i].array[j].sectionTotal;
		}
	}
	cout << "Here is your items displayed\n" << endl;
	for(int k=0;k<x;k++)
	{
		cout << "Course Name: " << Name[k].courseName << endl;
		for(int j=0;j<3;j++)
		{
			cout << "\nChapter Name: " << Name[k].array[j].name << endl;
			cout << "Page Number: " << Name[k].array[j].pageNumber << endl;
			cout << "Section Total: " << Name[k].array[j].sectionTotal << endl;
		}
	}
	
}