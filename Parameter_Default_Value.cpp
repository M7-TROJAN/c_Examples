/*
  Function
  - Parameter Default Value
*/

#include <iostream>
using namespace std;

void details(string msg = "Welcome", string name = "Unknown")
{
  cout << msg << " " << name << "\n";
}

int main()
{
  details("Hello", "Ahmed"); // Hello Ahmed

  details("Hi" , "Ali");  // Hi Ali

  details("Hi");  // only first parameter passed so it will use it and use the Default second parameter and output will be ->  Hi Unknown

  details(); // no arguments are pass to the function call  so it will use the Default parameters and output will be ->  Welcome Unknown
  return 0;
}
