#include <iostream>
#include <string>
using namespace std;

struct Student
{	
	int studentId;
	string studentName;
	string request;
};

struct StudentNode
{
	Student st;
	StudentNode *next;
};

bool isEmpty(StudentNode *firstElement);
StudentNode *createNode();
void addNode(StudentNode *firstElement);
void displayListElements(StudentNode *firstElement);

int main()
{
	StudentNode *firstElement=NULL; //represents first node of lis
	char cont='y';
	while(cont=='y')
	{
		addNode(firstElement);
		cout << "Do you want to continue? (y/n)";
		cin >> cont;
		
		displayListElements(firstElement);
	}
	
}

//void isEmpty(StudentNode *firstElement)
//{
//	if(firstElement==NULL)
//	{
//		cout << "My list is empty\n";
//		
//	}
//	else
//	{
//		cout << "My list is not empty\n";
//	}
//}

bool isEmpty(StudentNode *firstElement)
{
	if(firstElement==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

StudentNode *createNode()
{
	StudentNode *pt;
	pt=new StudentNode;
	pt->next=NULL;
	cout << "Enter student id: ";
	cin >> pt->st.studentId;
	cout << "Enter student name: ";
	cin >> pt->st.studentName;
	cout << "Enter student request: ";
	cin >> pt->st.request;
	return pt;
}

void addNode(StudentNode &firstElement)
{
	StudentNode *pt;
	// create my new node that I am going to add
	pt=createNode();
	if(isEmpty(firstElement))
	{
		firstElement=pt;
	}
	else
	{
		StudentNode *studentPt;
		studentPt=firstElement;
		// go through my list's node by using studentPt
		while(studentPt->next!=NULL)
		{
			studentPt=studentPt->next;
		}
		//studentPt contains the address of the last element of my list
		//connect studentPt to the newly created node pt;
		studentPt->next=pt;
	}
}

void displayListElements(StudentNode *firstElement)
{
	StudentNode *pt;
	pt=firstElement;
	while(pt!=NULL)
	{
		cout << "The student name is: ";
		cout << pt->st.studentName << endl;
		pt=pt->next;
	}
}