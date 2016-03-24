#include <iostream>
#include <fstream>
#include <string>
using namespace std;


union grade
{
	int grade1;
	int grade2;

};

int main()
{
	grade g;
	g.grade1=30;
	g.grade2=35;
	cout << g.grade1 << endl;
}