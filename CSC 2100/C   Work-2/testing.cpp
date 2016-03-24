#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	fstream list;
	list.open("worldlist.txt", ios::in);
	getline(
	list.close();
	

}

SongNode *deletedNode = songList->firstElement;
		for(int i=0;i<index;i++)
		{
			deletedNode = deletedNode->nextNode;
		}
		SongNode *temp = new SongNode;
		SongNode *temp2 = new SongNode;			
		temp=deletedNode->previousNode;
		temp->nextNode=deletedNode->nextNode;
		temp2=deletedNode->nextNode;
		temp2->previousNode=temp->nextNode;
		
		
		return(songList->firstElement);