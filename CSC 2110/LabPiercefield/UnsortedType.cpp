// This file contains the linked implementation of class
// UnsortedType.

#include "UnsortedType.h"


struct NodeType
{
   ItemType info;
   NodeType* next;
};



UnsortedType::UnsortedType()  // Class constructor
{
   length = 0;
   listData = NULL;
}


bool UnsortedType::IsFull() const
// Returns true if there is no room for another ItemType 
//  on the free store; false otherwise.
{
   NodeType* location;
   try
   {
      location = new NodeType;
      delete location;
      return false;
   }
   catch(std::bad_alloc exception)
   {
      return true;
   }
}


int UnsortedType::GetLength() const
// Post: Number of items in the list is returned.
{
   return length;
}


void UnsortedType::MakeEmpty()
// Post: List is empty; all items have been deallocated.
{
   NodeType* tempPtr;

   while (listData != NULL)
   {
      tempPtr = listData;
      listData = listData->next;
      delete tempPtr;
   }
   length = 0;
}


void UnsortedType::PutItem(ItemType item)
// item is in the list; length has been incremented.
{
   NodeType* location;		// Declare a pointer to a node

   location = new NodeType;	// Get a new node 
   location->info = item;	// Store the item in the node
   location->next = listData;	// Store address of first node 
 				//   in next field of new node
   listData = location;		// Store address of new node into
				//   external pointer
   length++;			// Increment length of the list
}


ItemType UnsortedType::GetItem(ItemType& item, bool& found)
// Pre:  Key member(s) of item is initialized.
// Post: If found, item's key matches an element's key in the 
//       list and a copy of that element has been stored in item;
//       otherwise, item is unchanged. 
{
   bool moreToSearch;
   NodeType* location;

   location = listData;
   found = false;
   moreToSearch = (location != NULL);

   while (moreToSearch && !found) 
   {
      switch (item.ComparedTo(location->info))
      {
         case LESS    : 
         case GREATER : location = location->next;
                        moreToSearch = (location != NULL);
                        break;
         case EQUAL   : found = true;
                        item = location->info;
                        break;
      }
   }
   return item;
}


void UnsortedType::DeleteItem(ItemType item)
{
   NodeType* location = listData;
   NodeType* tempLocation = NULL;
   // Locate node to be deleted.
   while(location != NULL)
   {
      if(location->info.ComparedTo(item) != EQUAL)
      {
         tempLocation = location;
         location = location->next;
      }
      else
      {
         if(tempLocation == NULL)
            listData = listData->next;
         else
            tempLocation->next = location->next;
         delete location;
         length--;
         if(tempLocation == NULL)
            location = listData;
         else
            location = tempLocation->next;
      }
   }
}


void UnsortedType::ResetList()
{
   currentPos = NULL;
}
 

ItemType UnsortedType::GetNextItem()
{
   ItemType item;
   if (currentPos == NULL)
      currentPos = listData;
   else
      currentPos = currentPos->next;
   item = currentPos->info;
   return item;
}


UnsortedType::~UnsortedType()
{
   NodeType* tempPtr;

   while (listData != NULL)
   {
      tempPtr = listData;
      listData = listData->next;
      delete tempPtr;
   }
}
void UnsortedType::SplitList(ItemType item, UnsortedType& list1, UnsortedType& list2)
{
   NodeType *first = listData;
   while(first!=NULL)
   {
      if(first->info.ComparedTo(item) == LESS || first->info.ComparedTo(item) == EQUAL)
      {
         list1.PutItem(first->info);
      }
      else
      {
         list2.PutItem(first->info);
      }
      first=first->next;
   }
}
