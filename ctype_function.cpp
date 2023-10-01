
/*
  Function
  - Built-In Functions
  --- cctype Functions
  ------ tolower()
  ------ toupper()
  ------ isupper()
  ------ islower()
  ------ isspace()

  - Create 2 Applications
  --- Swap Case App
  --- Remove Spaces App
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  cout << "A\n";                      // A
  cout << tolower('A') << "\n";       // 97 => ASCII Value
  cout << char(tolower('A')) << "\n"; // a
  cout << char(97) << "\n";           // a
  cout << "=====================\n";
  cout << "b\n";                      // b
  cout << toupper('b') << "\n";       // 66 => ASCII Value
  cout << char(toupper('b')) << "\n"; // B
  cout << char(66) << "\n";           // B
  cout << "=====================\n";

  string nameone = "ElZEro"; // eLzeRO eLzeRO
  int nameoneSize = size(nameone);

  for (int i = 0; i < nameoneSize; i++)
  {
    if (isupper(nameone[i]))
    {
      cout << char(tolower(nameone[i]));
    }
    else
    {
      cout << char(toupper(nameone[i]));
    }
    // cout << nameone[i] << "\n";
    // cout << int(nameone[i]) << "\n";
  }

  cout << "\n=====================\n";

  string nametwo = "E\nl  z  \n\te r\t\no";
  int nametwoSize = size(nametwo);

  for (int i = 0; i < nametwoSize; i++)
  {
    // if (nametwo[i] == ' ')
    // {
    //   continue;
    // }
    if (isspace(nametwo[i]))
    {
      continue;
    }
    cout << nametwo[i];
  }

  return 0;
}