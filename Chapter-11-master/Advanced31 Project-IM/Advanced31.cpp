//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by Aaron Wessley on 4-27-18

#include <iostream>
using namespace std;

int minimumPoints[5] = { 0, 300, 350, 400, 450 };
int maximumPoints[5] = { 299, 349, 399, 449, 500 };
char grade[5] = { "F", "D", "C", "B", "A" };

int main()
{
	//declare variables
	int sub    = 0;    //keeps track of subscripts
	int points = 0;  

	
	//declare arrays and fill with data
	
	cout << "Points: ";
	cin >> points;

	for (int x = 0; x < 1; x++)
	{
		if (points < maximumPoints[x] && points > minimumPoints[x])
		{
			cout << "Grade: " << grade[x] << endl;
		}
	}

	//get total points
	cout << "Enter points earned (negative number to stop program): ";
	cin >> points;
	
	

	//system("pause");
	return 0;
}	//end of main function