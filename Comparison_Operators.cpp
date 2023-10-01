/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Comparison Operators
  "For Comparing Values"

  --- == Equal
  --- != Not Equal
  --- > Greater Than
  --- < Less Than
  --- >= Greater Than Or Equal
  --- <= Less Than Or Equal
*/

#include <iostream>
using namespace std;

int main()
{
  cout << (10 == 10) << "\n";    // 1 => True
  cout << (1000 == 100) << "\n"; // 0 => False

  cout << (10 != 10) << "\n";    // 0 => False
  cout << (1000 != 100) << "\n"; // 1 => True

  cout << (40 > 18) << "\n"; // 1 => True
  cout << (18 > 18) << "\n"; // 0 => False

  cout << (16 < 18) << "\n"; // 1 => True

  cout << (40 >= 18) << "\n"; // 1 => True
  cout << (18 >= 18) << "\n"; // 1 => True
  return 0;
}