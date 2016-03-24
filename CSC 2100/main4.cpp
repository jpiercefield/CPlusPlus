//James Piercefield
#include <iostream>
#include <string>
using namespace std;

struct Song
{
	int id;
	string name;
	string singerName;
};

struct SongNode
{
	Song sg;
	SongNode *previousNode;
	SongNode *nextNode;
};

struct SongDoublyLinkedList
{
	SongNode *firstElement;
};

void addSong(SongDoublyLinkedList *songList);
void displayListElements(SongDoublyLinkedList *songList);
SongNode *getLastSong(SongDoublyLinkedList *songList);
SongNode *removeSong(SongDoublyLinkedList *songList, int index);
void clearList(SongDoublyLinkedList *songList);

int main()
{
	SongDoublyLinkedList songList;
	songList.firstElement = NULL; 
	bool question = true;
	while(question == true)
	{
		char letter;
		cout << "\nEnter the letter of what you'd like to do next: " << endl;
		cout << " a = Add a New Song" << endl;
		cout << " b = Display List of Songs" << endl;
		cout << " c = Terminate Program" << endl;
		cout << " d = Display (return) the Last Song in the List" << endl;
		cout << " e = Delete a Certain Song Node " << endl;
		cout << " f = Clear all Songs" << endl;
		cin >> letter;
		switch(letter)
		{
			case 'a':
				{ 
					addSong(&songList);
					break;
				}
				
				
				
			case 'b': 
				{
					displayListElements(&songList);
					break;
				}
			
			case 'c': 
				{
					question = false;
					break;
				}
			case 'd':
				{	
					SongNode *lastSong = new SongNode;
					lastSong = getLastSong(&songList);
					cout << "Your last song was : " << endl;
					cout << lastSong->sg.id << endl;
					cout << lastSong->sg.name << endl;
					cout << lastSong->sg.singerName << endl;
					break;
				}
			case 'e':
				{
					int indexNumber;
					cout << "Here is ";
					displayListElements(&songList);
					cout << "Enter the index of the song you'd like to delete ";
					cout << "(First Song = 0)" << endl;
					cout << "Enter Here: ";
					cin >> indexNumber;
					songList.firstElement = removeSong(&songList, indexNumber);
					
					break;
				}
			case 'f':
				{
					delete songList.firstElement;
					songList.firstElement = NULL;
					break;
				}
				
		}
	}
	return 0;
}


void addSong(SongDoublyLinkedList *songList)
{
	SongNode *songTemp = new SongNode;
	songTemp->previousNode = NULL; // Note: Important!
	songTemp->nextNode = NULL; // Note: Important!
	cout << "Enter The New Song's ID: ";
	cin >> songTemp->sg.id;
	cout << "Enter The New Song's Name: ";
	cin >> songTemp->sg.name;
	cout << "Enter The Singer's Name: ";
	cin >> songTemp->sg.singerName;
	
	if(songList->firstElement)
	{
		SongNode *temp = songList->firstElement;
		while(temp)
		{
			if(temp->nextNode)
				temp = temp->nextNode;
			else
			{
				songTemp->previousNode = temp;
				temp->nextNode = songTemp;
				break;
			}
		}
	}
	else
	{
		songList->firstElement = songTemp;
	}
	
}

void displayListElements(SongDoublyLinkedList *songList)
{
	cout << "Your List: " << endl;
	SongNode *temp = songList->firstElement;
	while(temp!= NULL)
	{
		cout << temp->sg.id << endl;
		cout << temp->sg.name << endl;
		cout << temp->sg.singerName << "\n" << endl;
		temp = temp->nextNode;
	}
	
	cout << endl;
}

SongNode *getLastSong(SongDoublyLinkedList *songList)
{
	SongNode *temp = songList->firstElement;
	bool maybe = true;
	while(maybe == true)
	{
		if(temp->nextNode==NULL)
		{	
			maybe=false;
			break;
		}
		else
		{
			temp=temp->nextNode;
			continue;
		}
	
	}
	return(temp);
}

SongNode *removeSong(SongDoublyLinkedList *songList, int index)
{
	
	if(index==0)
	{	
		if(songList->firstElement==NULL)
		{
			cout << "Your Song List is Now Completely Empty. " << endl;
			return 0;
		}
		SongNode *temp = songList->firstElement;
		temp = temp->nextNode;
		temp->previousNode=NULL;
		songList->firstElement=temp;
		return(songList->firstElement);
		
				
	}
	else if(songList==NULL)
	{
		cout << "I'm Sorry But You Have No Songs." << endl;
		return(songList->firstElement);
	}
	else
	{
		SongNode *deletedNode = songList->firstElement;
		for(int i=0;i<index;i++)
		{
			deletedNode = deletedNode->nextNode;
		}
		SongNode *temp = deletedNode->previousNode;	
		temp->nextNode=deletedNode->nextNode;
		SongNode *temp2=deletedNode->nextNode;
		temp2->previousNode=temp->nextNode;
		return(songList->firstElement);
	}
	
}

