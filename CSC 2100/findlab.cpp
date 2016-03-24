#include <iostream>
#include <string>
using namespace std;
int main()
{
	int pos1, pos2, pos3, counter, pos;
	pos1=0;
	counter=0;
	string s="This is sentence 1. This is sentence 2! This is sentence three?";
	string s1=". ";
	string s2="! ";
	string s3="? ";
	
	pos=s.find(s1,0);
	for(int i=0;i<s.size();i++)
	{
		pos1=s.find(s1,pos);
		pos2=s.find(s2,pos);
		pos3=s.find(s3,pos);
		if(pos1>pos&&(pos2<pos||pos2>pos1)&&(pos3<pos||pos3>pos1))
		{
			pos=pos1;
			counter++;
		}
		else
			if(pos2>pos)
			{
				pos=pos2;
				counter++;
			}
		else
			if(pos3>pos)
			{
				pos=pos3;
				counter++;
			}
		else
		{
			break;
		}
		if(counter>0)
		{
			counter++;
		}
	}
	//s.size() returns length of string
	
}
