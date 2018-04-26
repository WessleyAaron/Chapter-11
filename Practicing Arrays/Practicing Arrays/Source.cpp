//Aaron Wessley
//4-26-18
//Practicing Arrays

#include <iostream>

using namespace std;

int main()
{
	int foo[] = { 16, 2, 77, 40, 12071 };
	int n, result = 0;

	for (n = 0; n < 5; n++)
	{
		result = result + foo[n];
	}

	cout << result << endl;

	system("pause");
	return 0;
}