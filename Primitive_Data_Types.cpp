/*
  Primitive Data Types  انواع البيانات البدائية
  - Modifiers
  --- Modify The Length Of Data => See Limits

  ----- ٍSigned [int, char]
  -------- Store Positive, Negative Integers And 0
  -------- int Is Signed By Default

  ----- Unsigned [int, char]
  -------- Store Positive Only

  ----- Short [int]
  -------- Can Be short Instead of short int

  ----- Long [int, double]
  -------- Store Maximum Value
  -------- Can Be long Instead of long int

  - Type Alias اكتب الاسم المستعار

  --- using identifier = type;   // like this --> using big_num = long long int;
  --- typedef unsigned long UL;  // like this --> typedef long long int big_num;

*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int age = 300;
  cout << sizeof(age) << "\n"; // 4 Bytes

  short int new_age = 300;
  cout << sizeof(new_age) << "\n"; // 2 Bytes

  short last_age = 300;
  cout << sizeof(last_age) << "\n"; // 2 Bytes

  cout << sizeof(short int) << "\n";
  cout << sizeof(short) << "\n";
  cout << sizeof(long int) << "\n";
  cout << sizeof(long) << "\n";
  cout << sizeof(long long int) << "\n";
  cout << sizeof(long long) << "\n";

  int num_one = 100;
  cout << num_one << "\n";

  signed int num_two = 0;
  cout << num_two << "\n";

  unsigned int num_three = 100;
  cout << num_three << "\n";

  // unsigned int num_four = -10; // Problem
  // cout << num_four << "\n";

  // using bignum = long long int;

  typedef long long int bignum;

  bignum my_number = 100010001000;
  cout << my_number << "\n";

  return 0;
}

/*
int:
  short         2 byte        
  int           4 byte
  long          4 byte
  long long     8 byte
  unsigned int , short , long , long long
===============================================================
double:
  float          4 byte
  double         8 byte
  long double    16 byte
=================================================================
char:
  char           1 byte
  unsigned char  1 byte
*/