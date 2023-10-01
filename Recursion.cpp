/*
  Function
  - Function Recursion
  --- If You Want To Learn Recursion
  --- You Need To Learn Recursion
*/

#include <iostream>
using namespace std;

int add(int num)
{
    if (num == 0)
    {
        return 0;
    }
    cout << num << "\n";
    cout << "===============\n";
    return num + add(num - 1);
}

// 5 + (add(4))
// 5 + ( 4 + add(3) )
// 5 + ( 4 + ( 3 + add(2) ) )
// 5 + ( 4 + ( 3 + ( 2 + add(1) ) ) )
// 5 + ( 4 + ( 3 + ( 2 + ( 1 + add(0) ) ) ) )

int main()
{
    cout << add(5); 
    return 0;
}