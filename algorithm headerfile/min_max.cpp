/*
  Function
  - Built-In Functions
  --- Algorithm Header
  ------ min
  ------ max
  ------ count

  - Create 3 Applications
  --- Find Minimum Number
  --- Find Maximum Number
  --- Count Number Occurance
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  cout << min(10, -20) << "\n";                       // -20
  cout << min(10, 20) << "\n";                        // 10
  cout << min('a', 'c') << "\n";                      // a
  cout << min('a', 'C') << "\n";                      // C
  cout << int('a') << "\n";                           // 97
  cout << int('C') << "\n";                           // 67
  cout << min({10, -20, 30, -100, 100, -50}) << "\n"; // -100
  cout << "=======================\n";
  cout << max(10, -20) << "\n";                       // 10
  cout << max(10, 20) << "\n";                        // 20
  cout << max('a', 'c') << "\n";                      // c
  cout << max('a', 'C') << "\n";                      // a
  cout << int('a') << "\n";                           // 97
  cout << int('C') << "\n";                           // 67
  cout << max({10, -20, 30, -100, 100, -50}) << "\n"; // 100
  cout << "=======================\n";



  int num[] = {10, -20, 30, -100, 100, -50}; // array of integers
  int n = sizeof(num) / sizeof(num[0]); // calculate the size of the array
  int minNum = num[0] , maxNum = num[0]; // initialize minNum and maxNum to the first element of the array

  for (int i = 0; i < n; i++) // iterate through the array
  {
    if (num[i] > maxNum) // if the current element is greater than the current maxNum
      maxNum = num[i]; // update maxNum to the current element
    if (num[i] < minNum) // if the current element is less than the current minNum
      minNum = num[i]; // update minNum to the current element
  }
  
  cout << "Minumum Number Is " << minNum << endl; // print the minimum number
  cout << "Maximum Number Is " << maxNum << endl; // print the maximum number


  cout << "====================================\n";


  // define an array of numbers
  int numsTwo[] = {10, 20, 10, 10, 13, 15, 100, 20, 10};
  // get the size of the array
  int numsTwoSize = size(numsTwo);
  // initialize a counter to zero
  int counter = 0;
  // choose a number to search for in the array
  int choosenNum = 10;

  // loop through the array
  for (int i = 0; i < numsTwoSize; i++)
  {
    // if the current number equals the chosen number, increment the counter
    if (numsTwo[i] == choosenNum)
      counter++;
  }

  // output the result to the console
  cout << choosenNum << " Is is repeated " << counter << " times." << endl;
  
}
