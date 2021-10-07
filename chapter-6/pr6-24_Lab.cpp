// This program uses 2 functions: a void function with a reference
// variable as a parameter, and a value-returning function.
#include <iostream>
#include <cstdlib>

using namespace std;

// Function prototypes
void getNum(int &);
void getNum(double &);
int doubleNum(int);
double doubleNum(double);

int main()
{
	int value;
	double value2;

	// Call getNum to get a number and store it in value
	getNum(value);
	getNum(value2);

	// Call doubleNum, passing it the number stored in value
	// Assign value the number returned by the function
	value = doubleNum(value);

	value2 = doubleNum(value2);

	// Display the resulting number
	cout << "That value doubled is " << value << endl;

	cout << "That value doubled is " << value2 << endl;
	return 0;
}

/**********************************************************
 *                         getNum                         *
 * This function stores user input data in main's value   *
 * variable by using a reference variable as a parameter. *				
 *********************************************************/
void getNum(int &userNum)
{
	cout << "Enter a number: ";
	cin >> userNum;
	if (userNum <= 0)
	{
		cout << "You must select a positive number, negative values are not allowed." << endl;
		exit(0);
	}
}

void getNum(double &userNum)
{
	cout << "Enter a number: ";
	cin >> userNum;
	if (userNum <= 0)
	{
		cout << "You must select a positive number, negative values are not allowed." << endl;
		exit(0);
	}
}

/***********************************************************
 *                        doubleNum                        *
 * This function doubles the number it receives as an      *
 * argument and returns it to main thru a return statement.*
 ***********************************************************/
int doubleNum(int number)
{
	return number * 2;
}

double doubleNum(double number)
{
	return number * 2;
}
