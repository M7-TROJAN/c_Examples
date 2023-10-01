/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Logical Operators
  "For Logic Between Values"

  --- && And
  --- || Or
  --- ! Not
*/

#include <iostream>
using namespace std;

int main()
{
  // int age = 20;
  // int points = 800;
  // cout << (age >= 18 && points >= 500) << endl; // 1 => True

  // int age = 16;
  // int points = 800;
  // cout << (age >= 18 && points >= 500) << endl; // 0 => False

  // int age = 16;
  // int points = 800;
  // cout << (age >= 18 || points >= 500) << endl; // 1 => True

  // int age = 16;
  // int points = 450;
  // cout << (age >= 18 || points >= 500) << endl;                    // 0 => False
  // cout << (100 == 10 || 50 == 10 || 20 == 10 || 10 == 10) << endl; // 1 => True

  cout << (10 == 10) << endl;   // 1 => True
  cout << !(10 == 10) << endl;  // 0 => False
  cout << !(100 == 10) << endl; // 1 => True

  return 0;
}

/*

? :مهم عند استخدام اكثر من لوجيكال اوبيراتور  

    NOT أولًا  : لازم تنفذ كل الـ 
    AND ثانيًا : لازم تنفذ كل الـ 
    OR ثالثًا : يتبقى أن تنفذ ال   

*/