#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int number, var = 0;
	cout << "Enter a number to check prime: ";
	cin >> number;
	for (int a = 2; a <= sqrt(number); a++)
	{
		if (number % a == 0)
		{
			cout << "Not a prime number." << endl;
			var = 1;
			break;
		}
	}
	if (var == 0)
	{
		cout << "Prime number." << endl;
	}
	return 0;
}
