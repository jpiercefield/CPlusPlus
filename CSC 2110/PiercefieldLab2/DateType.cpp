// File DateType.cpp  contains the implementation of class DateType
#include "DateType.h"
#include <fstream>
#include <iostream>
using namespace std;

// Nmber of days in each month
static int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30,
                            31, 30, 31};	

// Nmaes of the months
static string conversionTable[] = {"Error", "January", "February", 
    "March", "April", "May", "June", "July", "August", "September",
    "October", "November", "December"};

void DateType::Initialize (int newMonth, int newDay, int newYear)
// Post: If newMonth, newDay and newYear represent a valid date,
//       year is set to newYear;
//       month is set to newMonth;
//       day is set to newDay;
//       otherwise a string exception is thrown, stating the
//       first incorrect parameter.
//
// Note:  Years must be 1900 or sooner.
//
{
	if(newMonth>=1 && newMonth<=12)
	{
		month = newMonth;	
	}
	else if(newMonth<1 || newMonth>12)
	{
		month = 0;
		cout << "Invalid Month";
	}
	if(newDay>=1 && newMonth<=31)
	{
		day = newDay;
	}
	else if(newDay<1 || newDay>31)
	{
		day = 0;
		cout << "Invalid Day";
	}
	if(newYear>=1900 && newYear<=2015)
	{
		year = newYear;
	}
	else if(newYear<1900 || newYear>2015)
	{
		year = 0;
		cout << "Invalid year";
	}
	
	
}

int DateType::GetMonth() const
// Accessor function for data member month.
{
   return month;
}

string DateType::GetMonthAsString() const
// Returns data member as a string
{
  return conversionTable[month]; // *** put code here
}

int DateType::GetYear() const
// Accessor function for data member year.
{
   return year;
}

int DateType::GetDay() const
// Accessor function for data member day.
{
   return day;
}

bool DateType::leapYear(int year) const
//
// If year divided by 400 is equal to 0 than this is a leap year.
//else if year is divisible by for but NOT divisible by a 100 it is
// a leap year.
{
    if(year%400==0)
    {
    	return true;
    }
    else if(year%4==0)
    {
    	if(year%100==0)
    	{
    		return false;
    	}
    	return true;
    }
    else
    {
    	return false;
    }
}

DateType DateType::Adjust(int daysAway) const
// Pre:  Self has been initialized
// Post: Function value = newDate daysAway from self
{
   DateType returnDate;
   int newDay = day + daysAway;
   int newMonth = month;
   int newYear = year;
   int finished = false;
   while(!finished)
   {
        int daysInThisMonth = daysInMonth[newMonth];
        if(newDay<= daysInThisMonth)
        {
        	finished = true;
        }
        else
        {
        	newDay = newDay - daysInThisMonth;
        	newMonth = (newMonth%12)+1;
        	if(newMonth==1)
        	{
        		newYear++;
        	}
        }
   }
   returnDate.Initialize(newMonth,newDay,newYear);
   return returnDate;
}
