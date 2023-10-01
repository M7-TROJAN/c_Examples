
#include <iostream>
using namespace std;
int main()
{
// make a dynamic array
    int size;
    cout << "Enter Size: ";
    cin >> size;

    // allocate memory using new statement
    int* myArray = new int[size];

    // get the elements value from user
    for (int i = 0; i < size; i++)
    {
        cout << "myArray[" << i << "]: ";
        cin >> myArray[i];
    }
    cout << "\n================================\n";

    // print the element
    for (int i = 0; i < size; i++)
    {
        cout << "myArray[" << i << "]: " << myArray[i] << endl;
    }
    
    // deallocate memory using delete statement
    delete[] myArray;

    // make the array doesn't pointing any thing
    myArray = NULL;

/*
    note:
        every time u will use new statement to allocate a memory u should use delete statement to deallocate the memory.
        and then make your buffer does not pointing to any thing like that =>  bufferName = Null;
*/
}