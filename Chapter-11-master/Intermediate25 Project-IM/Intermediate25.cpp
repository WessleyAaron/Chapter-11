//Intermediate25.cpp - displays the number of days
//corresponding to the month number entered by the user
//Created/revised by Aaron Wessley on 4-27-18

#include <iostream>
using namespace std;

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int months[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	int monthNumber;

	//get month number
	cout << "Enter the month number (-1 to stop): ";
	cin >> monthNumber;
	while (monthNumber != -1)
	{
		//display number of days
		if (monthNumber > 0 && monthNumber < 13)
			cout << "Number of days: " << days[monthNumber - 1] << endl << endl;
		else
			cout << "Invalid month number" << endl << endl;
		//end if
		cout << "Enter the month number (-1 to stop): ";
		cin >> monthNumber;
	}  //end while

	system("pause");
	return 0;
}	//end of main function