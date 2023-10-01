/*
sum = (n * (n + 1) * (2n + 1)) / 6
*/

#include <iostream>

int main() {
    int n = 5; // Number of terms
    int sum = (n * (n + 1) * (2 * n + 1)) / 6;

    std::cout << "The sum of the terms is: " << sum << std::endl; // 55

    return 0;
}

