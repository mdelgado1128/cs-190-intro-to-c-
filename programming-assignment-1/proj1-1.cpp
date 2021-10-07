// * Problem 1: Add and Multiply Two Random Numbers (40 points)

// * Using the Program 3-32 (page 135) as an example, create a program (proj1_1.cpp) that generates two random numbers in the range of 1 to 100, stores them into two variables,  and then displays these numbers along with their computed sum and product. The sum and the product should also be stored as variables. Arithmetic expressions should be displayed as strings followed by their corresponding computed values already stored into variables.

// * The output should look like this:

// * First number: 12
// * Second number: 23
// * 12 + 23 = 35
// * 12 * 23 = 276

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
  unsigned seed; // Random generator seed

  seed = time(0);
  srand(seed);

  int minNum = 1,
      maxNum = 100,
      firstNum,
      secondNum,
      sum,
      product;

  firstNum = (rand() % (maxNum - minNum)) + minNum;
  secondNum = (rand() % (maxNum - minNum)) + minNum;
  sum = firstNum + secondNum;
  product = firstNum * secondNum;

  cout << "The first number is : " << firstNum << endl;
  cout << "The second number is : " << secondNum << endl;

  cout << firstNum << " + " << secondNum << " = " << sum << endl;
  cout << firstNum << " * " << secondNum << " = " << product << endl;
}
