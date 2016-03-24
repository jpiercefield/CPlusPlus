 #include<iostream>
using namespace std;



void display(char *array, int length);
void entry(char array[], int length);
char *clockwise(char *array, int length);
void reverseArray(int length, char *array);

int main()
{
    int length, answer;
    int rotationType;
    char *arrayNew;
    cout << "\n\n- Array Rotator -\n\n";
    cout << "\nPlease enter the length of the array: \n";
    cin >> length;
    char array[length];
    entry(array,length);
    cout << "How many characters would you like to rotate?\n";
    cin >> answer;
	if (answer > length)
		{
            cout << "\nThe number of characters to rotate must be less than the " << end
            cout << "the length of your array" << endl;
            return 0;
		}
    arrayNew = array;
    cout << "How would you like to rotate the array? (Clockwise = 1 / Counterclockwise = 2)\n";
    cin >> rotationType;

    cout << "Initial Array: ";
    display(array, length);

    if(rotationType == 1)
    {
        for (int i = 0; i < answer; i++)
		{
            arrayNew = clockwise(array, length);
		}
	}
    else if(rotationType == 2)
    {
        reverseArray(length,array);
		for (int i =0; i < answer; i++)
        {
                arrayNew = clockwise(array,length);
        }
		reverseArray(length,array);
	}
    else
	{
        cout << "Not a choice. Please enter '1' or '2'\n";
        return 0;
	}
	
    cout << "Rotated Array: ";
    display(array,length);

}

void entry(char array[], int length)
{
for (int i = 0; i < length; i++)
		{cout << "Please enter character\n";
		cin >> array[i];
		}
}

void display(char *array, int length)
{
for (int i = 0; i < length; i++)
	{ cout << *(array+i) << " " ;
	}
cout << endl;
}

char *clockwise(char *array, int length)
{
	char *arrayNew;
	
	char place=0;
	
	
	if(length>1)
		{
			place = array[0];
			array[0] = array[1];
			array[1] = place;
			clockwise(array+1, length-1);
		}
		arrayNew = array;
		return arrayNew;
	}
	
void reverseArray(int length, char *array)
	{ int place1, place2;
		for (int i = 0, place2 = (length - 1); i < place2; i++, place2--)
		{
			place1 = array[i];
			array[i] = array[place2];
			array[place2] = place1;
		}

	}
