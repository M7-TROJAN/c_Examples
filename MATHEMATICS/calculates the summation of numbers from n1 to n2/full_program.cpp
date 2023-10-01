#include <iostream>

// Function to calculate the sum of a range from n1 to n2 (inclusive)
long long summationRange(long long n1, long long n2)
{
    // Calculate the sum using the arithmetic series formula
    long long sum = (n2 - n1 + 1) * (n1 + n2) / 2;
    return sum;
}

int main()
{
    // Read the number of test cases
    int numTestCases;
    std::cout << "Enter the number of test cases: ";
    std::cin >> numTestCases;

    // Process each test case
    while (numTestCases--)
    {
        // Read the range values
        long long startValue, endValue;
        std::cout << "Enter the start value and end value: ";
        std::cin >> startValue >> endValue;

        // Calculate and display the sum of the range
        if (startValue <= endValue)
        {
            long long rangeSum = summationRange(startValue, endValue);
            std::cout << "Sum of the range: " << rangeSum << "\n";
        }
        else
        {
            std::cout << "Invalid range: Start value should be less than or equal to end value.\n";
        }
    }

    return 0;
}
