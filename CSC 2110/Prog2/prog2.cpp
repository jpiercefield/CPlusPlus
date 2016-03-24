//James Logan Piercefield
#include "deck.h"

//Main of the Program, This also counts the consolidations for us. 
//Meanwhile it also tracks how many consecutive consolidations we have
int main()
{
	int num_consolidation=0;
	int num_consecutive_consolidation=0;
	int num_max_consolidation=0;
	Deck list;
	ifstream file("deckofcards.txt");
	while(!file.eof()) //file.is_open()
	{
		Card* temp;
		temp = new Card;
		file >> *temp;
		list.add(temp);
		list.display();
		cout << endl;
		num_consecutive_consolidation = 0;
		while(list.consolidate())
		{
			list.display();
			num_consolidation++;
			num_consecutive_consolidation++;
			cout << endl;
		}
		if(num_consecutive_consolidation > num_max_consolidation)
		{
			num_max_consolidation = num_consecutive_consolidation;
		}
		
	}
	file.close();
	cout << "\nNumber of total consolidations: " << num_consolidation << endl;
	cout << "Highest number of consecutive consolidations: ";
	cout << num_max_consolidation << endl;
	return 0;
}