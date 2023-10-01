/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Arithmetic Operators
  "For Mathematical Operations"

  --- + => Addition
  --- - => Subtraction
  --- * => Multiplication
  --- / => Division
  --- % => Modulo => Remainder After Division

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator
*/

#include <iostream>
using namespace std;

int main()
{
  cout << 10 + 10 << "\n";
  cout << sizeof(10 + 10) << "\n";
  cout << 10.5f + 9.5f << "\n";
  cout << sizeof(10.5f + 9.5f) << "\n";
  cout << int(10.5 + 9.5) << "\n";
  cout << "====================\n";
  cout << sizeof(10.5 + 9.5) << "\n";      // 8
  cout << sizeof(int(10.5 + 9.5)) << "\n"; // 4

  cout << 100 - 50 << "\n";
  cout << 100 - -50 << "\n";

  cout << 10 * 5 << "\n";

  cout << 20 / 5 << "\n";
  cout << 12 / 5 << "\n";
  cout << 12.f / 5 << "\n";

  cout << 20 % 5 << "\n"; // 0
  cout << 21 % 5 << "\n"; // 1
  cout << 24 % 5 << "\n"; // 4
  // cout << 24.5 % 5 << "\n"; // Problem

  return 0;
}