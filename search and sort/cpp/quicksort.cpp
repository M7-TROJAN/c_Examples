#include <iostream>
#include <utility> // includes swap() function for swapping array elements
#include <cstdlib> // includes rand() function
#include <ctime>   // includes time() function

using namespace std;

void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main()
{
    // Declare and initialize an array to test the function, as well as a variable
    // to store the array length
    int a[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 45};
    int length = 13;

    // Apply the quicksort algorithm to sort the array
    quicksort(a, length);

    // Loop through and output the array elements to check the array is sorted
    for (int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << endl;

    return 0;
}

// applies quicksort algorithm to the array with the given length... strictly
// speaking this function isn't necessary because we could call
// quicksort_recursive directly, but this function makes the 'interface'
// prettier in that only the array and length need to be provided!
void quicksort(int array[], int length)
{
    // our quicksort algorithm randomly selects the pivot, so we seed the random
    // number generator to ensure the randomization of our random numbers
    srand(time(NULL));

    // calls the quicksort recursive algorithm with our array, and a starting
    // lower index bound of 0 and high index bound of the final element in the
    // array... i.e. apply quicksort to the entire length of the array
    quicksort_recursion(array, 0, length - 1);
}

// applies the recursive divide and conquer portion of the quicksort algorithm
// to the array... applying quicksort to the array between the low-high indexes
void quicksort_recursion(int array[], int low, int high)
{
    // stop recursion when low >= high
    if (low < high)
    {
        // partition the array by a pivot, and return the pivot element's index
        int pivot_index = partition(array, low, high);

        // apply quicksort to the left side subarray
        quicksort_recursion(array, low, pivot_index - 1);

        // apply quicksort to the right side subarray
        quicksort_recursion(array, pivot_index + 1, high);
    }
}

// partitions the array between low - high indexes by a pivot value and returns
// the index of the pivot
int partition(int array[], int low, int high)
{
    // randomly select a pivot value between low-high by randomly selecting an
    // index in the range low-high... we do this as opposed to just selecting
    // the last element each time because it's technically possible that always
    // selecting the same pivot will have poor performance if the array happens
    // to contain values in a way that is suboptimal (e.g. if the array is sorted
    // already before quicksort is applied)
    int pivot_index = low + (rand() % (high - low + 1));

    // swap the element at the pivot_index with the element at index high (i.e.
    // the last element in this portion of the array), doing so allows us to
    // apply the below partitioning algorithm
    if (pivot_index != high)
    {
        swap(array[pivot_index], array[high]);
    }

    // the pivot value is now whatever is in the high index
    int pivot_value = array[high];

    // the partitioning algorithm will shift elements that are less than the pivot
    // value to the front portion of the low - high array indexes, with i keeping
    // track of where the elements that are greater than the pivot value begin
    int i = low;

    // increment j from low up until but not including the pivot value at high
    for (int j = low; j < high; j++)
    {
        // if the array value at j is less than the pivot value, perform a swap with
        // the value at the array at index i... this effectively moves this "less
        // than the pivot values" to the front portion, and we increment i to
        // reflect where the values that are greater than the pivot now begin
        if (array[j] <= pivot_value)
        {
            swap(array[i], array[j]);
            i++;
        }
    }

    // we now know that the value at index i is greater than or equal to the pivot
    // so we swap it with the pivot value to complete the partition
    swap(array[i], array[high]);

    // index i now contains the pivot value, so return this so that the
    // quicksort_recursion function knows where to split the array when applying
    // the algorithm to the resulting subarrays
    return i;
}