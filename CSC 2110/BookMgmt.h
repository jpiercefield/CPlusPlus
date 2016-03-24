#ifndef BookMgmt_H
#define BookMgmt_H

void pushBook(BookStack *bkStack, BookNode *bkNode);
BookNode *popBook(BookStack *bkStack);
bool isEmpty(BookStack *bkStack);
void displayStackElements(BookStack *bkStack);
voic clearStack(BookStack *bkStack);

#endif