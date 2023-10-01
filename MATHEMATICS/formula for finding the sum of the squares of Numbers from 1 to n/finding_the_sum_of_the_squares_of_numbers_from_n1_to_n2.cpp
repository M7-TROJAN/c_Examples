/*

sum = (n2 * (n2 + 1) * (2 * n2 + 1) - (n1 - 1) * n1 * (2 * n1 - 1)) / 6

*/

#include <iostream>

int main() {
    int n1, n2; // Starting and ending numbers
    int sum;

    // Get input from the user
    std::cout << "Enter the starting number (n1): ";
    std::cin >> n1;
    std::cout << "Enter the ending number (n2): ";
    std::cin >> n2;

    // Calculate the sum of squares
    sum = (n2 * (n2 + 1) * (2 * n2 + 1) - (n1 - 1) * n1 * (2 * n1 - 1)) / 6;

    // Output the result
    std::cout << "The sum of the squares from " << n1 << " to " << n2 << " is: " << sum << std::endl;

    return 0;
}


/*

Enter the starting number (n1): 3
Enter the ending number (n2): 7
The sum of the squares from 3 to 7 is: 135

*/