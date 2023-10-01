#include <iostream>
using namespace std;
int main(void)
{
    // Declare and initialize variables for number of rows and columns
    int rows = 0, cols = 0;
    cout << "Enter Rows, Cols: ";
    cin >> rows >> cols;

    // Allocate memory for rows
    int** table = new int*[rows];

    // Allocate memory for columns of each row
    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
    }

    // Get table elements from the user
    for(int i = 0 ; i < rows ; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "table[" << i << "][" << j << "]: ";
            cin >> table[i][j];
        }
    }
    cout << "============================\n";

    // Print the elements of the table
    cout << "The Elements Of Table Is:\n";
    for (int i = 0; i < rows; i++)
    {
        cout << "table[" << i << "]:\n";
        for (int j = 0; j < cols; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory for columns of each row
    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }
    
    // Deallocate memory for rows
    delete[] table;

    // Set the table pointer to NULL to prevent accessing memory that has already been deallocated
    table = NULL;
}
