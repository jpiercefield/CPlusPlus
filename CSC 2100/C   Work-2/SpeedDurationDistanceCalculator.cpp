#include <iostream>
using namespace std;

int main()
{
	float duration, distance, speed;
	char option;
	cout << "Speed/Duration/Distance Calculator" << endl;
	cout << "Choose a variable to calculate: a(Speed), b(Duration), c(Distance)" << endl;
	cin >> option;
	
    if(option == 'a')
	{
		cout << "Enter the distance(miles): ";
		cin >> distance;
		cout << "Enter the duration(hour): ";
		cin >> duration;
        if(distance >=0 && speed > 0)
        {
            speed = distance/duration;
            cout << "The speed is " << speed << " MPH." << endl;
        }
		else
        {
            cout << "You entered a 0 or a negative number" << endl;
        }
		
	}
    
    else
        if(option == 'b')
        {
            cout << "Enter the distance(miles): ";
            cin >> distance;
            cout << "Enter the speed(mph): ";
            cin >> speed;
            //in case you have condition that has the form of cond1 AND cond2 use the &&
            if(distance >=0 && speed > 0)
            {
                duration = distance/speed;
                cout << "The duration is " << duration << " hours." << endl;
            }
            else
            {
                cout << "You entered a 0 or a negative number" << endl;
            }
        }
    
    else
        if(option == 'c')
        {
            cout << "Enter the duration(hours): ";
            cin >> duration;
            cout << "Enter the speed(mph): ";
            cin >> speed;
            if(duration >=0 && speed >= 0)
            {
                distance = speed*duration;
                cout << "The distance is " << distance << " miles." << endl;
            }
            else
            {
                cout << "You entered a 0 or a negtative number" << endl;
            }
        }
    else
    {
        cout << "You entered a wrong option" << endl;
    }
    
}

//Condtions else, if else, if else if.