// SimpleVariables.cpp
// A simple example of a program
#include <iostream>

using namespace std;

int main()
{
	int apples, oranges;							// Define two integer variables
	int fruit;										// ...then another one

	apples = 5; oranges = 6;						// Set initial values
	fruit = apples + oranges;						// Get the total fruit

	cout << endl;									// Start output on a new line
	cout << "Oranges are not the only fruit... " << endl
		 << "- and we have " << fruit << " fruits in all.";
	cout << endl;									// Output a new line character

	system("pause");

	return 0;										// Exit the program
}