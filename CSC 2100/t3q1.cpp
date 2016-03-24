//Question 1 
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
	int n;
	cout << "Enter how many course you'd like: ";
	cin >> n;
	Course *Tinker = new Course[n];
	
	for(int i=1;i<=n;i++)
	{
		cout << "Enter course name: ";
		cin >> Tinker->courseName;
		for(int k=0;k<3;k++)
		{
			cout << "Enter Chapter Name: ";
			cin >> Tinker[i].array[k].name;
			cin.ignore();
			cout << "Enter Chapter page number: ";
			cin >> Tinker[i].array[k].pageNumber;
			cout << "Enter Chapter section total: ";
			cin >> Tinker[i].array[k].sectionTotal;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		int amount = 0;
		cout << "Course Name: " << Tinker[i].courseName << endl;
		cout << "Chapter Names: ";
		for(int k=0;k<n;k++)
		{
			cout << Tinker[i].array[k].name << ", ";
			amount+=Tinker[i].array[k].sectionTotal;
		}
		cout << "Your sectional total for this Course is: " << amount << endl;
		
	}
	
}