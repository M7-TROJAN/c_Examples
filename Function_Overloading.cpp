/*
  Function
  - Function Overloading
  --- Number And/Or Type Of Params Is Different
*/

#include <iostream>
using namespace std;

void print(int a, int b)
{
  cout << "Number One Is: " << a << "\n";
  cout << "Number Two Is: " << b << "\n";
}

void print(int a, int b, int c)
{
  cout << "Number One Is: " << a << "\n";
  cout << "Number Two Is: " << b << "\n";
  cout << "Number Three Is: " << c << "\n";
}

void print(string a, string b)
{
  cout << "Text One Is: " << a << "\n";
  cout << "Text Two Is: " << b << "\n";
}

int main()
{
  print(10, 20);
  print(100, 200, 300);
  print("Mahmoud", "Mattar");
  return 0;
}