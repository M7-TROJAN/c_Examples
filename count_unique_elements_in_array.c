#include <stdio.h>
#include <stdbool.h>

int count_unique(int a[], int length);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 3, 4, 1, 8, 9, 7, 8}; // unique elements (2,5,6,9,7)

    int total_unique = count_unique(a, 13);

    printf("Total Unique Elements: %d\n", total_unique);

    return 0;
}

// Returns the number of unique elements in the array a with the provided length
int count_unique(int a[], int length)
{
    // Initialize the count of unique elements 0
    int count = 0;

    // Use the counter variable i to 'loop through and check' each element in the
    // array to see if it has any duplicates, by initializing i to 0 and
    // incrementing by 1 until it reaches the array length.
    for (int i = 0; i < length; i++)
    {
        // Initially we'll assume that there is no element in the array that
        // matches the element at index i by setting match_found to false
        bool match_found = false;

        // Use the counter variable j to 'loop through and check' element in the
        // array to see if it matches the element in the array at the index i
        for (int j = 0; j < length; j++)
        {
            // if the element in the array at the index i is match (i.e equals) the
            // the element in the array at the index j, and i != j (otherwise it is
            // the same element being compared which of course equals itself), then
            // we have found a match and we can set match_found to true
            if (a[i] == a[j] && i != j)
                match_found = true;
        }

        // If we have NOT found a match, then the element is unique and we increment
        // the count of unique elements.
        if (!match_found)
            count++;
    }

    // After checking each element to see if it unique count will be set to the
    // number of unique elements and we can return this value.
    return count;
}