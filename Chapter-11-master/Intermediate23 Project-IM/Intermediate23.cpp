//Intermediate23.cpp - displays the contents of two parallel arrays
//Created/revised by Aaron Wessley on 4-27-18

#include <iostream>
using namespace std;

int main()
{
	int points[5] = {62, 75, 100, 83, 85};
	char grades[5]  = {'D', 'C', 'A', 'B', 'B'};

	for (int x = 0; x < 5; x++)
	{
		cout << points[x] << "->" << grades[x] << endl;
	}

	system("pause");
	return 0;
}	//end of main function