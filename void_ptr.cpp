#include <iostream>
using namespace std;

int main() {
    int number = 10;
    void* ptr = &number;  // Assign the address of the integer variable to the void pointer

    // To use the value pointed by the void pointer, you need to explicitly cast it to the appropriate type.
    int* intPtr = static_cast<int*>(ptr);
    cout << "Value of the integer pointed by the void pointer: " << *intPtr << endl;

    return 0;
}
