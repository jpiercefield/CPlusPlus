//James Logan Piercefield


#include <iostream>
#include "List.h"
using namespace std;
int main()
{
	int num = 10;
	List myList(10);
	for(int i=0;i<10;i++)
	{
		myList.insert(i+1,i);
	}
	myList.swapEnds();
	
	cout << myList;
	

}



//