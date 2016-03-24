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

int main()
{
	SongNode *songNd;
	SongNode *head;
	head = new SongNode;
	cout << "Input your first song ID: ";
	cin >> head->sg.id;
	head->previousNode=NULL;
	SongDoublyLinkedList *songList;
	songList = new SongDoublyLinkedList; //12 hours and I still don't understand this Proj.
	songList->firstElement=head;
	cout << head->sg.id;
	cout << songList->firstElement->sg.id;
	cout << "Add a new song: ";
	addSong(songList, songNd);
	cout << "Your new list: ";
	cout << songList->firstElement->sg.id; << endl;

	
	
	
}

void addSong(SongDoublyLinkedList *songList, SongNode *songNd)
{
	songNd = new SongNode;
	songNd->previousNode=songList->firstElement;
	cout << "Enter New Song Id: ";
	cin >> songNd->sg.id;
}