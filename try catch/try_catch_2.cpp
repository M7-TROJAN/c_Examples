#include <iostream>
#include <string>
using namespace std;

float division(float num1, float num2)
{
    if (num2 == 0)
    {
        // throw "ZeroDivisionError: You Cannot divide by zero";
        throw 404;
    }
    return num1 / num2;
}

int main()
{
    float num1, num2;
    cout << "Enter Number1: ";
    cin >> num1;
    cout << "Enter Number2: ";
    cin >> num2;

    try
    {
        cout << division(num1, num2) << endl;
    }
    catch (int ExceptionCode)
    {
        if (ExceptionCode == 404)
        {
            cout << "ZeroDivisionError: You Cannot divide by zero" << endl;
        }
        else
        {
            cout << "Exception: " << ExceptionCode << endl;
        }
    }
    catch (...)
    {
        cout << "Unexpected Exception!" << endl;
    }

    return 0;
}

/*
In the catch block for int ExceptionCode, it checks if the exception code is 404 and prints the appropriate error message for the division by zero case.
If the exception code is not 404, it prints a generic "Exception" message.

The catch (...) block handles any other unexpected exceptions and prints the "Unexpected Exception!" message.
*/