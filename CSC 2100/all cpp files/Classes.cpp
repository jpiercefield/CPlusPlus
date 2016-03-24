#include<iostream>
#include<iomanip>
// for input/output formatting
using namespace std;
int main()

{
	double test1, test2, researchPaper, presentation, finalExam, project, quiz1, quiz2, quiz3;
	double	researchTotal,literatureTotal,labTotal;
	char course, R, L, A;

cout << "Class Grade Calculator Program \n \n";

	cout << "Choose which class you would like to find the score and grade of? Research - R, Literature - L, Lab - A \n";
		cin >> course;

	if (course == 'R') {
		cout << "What is the grade of test 1? (0 - 10) \n";
			cin >> test1;
				if  ((test1 >= 0) && (test1 <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}
		cout << "What is the grade of test 2? (0 - 10) \n";
			cin >> test2;
				if  ((test2 >= 0) && (test2 <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}
		cout << "What is the grade of the Research paper? (0 - 10) \n";
			cin >> researchPaper;
				if  ((researchPaper >= 0) && (researchPaper <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}
		cout << "What is the grade of the presentation? (0 - 10) \n";
			cin >> presentation;
				if  ((presentation >= 0) && (presentation <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}

				researchTotal = ((test1+test2)/2*0.3+researchPaper*0.5+presentation*0.2)*10;
                    cout << researchTotal << endl << endl;

            if ((researchTotal >= 80) && (researchTotal <= 100)) {
                R = 1;
            }
            else if ((researchTotal >=60) && (researchTotal < 80)) {
                R = 2;
            }
            else {
                R = 3;
            }

        switch (R) {
        case 1:
            cout << "You are eligible for a financial aid. \n";
            break;
        case 2:
            cout << "You are eligible for a partial financial aid. \n";
            break;
        case 3:
            cout << "You failed the class and you are not eligible for a financial aid. \n";
            break;
        }
    }



	else if (course == 'L') {
		cout << "What is the grade of quiz 1? (0 - 10) \n";
			cin >> quiz1;
				if  ((quiz1 >= 0) && (quiz1 <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}
		cout << "What is the grade of quiz 2? (0 - 10) \n";
			cin >> quiz2;
				if  ((quiz2 >= 0) && (quiz2 <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}
		cout << "What is the grade of quiz 3? (0 - 10) \n";
			cin >> quiz3;
				if  ((quiz3 >= 0) && (quiz3 <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}
		cout << "What is the grade of the test? (0 - 10) \n";
			cin >> test1;
				if  ((test1 >= 0) && (test1 <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}
        cout << "What is the grade of the final exam? (0 - 10) \n";
			cin >> finalExam;
				if  ((finalExam >= 0) && (finalExam <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}

            literatureTotal = ((quiz1 + quiz2 + quiz3) / 3 * 0.4 + test1 *0.1 + finalExam *0.5) * 10;
                cout << literatureTotal << endl << endl;

            if ((literatureTotal >= 80) && (literatureTotal <= 100)) {
                L = 1;
            }
            else if ((literatureTotal >=60) && (literatureTotal < 80)) {
                L = 2;
            }
            else {
                L = 3;
            }

        switch (L) {
        case 1:
            cout << "You are eligible for financial aid. \n";
            break;
        case 2:
            cout << "You are eligible for a partial financial aid. \n";
            break;
        case 3:
            cout << "You failed the class and you are not eligible for a financial aid. \n";
            break;
        }
    }

    else if (course == 'A') {
        cout << "What is the grade of the first test? (0 - 10) \n";
			cin >> test1;
				if  ((test1 >= 0) && (test1 <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}
		cout << "What is the grade of test 2? (0 - 10) \n";
			cin >> test2;
				if  ((test2 >= 0) && (test2 <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}
		cout << "What is the grade of the project? (0 - 10) \n";
			cin >> project;
				if  ((project >= 0) && (project <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;

				}
        cout << "What is the grade of the final exam? (0 - 10) \n";
			cin >> finalExam;
				if  ((finalExam >= 0) && (finalExam <= 10)) {
					cout << "\n";
				}
				else {
					cout << "Error: Not a valid input. \n";
					return 0;
				}

            labTotal = ((test1+test2)/2*0.3+project*0.3+finalExam*0.4)*10;
                cout << labTotal << endl << endl;

            if ((labTotal >= 80) && (labTotal <= 100)) {
                A = 1;
            }
            else if ((labTotal >=60) && (labTotal < 80)) {
                A = 2;
            }
            else {
                A = 3;
            }

        switch (A) {
        case 1:
            cout << "You are eligible for a financial aid. \n";
            break;
        case 2:
            cout << "You are eligible for a partial financial aid. \n";
            break;
        case 3:
            cout << "You failed the class and you are not eligible for a financial aid. \n";
            break;
        }

        }

        else {
            cout << "You have entered an invalid class.\n";

        }

}

