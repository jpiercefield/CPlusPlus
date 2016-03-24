#ifndef LibraryTypes_H
#define LibraryTypes_H

struct Book
{
	int isbn;
	std::String name;
	std::String authorName;
	int pagesNumber;
}

struct BookNode
{
	Book bk;
	BookNode *previousNode;
}

struct BookStack
{
	BookNode *lastElement;
}

struct Article
{
	int articleId;
	std::String title;
	std::String field;
}

struct ArticleNode
{
	Article al;
	ArticleNode *previousNode;
	ArticleNode *nextNode;
}

struct ArticleDoublyLinkedList
{
	ArticleNode *firstElement;
}
#endif