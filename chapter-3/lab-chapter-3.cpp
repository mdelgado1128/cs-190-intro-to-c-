#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  unsigned seed;

  seed = time(0);
  srand(seed);

  cout << setw(2) << rand() % 2;
  cout << setw(12) << rand() % 2;
  cout << setw(12) << rand() % 2 << endl;
}
