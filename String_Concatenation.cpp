/*
  String
  - Concatenating Strings
  --- Normal Way
  --- strcat => Include string.h
  --- With +
  --- append
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char fname[] = "Mahmoud ";
  char lname[] = "Mattar";

  cout << fname << lname << "\n";
  cout << strcat(fname, lname) << "\n";

  string firstName = "Osama ";
  string lastName = "Elzero";

  cout << firstName + lastName << "\n";
  cout << firstName.append(lastName) << "\n";

  return 0;
}