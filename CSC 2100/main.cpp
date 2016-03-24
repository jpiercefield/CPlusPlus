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
    SongNode *lastElement;
};

void addSong(SongDoublyLinkedList *songList);
void displayListElements(SongDoublyLinkedList *songList);
void displayLastElement(SongDoublyLinkedList *songList);
void removeSong(SongDoublyLinkedList *songList, int index);
void clearList(SongDoublyLinkedList *songList);

int main()
{
    SongDoublyLinkedList songList;
    songList.firstElement = NULL; 
    songList.lastElement = NULL; 
    bool asking = true;

    while (asking == true)
    {
        char letter;
        cout << "\nEnter the letter of what you'd like to do next: " << endl;
        cout << " a = Add a New Song" << endl;
        cout << " b = Display List of Songs" << endl;
        cout << " c = Terminate Program" << endl;
        cout << " d = Display the Last Song in the List" << endl;
        cout << " e = Delete a Certain Song" << endl;
        cout << " f = Clear all Songs" << endl;
        cin >> letter;

        switch (letter)
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
                asking = false;
                break;
            }

            case 'd':
            {
                displayLastElement(&songList);
                break;
            }

            case 'e':
            {
                int indexN;
                cout << "Here is ";
                displayListElements(&songList);
                cout << "Enter the index of the song you'd like to delete ";
                cout << "(First Song = 0)" << endl;
                cout << "Enter Here: ";
                cin >> indexN;
                removeSong(&songList, indexN);
                break;
            }

            case 'f':
            {
                clearList(&songList);
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

    if (songList->firstElement == NULL)
        songList->firstElement = songTemp;

    if (songList->lastElement != NULL)
    {
        songList->lastElement->nextNode = songTemp;
        songTemp->previousNode = songList->lastElement;
    }

    songList->lastElement = songTemp;
}

void displayListElements(SongDoublyLinkedList *songList)
{
    cout << "Your List: " << endl;

    SongNode *temp = songList->firstElement;
    while (temp != NULL)
    {
        cout << temp->sg.id << endl;
        cout << temp->sg.name << endl;
        cout << temp->sg.singerName << "\n" << endl;
        temp = temp->nextNode;
    }

    cout << endl;
}

void displayLastElement(SongDoublyLinkedList *songList)
{
    SongNode *lastSong = songList->lastElement;
    if (lastSong == NULL)
    {
        cout << "Your Song List is Empty. " << endl;
        return;
    }

    cout << "Your last song was : " << endl;
    cout << lastSong->sg.id << endl;
    cout << lastSong->sg.name << endl;
    cout << lastSong->sg.singerName << endl;
}

void removeSong(SongDoublyLinkedList *songList, int index)
{
    if (songList->firstElement == NULL)
    {
        cout << "Your Song List is Empty. " << endl;
        return;
    }

    SongNode *node = songList->firstElement;
    for(int i = 0; i < index; i++)
    {
        node = node->nextNode;
        if (node == NULL)
        {
            cout << "Invalid index. " << endl;
            return;
        }
    }

    if (node->previousNode != NULL)
    {
        node->previousNode->nextNode = node->nextNode;
	}
    if (node->nextNode != NULL)
    {
        node->nextNode->previousNode = node->previousNode;
	}
    if (songList->firstElement == node)
    {
        songList->firstElement = node->nextNode;
    }

    if (songList->lastElement == node)
    {
        songList->lastElement = node->previousNode;
    }

    delete node;
}

void clearList(SongDoublyLinkedList *songList)
{
    SongNode *node = songList->firstElement;
    songList->firstElement = NULL;
    songList->lastElement = NULL;

    while (node != NULL)
    {
        SongNode *temp = node->nextNode;
        delete node;
        node = temp;
    }
}