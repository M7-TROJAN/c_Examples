#include <iostream>

using namespace std;

int main()
{
    long long size;

    // Read the number of test cases
    cin >> size;

    // Iterate through each test case
    while (size--)
    {
        long long num1, num2;
        long long maxx, minn;

        // Read the range values
        cin >> num1 >> num2;

        // Find the maximum and minimum values in the range
        maxx = max(num1, num2);
        minn = min(num1, num2);

        // Subtract one from the minimum value
        minn--;

        // Calculate the sum up to the minimum value using the formula (n * (n + 1)) / 2
        long long result1 = minn * (minn + 1) / 2;

        // Calculate the sum up to the maximum value using the formula (n * (n + 1)) / 2
        long long result2 = maxx * (maxx + 1) / 2;

        // Calculate the sum of the range by subtracting the sum up to the minimum value from the sum up to the maximum value
        cout << result2 - result1 << endl;
    }

    return 0;
}
