int nthEven(int n)
{
    return (n * 2) - 2; // even numbers are every 2 number and we have to start from zero so we subtract 2

    // or
    return (n - 1) * 2;
}

/*
nthEven() function Explanation:

- This function calculates the nth even number.
- Even numbers occur every 2 numbers, so multiplying n by 2 gives us the number if we assume the first even number is 0.
- However, since we want to start from the first even number (0), we subtract 2 from the result.
- For example, if n is 3, the calculation is (3 * 2) - 2 = 6 - 2 = 4, which represents the 3rd even number.
*/


int nthOdd(int n)
{
    return (n * 2) - 1;
}

/*
nthOdd() function Explanation:
- This function follows a similar logic to the nthEven function.
- Since odd numbers occur every 2 numbers, multiplying n by 2 gives us the number if we assume the first odd number is 1.
- However, since we want to start from the first odd number (1) and not zero, we subtract 1 from the result.
- For example, if n is 4, the calculation is (4 * 2) - 1 = 8 - 1 = 7, which represents the 4th odd number.
*/