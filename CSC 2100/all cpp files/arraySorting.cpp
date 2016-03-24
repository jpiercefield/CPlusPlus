#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void manual(int array[], int length);
void automatic(int array[], int length);
void bubbleSort(int array[], int length);
void insertionSort(int array[], int length);
void display(int array[], int length);

int main() 
{
int length;
string inputMethod;
string sort;

cout << "\n\n- Array Sorting -\n\n";

cout << "\nPlease enter the length of the array: \n";
cin >> length;
int array[length];
cout << "\nDo you want to enter the values or let random values be assigned? (manual/automatic) \n";
cin >> inputMethod;
cout << "\n";
if (inputMethod == "manual")
	manual(array, length);
	
	
else if (inputMethod == "automatic")
	automatic(array, length);
	
	
cout << "\nWould you like to use bubble sort or insertion sort? (bubble/insertion) \n";
cin >> sort;
if (sort=="bubble")
	{cout << "\n\nOriginal order:  "; 
		display(array,length); cout << "\n\n";
	bubbleSort(array,length);
	cout << "New order:       "; 
	display(array,length);
	}
else if (sort=="insertion")
	{cout << "\n\nOriginal order:  "; 
		display(array,length); cout << "\n\n";
	insertionSort(array,length);
	cout << "New order:       "; 
	display(array,length);
	}
}

void manual(int array[], int length)
{
for (int i = 0; i < length; i++)
		{cout << "Please enter value\n";
		cin >> array[i];
		}
}


void automatic(int array[], int length)
{
unsigned seed = time(0);
		srand(seed);
		for (int i = 0; i < length; i++)
			{array[i]=rand();}

}

void display(int array[], int length)
{
for (int i = 0; i < length; i++)
	{ cout << array[i] << " " ;
	}
	
}

void bubbleSort(int array[], int length) {
	bool swap; 
	int temp;
	do {
	swap = false;
		for (int i = 0; i < (length - 1); i++)
		{ 
			if (array[i]>array[i+1])
				{temp = array[i]; 
					array[i] = array[i+1];
					array[i+1] = temp;
					swap=true;
				}
		}
	} while(swap);
}

void insertionSort(int array[], int length){
	int j, temp;
	for (int i = 1; i < length; i++){
	j = i;
		while (j > 0 && array[j] < array[j-1]){
			temp = array[j];
			array[j] = array[j-1];
			array[j-1] = temp;
			j--;
			}
		}
		
	}

	