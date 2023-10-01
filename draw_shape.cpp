#include <iostream>

int main() {
    int n = 4; // Number of rows for the top half (excluding the center line)

    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
    std::cout <<"   *"; 
    return 0;
}
