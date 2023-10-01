#include <iostream>
#include <algorithm>
#include <array>
#include <cstring>
using namespace std;

int main()
{
// Friends Array
  string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
  int n = sizeof(friends) / sizeof(friends[0]);

  string search;
  cout << "search for: ";
  cin >> search;
  for (int i = 0; i < n; i++)
  {
    if (strcmp(search.c_str() , friends[i].c_str()) == 0)
      cout << "Found " << friends[i] << " in idex number " << i << endl; 
  }

/*
  not: 
    that we need to use friends[i].c_str() to convert the string object to a C-style string, which is required by the strcmp function.
*/
}