// James Piercefield
#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to the Class Grade Calculator." << endl;
	cout << "The following classes are available for calculation: \n";
	cout << "(A)Research Class, (B)Literature Class, or (C)Lab Class." << endl;
	cout << "Enter the number represented for the class to proceed." << endl;
	
	char Letter;
	cin >> Letter;
	//Use of "Switch Statement"
	switch (Letter)
	{
		//Start of Research Class (Use of "if, else if" statement)
		case 'A': 
		case 'a': cout << "You've chosen Research Class, let's begin." << endl;
			cout << "Enter your grade for the first test: ";
			double RcGrade1;
			cin >> RcGrade1;
			if (RcGrade1 < 0)
			{
				cout << "Error: You've entered and invalid number, Please try again. (1-10)";
				cout << endl;
				exit(0);
			}
			else if (RcGrade1 > 10)
			{	
				cout << "Error: You've entered and invalid number, Please try again. (1-10)";
				cout << endl;
				exit(0);
			}
			
			cout << "Enter your grade for the second test: ";
			double RcGrade2;
			cin >> RcGrade2;
			if (RcGrade2 < 0)
			{
				cout << "Error: You've entered and invalid number, Please try again. (1-10)";
				cout << endl;
				exit(0);
			}
			else if (RcGrade2 > 10)
			{	
				cout << "Error: You've entered and invalid number, Please try again. (1-10)";
				cout << endl;
				exit(0);
			}
			
			cout << "Enter your grade for the research paper: ";
			double RcGrade3;
			cin >> RcGrade3;
			if (RcGrade3 < 0)
			{
				cout << "Error: You've entered and invalid number, Please try again. (1-10)";
				cout << endl;
				exit(0);
			}
			else if (RcGrade3 > 10)
			{	
				cout << "Error: You've entered and invalid number, Please try again. (1-10)";
				cout << endl;
				exit(0);
			}
			
			cout << "Enter your grade for the presentation: ";
			double RcGrade4;
			cin >> RcGrade4;
			if (RcGrade4 < 0)
			{
				cout << "Error: You've entered and invalid number, Please try again. (1-10)";
				cout << endl;
				exit(0);
			}
			else if (RcGrade4 > 10)
			{	
				cout << "Error: You've entered and invalid number, Please try again. (1-10)";
				cout << endl;
				exit(0);
			}
			double RcGrade;
			RcGrade = ((RcGrade1+RcGrade2)/2*0.3+RcGrade3*0.5+RcGrade4*0.2)*10;
			
			//Evaluate the grade
			if (RcGrade >= 90)
			{
				cout << "You've received an A, You are eligible for financial aid!" << endl;
				exit(0);
			}
			else if (RcGrade >= 80)
			{
				cout << "You've received a B, You are eligible for financial aid!" << endl;
				exit(0);
			}
			else if (RcGrade >= 70)
			{
				cout << "You've received a C, You are eligible for partial financial aid." << endl;
				exit(0);
			}
			else if (RcGrade >= 60)
			{
				cout << "You've received a D, you are eligible for partial financial aid." << endl;
				exit(0);
			}
			else if (RcGrade < 60)
			{
				cout << "You've received an F, you failed the class and you are not\n";
				cout << "eligible for financial aid." << endl;
				exit(0);
			}
		break;
		
		//Start of Literature Class (Use of "if, else" statement.) 
		case 'B':
		case 'b': cout << "You've chosen Literature Class, let's begin." << endl;
			cout << "Enter the grade for your 1st quiz: " << endl;
			double LcGrade1;
			cin >> LcGrade1;
			if (LcGrade1 < 0 || LcGrade1 > 10)
			{
				cout << "Error: You've entered an invalid number." << endl;
				exit(0);
			}
			else 
			{
				cout << "I've saved this grade!" << endl;
			}
			
			cout << "Enter the grade for your 2nd quiz: " << endl;
			double LcGrade2;
			cin >> LcGrade2;
			if (LcGrade2 < 0 || LcGrade2 > 10)
			{
				cout << "Error: You've entered an invalid number." << endl;
				exit(0);
			}
			else 
			{
				cout << "I've saved this grade!" << endl;
			}
			
			cout << "Enter the grade for your 3rd quiz: " << endl;
			double LcGrade3;
			cin >> LcGrade3;
			if (LcGrade3 < 0 || LcGrade3 > 10)
			{
				cout << "Error: You've entered an invalid number." << endl;
				exit(0);
			}
			else 
			{
				cout << "I've saved this grade!" << endl;
			}
			
			cout << "Enter the grade for your test: " << endl;
			double LcGrade4;
			cin >> LcGrade4;
			if (LcGrade4 < 0 || LcGrade4 > 10)
			{
				cout << "Error: You've entered an invalid number." << endl;
				exit(0);
			}
			else 
			{
				cout << "I've saved this grade!" << endl;
			}
			
			cout << "Enter the grade for your final exam: " << endl;
			double LcGrade5;
			cin >> LcGrade5;
			if (LcGrade5 < 0 || LcGrade5 > 10)
			{
				cout << "Error: You've entered an invalid number." << endl;
				exit(0);
			}
			else 
			{
				cout << "I've saved this grade!" << endl;
			}
			
			double LcGrade;
			LcGrade = ((LcGrade1+LcGrade2+LcGrade3)/3*0.4+LcGrade4*0.1+LcGrade5*0.5)*10;
			
			//Evaluate the grade
			if (LcGrade >= 90)
			{
				cout << "You've received an A, You are eligible for financial aid!" << endl;
				exit(0);
			}
			else if (LcGrade >= 80)
			{
				cout << "You've received a B, You are eligible for financial aid!" << endl;
				exit(0);
			}
			else if (LcGrade >= 70)
			{
				cout << "You've received a C, You are eligible for partial financial aid." << endl;
				exit(0);
			}
			else if (LcGrade >= 60)
			{
				cout << "You've received a D, you are eligible for partial financial aid." << endl;
				exit(0);
			}
			else if (LcGrade < 60)
			{
				cout << "You've received an F, you failed the class and you are\n";
				cout << "not eligible for financial aid." << endl;
				exit(0);
			}
		break;
		
		//Start of Lab Class
		case 'C': 
		case 'c': cout << "You've chosen Lab Class, let's begin." << endl;
			cout << "Enter the grade for your first test: ";
			double LaGrade1;
			cin >> LaGrade1;
			if (LaGrade1 < 0 || LaGrade1 > 10)
			{
				cout << "Error: You've entered an invalid number." << endl;
				exit(0);
			}
			else 
			{
				cout << "I've saved this grade!" << endl;
			}
			
			cout << "Enter the grade for your second test: ";
			double LaGrade2;
			cin >> LaGrade2;
			if (LaGrade2 < 0 || LaGrade2 > 10)
			{
				cout << "Error: You've entered an invalid number." << endl;
				exit(0);
			}
			else 
			{
				cout << "I've saved this grade!" << endl;
			}
			
			cout << "Enter the grade for your project: ";
			double LaGrade3;
			cin >> LaGrade3;
			if (LaGrade3 < 0 || LaGrade3 > 10)
			{
				cout << "Error: You've entered an invalid number." << endl;
				exit(0);
			}
			else 
			{
				cout << "I've saved this grade!" << endl;
			}
			
			cout << "Enter the grade for your final exam: ";
			double LaGrade4;
			cin >> LaGrade4;
			if (LaGrade4 < 0 || LaGrade4 > 10)
			{
				cout << "Error: You've entered an invalid number." << endl;
				exit(0);
			}
			else 
			{
				cout << "I've saved this grade!" << endl;
			}
			//Evaluate the grade
			double LaGrade;
			LaGrade = ((LaGrade1+LaGrade2)/2*0.3+LaGrade3*0.3+LaGrade4*0.4)*10;
			if (LaGrade >= 90)
			{
				cout << "You've received an A, You are eligible for financial aid!" << endl;
				exit(0);
			}
			else if (LaGrade >= 80)
			{
				cout << "You've received a B, You are eligible for financial aid!" << endl;
				exit(0);
			}
			else if (LaGrade >= 70)
			{
				cout << "You've received a C, You are eligible for partial financial aid." << endl;
				exit(0);
			}
			else if (LaGrade >= 60)
			{
				cout << "You've received a D, you are eligible for partial financial aid." << endl;
				exit(0);
			}
			else if (LaGrade < 60)
			{
				cout << "You've received an F, you failed the class and you are\n";
				cout << "not eligible for financial aid." << endl;
				exit(0);
			}
		break;
		default: cout << "Error: You've selected an invalid option. Please restart the\n";
				 cout << "program and select a valid option (A,B,C)." << endl;
		break;
	
	}
    
    return 0;
	
}