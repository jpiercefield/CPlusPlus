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

void addSong(SongDoublyLinkedList *songList, SongNode *songNd);
void displayListElements(SongDoublyLinkedList *songList);

int main()
{
	SongNode *songNd; //opening a new SongNode Pointer
	songNd = new SongNode; //Allocating space for a SongNode
	SongDoublyLinkedList *songList; //opening a new SongDoublyLengthList to hold address of head
	songList = new SongDoublyLinkedList; //Allocating space for the SongDoublyLinkedList
	cout << "Enter First Song ID: ";
	cin >> songNd->sg.id; //repeat for name and singername---
	songNd->previousNode=NULL;
	songList->firstElement=songNd; //Setting the SDLL for the element *firstElement - to point at the address of songNd
	bool question = true;
	while(question == true)
	{
		char letter;
		cout << "Enter the number of what you'd like to do next: " << endl;
		cout << " a = Add a New Song" << endl;
		cout << " b = Display List of Songs" << endl;
		cout << " c = Terminate Program" << endl;
		cin >> letter;
		switch(letter)
		{
			case 'a':
				{ 
					addSong(songList, songNd);
					break;
				}
				
				
				
			case 'b': 
				{
					displayListElements(songList);
					break;
				}
			
			case 'c': 
				{
					question = false;
					break;
				}
				
		}
	}
	return 0;
	
	
	
	
}

void addSong(SongDoublyLinkedList *songList, SongNode *songNd)
{
	
	if(songNd->previousNode==NULL)
	{
		songNd = new SongNode; //Making a newNode;
		songList->firstElement->nextNode=songNd; //Setting the nextNode for the headNode
		songNd->previousNode=songList->firstElement; //Setting the previousNode of newNode to the firstelement address
		cout << "Enter The New Song's ID:	";
		cin >> songNd->sg.id; //Saving New Song
		songNd->nextNode=NULL;
		
	}
	else
	{
		SongNode *songTemp; //opening a temp SongNode
		songTemp = new SongNode; //giving temp allocated space
		cout << "Enter The New Song's ID: "; //asking to enter id into temp
		cin >> songTemp->sg.id; //saving id into temp
		songNd->nextNode=songTemp; //setting next node to address of temp
		songTemp->previousNode=songNd;
		songNd = new SongNode; //opening a newNode
		songNd=songTemp; //setting this address to temp.
		songNd->nextNode=NULL;
				
	}
	
}

void displayListElements(SongDoublyLinkedList *songList)
{
	SongNode *temp = songList->firstElement;
	while(temp!= NULL)
	{
		cout << temp->sg.id << " ";
		temp = temp->nextNode;
	}
	
	cout << endl;
}