#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // Check if the element 5 is present in the array
    if (std::find(arr, arr + arrSize, 5) != arr + arrSize)
        std::cout << "Element found in the array\n";
    else
        std::cout << "Element not found in the array\n";

    /*
    arr - points to the address of the first element in the array.
    arr + arrSize - points to the address immediately after the last element in the array.
    */

    // ................................................................................

    std::vector<int> vec = {10, 20, 30, 40, 50, 60};

    // Check if the element 50 is present in the vector
    if (std::find(vec.begin(), vec.end(), 50) != vec.end())
        std::cout << "Element found in the vector\n";
    else
        std::cout << "Element not found in the vector\n";

    /*
    vec.begin() - points to the beginning of the vector.
    vec.end() - points to the address immediately after the last element in the vector.
    */

    // ................................................................................

    const int matrix_rows = 3, matrix_cols = 3;
    int matrix[matrix_rows][matrix_cols] = {
        {1, 2, 3},
        {4, 6, 9},
        {0, 7, 10}
    };

    // Check if the element 7 is present in the matrix
    if (std::find(&matrix[0][0], &matrix[matrix_rows - 1][matrix_cols - 1] + 1, 7) != &matrix[matrix_rows - 1][matrix_cols - 1] + 1)
        std::cout << "Element found in the matrix\n";
    else
        std::cout << "Element not found in the matrix\n";

    /*
    &matrix[0][0] - is the address of the first element in the matrix, representing the beginning of the range.
    &matrix[matrix_rows - 1][matrix_cols - 1] + 1 - is the address of the last element in the matrix plus one, representing the end of the range.
    */

    // ................................................................................

    // Find the address of the element 7 in the matrix
    int* target = std::find(&matrix[0][0], &matrix[3 - 1][3 - 1] + 1, 7);

    std::cout << target << std::endl;     // Print the address of the element
    std::cout << *target << std::endl;    // Print the value of the element

    return 0;
}
