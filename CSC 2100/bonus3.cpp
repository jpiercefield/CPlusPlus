#include <iostream>
using namespace std;
void thefunction(int length, char array[]);
int main()
{
	int length;
	cout << "Enter length of array: ";
	cin >> length;
	char array[length];
	cout << "\n Now let's fill the array." << endl;
	for (int i=0;i<length;i++)
	{
		cout << "Enter a digit, consonant, or a vowel: ";
		cin >> array[i];
	}
	thefunction(length, array);
}

void thefunction(int length, char array[])
{
	int vowel=0;
	int digit=0;
	int consonant=0;
	for(int i=0;i<length;i++)
	{
		if(array[i]=='a' || array[i]=='e' || array[i]=='i' || array[i]=='o'
		 || array[i]=='u')
		{
			vowel++;
		}
		else if(array[i]=='1' || array[i]=='2' || array[i]=='3' || array[i]=='4'
		|| array[i]=='5' || array[i]=='6' || array[i]=='7' || array[i]=='8'
		|| array[i]=='9' || array[i]=='0')
		{
			digit++;
		}
		else
		{
			consonant++;
		}
	}
	cout << "Digits: " << digit << endl;
	cout << "Vowels: " << vowel << endl;
	cout << "Consonants: " << consonant << endl;
	
}
