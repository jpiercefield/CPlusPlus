#include <iostream>
using namespace std;

void pushBook(BookStack *bkStack, BookNode *bkNode)
{
	bkStack+=bkNode;
	if(bkNode[0])
	{
		lastElement=bkNode;
	}
	
	else
	{
		previousNode=lastElement;
		lastElement=previousNode;
	}
}
BookNode *popBook(BookStack *bkStack)
{
	
}
bool isEmpty(BookStack *bkStack)
{

}
void displayStackElements(BookStack *bkStack)
{

}
void clearStack(BookStack *bkStack)
{

}