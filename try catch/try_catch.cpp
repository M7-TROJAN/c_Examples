#include <iostream>
#include <string>
using namespace std;
float division (float num1 , float num2)
{
    if(num2 == 0)
        // throw "ZeroDivisionError: You Cannot division by zero";
        throw 404;
    return num1 / num2;
}
int main()
{
    int num1 , num2;
    cout << "Enter Number1: ";
    cin >> num1;
    cout << "Enter Number2: ";
    cin >> num2;

    try
    {
        cout << division(num1, num2);
    }
    catch(const char* txtException)
    {
        cout << txtException << endl;
    }
    catch(int ExceptionCode)
    {
        cout << "Exception: " << ExceptionCode << endl;
    }
    catch(...)
    {
        cout << "Unexpected Exception!" << endl;
    }
    
}