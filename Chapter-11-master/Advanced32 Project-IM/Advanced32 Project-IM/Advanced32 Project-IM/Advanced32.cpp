//Advanced32.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by Aaron Wessley on 4-30-18

#include <iostream>
#include <string>
using namespace std;

string grades[5] = { "F", "D", "C", "B", "A" };
int percentage[5] = { 0, 60, 70, 80, 90 };
int minimumPoints[5] = { 0 };

int main()
{
	//declare variables
	int sub    = 0;    //keeps track of subscripts
	int points = 0;  
	int pointsPossible = 0;

	//get total possible points
	cout << "Enter the number of possible points: ";
	cin >> pointsPossible;

	//declare arrays and fill with data
	
	
	//get total points
	cout << "Enter points earned (negative number to stop program): ";
	cin >> points;
	
	while (points >= 0)
	{
		//search for points in minPoints array
		sub = 0;
		while (sub < 5 && minimumPoints[sub] <= points)
			sub += 1;
		//end while

		for (int x = 0; x < 5; x++)
		{
			if (minimumPoints[x] != 0)
			{
				minimumPoints[x] = (percentage[x] / 100) * pointsPossible;
				cout << minimumPoints[x] << endl;

			}
		}
		//display grade from grade array
		cout << "Grade: " << grades[sub - 1] << endl << endl;
		
		cout << "Enter points earned (negative number to stop program): ";
		cin >> points;
	} //end while

	//system("pause");
	return 0;
}	//end of main function