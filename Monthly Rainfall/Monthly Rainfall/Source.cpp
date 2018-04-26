//Aaron Wessley
//4-26-18
//Monthly Rainfall

#include <iostream>

using namespace std;

void displayMonthly(double rain[], int numElements);
void displayTotal(double rainAmt[], int elements);

int main()
{
	double rainfall[12] = { 0.0 };
	int choice = 0;

	for (int x = 0; x < 12; x += 1)
	{
		cout << "Enter rainfall for month " << x + 1 << ": ";
		cin >> rainfall[x];
	}

	do
	{
		cout << endl;
		cout << "1 Display monthly amounts" << endl;
		cout << "2 Display total amount" << endl;
		cout << "3 End program" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 1)
			displayMonthly(rainfall, 12);
		else
		if (choice == 2)
			displayTotal(rainfall, 12);
	}

	while (choice == 1 || choice == 2);

	system("pause");
	return 0;
}

void displayMonthly(double rain[], int numElements)
{
	cout << "Monthly rainfall amounts:" << endl;
	for (int x = 0; x < numElements; x += 1)
		cout << rain[x] << endl;
}

void displayTotal(double rainAmt[], int elements)
{
	double total = 0.0;
	for (int x = 0; x < elements; x += 1)
		total = total + rainAmt[x];

	cout << "Total tainfall: " << total << endl;
}