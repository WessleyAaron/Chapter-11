//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by Aaron Wessley on 4-27-18

#include <iostream>
#include <string>
using namespace std;

int pointArray[] = { 0, 300, 350, 400, 450, 999 };
string grade[5] = { "F", "D", "C", "B", "A" };

int main()
{
	string userStringChoice = "y";

	do
	{
		//declare variables
		int sub = 0;    //keeps track of subscripts
		int points = 0;


		//declare arrays and fill with data

		cout << "Points: ";
		cin >> points;

		for (int x = 0; x < 5; x++)
		{
			if (points < pointArray[x + 1] && points > pointArray[x])
			{
				cout << "Grade: " << grade[x] << endl;
			}
		}

		//get total points
		cout << "Would you like to continue? ";
		cin >> userStringChoice;
	} while (userStringChoice == "y");

	//system("pause");
	return 0;
}	//end of main function