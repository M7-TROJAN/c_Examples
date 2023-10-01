/*
Syntax:
	reverse(start_index, index_next_to_last_index);

For example to reverse an array arr[] of size 'n' we need to write as follows:
reverse(arr, arr+n); 
if we observe it is reverse(arr+0, arr+n);
which means, the reverse function reverse the elements in an array from index-0 to index-(n-1)

Ex: Given an array arr of size 7 
reverse(arr, arr+5); 
The above reverse function reverses the elements in an array from index-0 to index-4
*/
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
// C++ program to reverse Array
// using reverse() in STL.   reverse() is a function in <algorithm> header file

	// Get the array
	int arr[] = { 1, 45, 54, 71, 76, 12 };

	// Compute the sizes
	int n = sizeof(arr) / sizeof(arr[0]);

	// Print the array
	cout << "Array: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	// Reverse the array
	reverse(arr, arr + n);

	// Print the reversed array
	cout << "\nReversed Array: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
