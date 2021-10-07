//* Problem 2: Compute Restaurant Bill (40 points)

//* Three friends are eating out and sharing the bill equally. Create a program (proj1_2.cpp) that asks the first name for each of the three friends and the total amount of the bill. Using the total amount, your program should add 15% for the tip and store it into a variable. After adding the tip to the total amount, you should compute and store in a variable the amount each friend owes by dividing the resulting total by three. Finally, your program should display the tip amount and total along with the amount for each friend in a table like format. You can use the example on page 115 as an example for output in a table like format.

//* Following is an example of a sample run with resulting amounts rounded using setprecision() function:

//* Enter first friend name: John
//* Enter second friend name: Sam
//* Enter third friend name: Kim
//* Enter amount of bill: $67.89

//* Tip amount:                 $10.18
//* Total bill:                       $78.07

//* John:               $26.02
//* Sam:                $26.02
//* Kim:                $26.02

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  string firstName,
      secondName,
      thirdName;

  double billAmount,
      totalBill,
      tipAmount,
      splitAmount;

  cout
      << "Name of the first person:  ";
  getline(cin, firstName);

  cout << "Name of the second person: ";
  getline(cin, secondName);

  cout << "Name of the third person: ";
  getline(cin, thirdName);

  cout << "Enter amount of bill: $";
  cin >> billAmount;

  cout << "Enter amount of tip: $";
  cin >> tipAmount;

  totalBill = billAmount + tipAmount;

  cout << "Total bill: " << setprecision(4) << "$" << totalBill << endl;

  splitAmount = totalBill / 3;

  cout << firstName << ": " << setw(12) << setprecision(4) << "$" << splitAmount << endl;
  cout << secondName << ": " << setw(12) << setprecision(4) << "$" << splitAmount << endl;
  cout << thirdName << ": " << setw(12) << setprecision(4) << "$" << splitAmount << endl;
}