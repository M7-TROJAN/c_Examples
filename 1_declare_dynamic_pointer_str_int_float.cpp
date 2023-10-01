#include <iostream>
using namespace std;
int main()
{
    // Declare pointers of different types
    int *ptrInt;       // Pointer to an integer
    float *ptrFloat;   // Pointer to a float
    string *ptrString; // Pointer to a string

    // Dynamically allocate memory for each pointer
    ptrInt = new int;       // Allocate memory for an integer
    ptrFloat = new float;   // Allocate memory for a float
    ptrString = new string; // Allocate memory for a string

    // Assign values to the allocated memory
    *ptrInt = 45;           // Assign value 45 to the integer memory
    *ptrFloat = 58.35f;     // Assign value 58.35 to the float memory
    *ptrString = "mahmoud"; // Assign the string "mahmoud" to the string memory

    // Print the values stored in the allocated memory using the pointers
    cout << *ptrInt << endl;    // Print the integer value
    cout << *ptrFloat << endl;  // Print the float value
    cout << *ptrString << endl; // Print the string value

    // Deallocate the dynamically allocated memory  (free the memory)
    delete ptrInt;    // Deallocate the integer memory
    delete ptrFloat;  // Deallocate the float memory
    delete ptrString; // Deallocate the string memory

    return 0;
}

/*
Note:
    in C++, you cannot use the free() function to deallocate memory that was allocated using the new operator.
    The free() function is used in C to deallocate memory allocated using malloc(), calloc(), or realloc().
    In C++, you should always use the delete operator to deallocate memory that was allocated using new.
    Similarly, you should use the delete[] operator to deallocate memory that was allocated using new[] for arrays.
    Using free() on memory allocated with new can lead to undefined behavior and potential memory leaks.
    It's important to follow the appropriate deallocation method based on how the memory was allocated.
*/