//Advanced32.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by Aaron Wessley on 4-30-18

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string grades[5] = { "F", "D", "C", "B", "A" };
int percentage[4] = { 60, 70, 80, 90 };

int main()
{
	//declare variables
	double minimumPoints[5] = { 0.0 };   //keeps track of subscripts
	int pointsPossibleCin = 0;
	double userDoubleCin = 0;

	string userStringChoice = "y";

	//get total possible points
	cout << "Enter the number of possible points: ";
	cin >> pointsPossibleCin;

	//declare arrays and fill with data
	for (int x = 0; x < 5; x++)
	{
		if (percentage[x] != 0)
		{
			minimumPoints[x + 1] = (pointsPossibleCin * percentage[x]) / 100;
		}
	}
	
	do
	{
		//get total points
		cout << "Enter points earned (negative number to stop program): ";
		cin >> userDoubleCin;

		for (int x = 0; x < 5; x++)
		{
			if (userDoubleCin < minimumPoints[x + 1] && userDoubleCin > minimumPoints[x - 1])
			{
				if (userDoubleCin >= minimumPoints[4])
				{
					cout << "Grade: A" << endl;
				}
				else
				{
					cout << "Grade: " << grades[x] << endl;
				}
				break;
			}
		}

		cout << "Would you like to continue? y|n: ";
		cin >> userStringChoice;
	} while (userStringChoice == "y");
	
	//while (points >= 0)
	//{
	//	//search for points in minPoints array
	//	sub = 0;
	//	while (sub < 5 && minimumPoints[sub] <= points)
	//		sub += 1;
	//	//end while

	//	for (int x = 0; x < 5; x++)
	//	{
	//		if (minimumPoints[x] != 0)
	//		{
	//			minimumPoints[x] = (percentage[x] / 100) * pointsPossible;
	//			cout << minimumPoints[x] << endl;

	//		}
	//	}
	//	//display grade from grade array
	//	cout << "Grade: " << grades[sub - 1] << endl << endl;
	//	
	//	cout << "Enter points earned (negative number to stop program): ";
	//	cin >> points;
	//} //end while

	//system("pause");
	return 0;
}	//end of main function