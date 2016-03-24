//James Piercefield
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void sortArray(int [], int);
int partition(int [], int, int);
void quickSort(int [], int, int);

int main()
{
	unsigned seed = time(0);
	srand(seed);
	int arrayLength;
	char nValue;
	cout << "Welcome to the Array Sorting Program." << endl;
	cout << "\nEnter length of array: ";
	cin >> arrayLength;
	int myArray[arrayLength];
	const int Min_Value = 0;
	const int Max_Value = 9999;
	
	cout << "\nWould you like to enter the values Manually or would you like it to be Automatic(random)?" << endl;
	cout << "Enter '1' to enter Manually or '2' for Automatic(random set): ";
	cin >> nValue;
	
	if(nValue == '1')
	{
		for (int i = 0; i < arrayLength; i++)
    	{
        	cout << "Please type a number:  ";
        	cin >> myArray[i];
        }
	}
	else if(nValue == '2')
	{
		
		for(int j = 0; j < arrayLength; j++)
		{
			myArray[j] = (rand() % (Max_Value - Min_Value + 1)) + Min_Value;
		}
		
	}
	else if(nValue != '1' || nValue != '2')
	{
		cout << "You've chosen an invalid option. Please restart the program to try again." << endl;
		return(0);
		
	}
    cout << "Your original array is: ";
    
    for (int k = 0; k < arrayLength; k++)
    {
        cout << myArray[k] << " ";
    }
    
    char bubbleQuick;
    cout << "\n\nHow would you like to sort your array?\n\n" << endl;
    cout << "Please type '1' for Bubble Sort(Descending) or '2' for Quick Sort(Ascending)" << endl;
    cin >> bubbleQuick;
    
    //Switch Statement to Sort
    switch(bubbleQuick)
    {
    	//Case 1 for Bubble
    	case '1':	sortArray(myArray, arrayLength);
    		cout << "\nYour array Bubble Sorted: ";
    		
    		for (int l = arrayLength - 1; l > -1; l--)
    		{
        		cout << myArray[l] << " ";
   			}
    		cout << "\n\nThanks for using Array Sorting." << endl;
    		return(0);
    	
    	//Case 2 for Quick
    	case '2':	quickSort(myArray, 0, arrayLength - 1);
    		cout << "\nYour array Quick Sorted: ";
    		for (int l = 0; l < arrayLength; l++)
    		{
        		cout << myArray[l] << " ";
   			}
    		cout << "\n\nThanks for using Array Sorting" << endl;
    		return(0);
    	
    	//Default if none chosen
    	default: cout << "I'm sorry, You've chosen neither '1' nor '2'. Please restart the";
    		cout << "program and try again.";
    		return(0);
     }
    
    
}

//Function to sort the array Bubble
void sortArray(int myArray[], int arrayLength)
{
	bool swap;
	int temp;
	
	do
	{
		swap = false;
		for(int count = 0; count < (arrayLength - 1 ); count++)
		{
			if(myArray[count] > myArray[count +1])
			{
				temp = myArray[count];
				myArray[count] = myArray[count + 1];
				myArray[count + 1] = temp;
				swap = true;
			}
		}
	} while(swap);
}

void quickSort(int myArray[], int start, int end)
{
	int pivotPoint;
	
	if(start < end)
	{
		pivotPoint = partition(myArray, start, end);
		quickSort(myArray, start, pivotPoint - 1);
		quickSort(myArray, pivotPoint + 1, end);
	}
}

int partition(int myArray[], int start, int end)
{
	int pivotValue, pivotIndex, mid;
	
	mid = (start + end) / 2;
	swap(myArray[start], myArray[mid]);
	pivotIndex = start;
	pivotValue = myArray[start];
	for(int scan = start + 1; scan <= end; scan++)
	{
		if(myArray[scan] < pivotValue)
		{
			pivotIndex++;
			swap(myArray[pivotIndex], myArray[scan]);
		}
	}
	swap(myArray[start], myArray[pivotIndex]);
	return pivotIndex;
}
	
void swap(int &value1, int &value2)
{
	int temp = value1;
	
	value1 = value2;
	value2 = temp;
}