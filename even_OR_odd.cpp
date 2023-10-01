#include <iostream>

int main()
{
    int x = 0;

    while (x != -1)
    {
        std::cout << "Enter a Number: ";
        std::cin >> x;

        if ((x & 1) == 0)
            std::cout << x << " Is Even Number\n";
        else
            std::cout << x << " Is Odd Number\n";

        if (x % 2 == 0)
            std::cout << x << " Is Even Number\n";
        else
            std::cout << x << " Is Odd Number\n";
    }
}

/*
Yes, if (x & 1 == 0) and if (x % 2 == 0) are functionally equivalent, and both expressions are used to check if a number is even.
The first expression uses bitwise AND with 1 to check the least significant bit,
and the second expression uses the modulo operator % with 2 to check divisibility by 2.

In terms of readability and understanding, if (x % 2 == 0) is generally preferred
because it directly conveys the intent of checking if a number is even.
It's more immediately obvious to someone reading the code what the condition is checking.

In terms of performance, if (x & 1 == 0) can be slightly more efficient in some cases
because bitwise operations are generally faster than modulo operations.
However, modern compilers are often capable of optimizing simple arithmetic expressions, so the performance difference may be negligible.

Ultimately, the choice between the two expressions depends on your coding style and the clarity you want to maintain in your code.
Both approaches are commonly used, so choose the one that you find more readable and aligned with your coding practices.

*/