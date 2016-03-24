#include<iostream>
#include "articleMgmt.h"
#include "LibraryTypes.h"
#include"BookMgmt.h"
using namespace std;

int main()
{
	BookStack *bkStack=new BookStack;
	ArticleDoublyLinkedList *articleList=new ArticleDoublyLinkedList;
	Book *bk;
	BookNode *bkNode;
	ArticleNode *articleNd;
	Article* al;
	int n,m;
	cout << "What is the number of books?\n";
	cin >> n;
	for (int i=0;i<n;i++)
	{
		bk =  new Book;
		bkNode= new BookNode;

		cout << "What is the name of the book\n";
		cin.ignore();
		getline(cin,bk->name);
		cout << "What is the isbn of the book\n";
		cin >> bk->isbn;
		cout << "Who is the author of the obook\n";
		cin.ignore();
		getline(cin,bk->name);
		cout << "How many pages are in the book?\n";
		cin >> bk->pagesNumber;
		bkNode->bk=*bk;
		pushBook(bkStack,bkNode);
	}
	cout << "How many articles do you want to ennter?\n";
	cin >> m;
	for (int i=0;i<n;i++)
	{
		articleNd = new ArticleNode;
		al = new Article;

		cout << "What is the ID of the article?\n";
		cin >> al->articleId;
		cout << "What is the title of the article?\n";
		cin.ignore();
		getline(cin,al->title);
		cout << "What is the field of the article?\n";
		cin.ignore();
		getline(cin,al->field);
		articleNd->al=*al;
		addArticle(articleList,articleNd);
	}
	char answer;
	while (answer=='y'||answer=='Y')
	{
		int choice;
		cout << "To enter a book, enter 1\n To remove a book, enter 2\n To check and see if the stack is empty, enter 3\n To see the names of each book, enter 4\n To clear the stack, enter 5\n To see the last article in the list, enter 6\n To add an article, enter 7\n To remove an article, press 8\n To see the titles of each article, enter 9\n To clear the articles, enter 10\n To quit, enter 11\n";
		cin >> choice;
		if (choice<1||choice>9)
		{
			cout << "INVALID INPUT\n";
			return 0;
		}
		BookNode* temp;
		ArticleNode* temp1;
		switch (choice)
		{
			case 1:
				bkNode=new bookNode;
				cout << "What is the name of the book\n";
				cin.ignore();
				getline(cin,bk->name);
				cout << "What is the isbn of the book\n";
				cin >> bk->isbn;
				cout << "Who is the author of the obook\n";
				cin.ignore();
				getline(cin,bk->name);
				cout << "How many pages are in the book?\n";
				cin >> bk->pagesNumber;
				bkNode->bk=*bk;
				pushBook(bkStack,bkNode);
				displayStackElements(bkStack);
				break;
			case 2:
				temp=popBook(bkStack);
				delete temp;
				displayStackElements(bkStack);
				break;
			case 3:
				if (isEmpty(bkStack))
					cout << "Empty\n";
				else
				{ 
					cout << "Not Empty\n";
				}
				break;
			case 4:
				displayStackElements(bkStack);
				break;
			case 5:
				clearStack(bkStack);
				cout << "Stack cleared\n";
				break;
			case 6:
				temp1=getLastArticle(articleList);
				cout << "The last article is " << temp1->al.title << ".\n";
				delete temp1;
				break;
			case 7:
				articleNd=new articleNode;
				cout << "What is the ID of the article?\n";
				cin >> al->articleId;
				cout << "What is the title of the article?\n";
				cin.ignore();
				getline(cin,al->title);
				cout << "What is the field of the article?\n";
				cin.ignore();
				getline(cin,);
				articleNd->al=*al;
				addArticle(articleList,articleNd);
				displayListElements(articleList);
				break;
			case 8:
				int index;
				cout << "Which article number do you want to remove? (Zero is the first article)\n";
				cin >> index;
				temp1=removeArticle(articleList, index);
				if (temp1=NULL)
					cout << "INVALID\n";
				else
				{
					cout << "Article removed\n";
					delete temp1;
					displayListElements(articleList);
				}
				break;
			case 9:
				displayListElements(articleList);
				break;
			case 10:
				clearList(articleList);
				cout << "Article list cleared\n";
				break;
			case 11:
				clearList(articleList);
				clearStack(bkStack);
				return 0;
		}
		
		cout << "Do you want to do anything else to the stack and list? (Y/N)\n";
		cin >> answer;
	}
	return 0;
}