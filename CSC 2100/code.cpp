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
//void displayListElements(SongDoublyLinkedList *songList);

int main()
{
	SongDoublyLinkedList *songList=NULL;
	SongNode *songNd;
	bool question =true;
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
					//displayListElements(songList);
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
	if(songList==NULL)
	{
	 	SongNode *sondNd =new SongNode;
		songNd->nextNode=NULL;
		songNd->previousNode=NULL;
		cout << "Enter song id: ";
		cin >> songNd->sg.id;
		cout << "Enter song name: ";
		cin >> songNd->sg.name;
		cout << "Enter singer name: ";
		cin >> songNd->sg.singerName;
		songList->firstElement=songNd;
	}
	else
	{
		SongNode *temp;
		temp=songList->firstElement;
		while(temp->nextNode!=NULL)
		{
			temp=temp->nextNode;
		}
		temp->nextNode=songNd;
	}
}
