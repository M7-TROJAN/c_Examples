#include <stdio.h>

void shift_zeros(int array[], int length);

int main(void)
{
    int data[] = {2, 0, 5, 6, 0, 0, 7, 0, 4, 7};
    int length = 10;

    shift_zeros(data, length);

    // output the array
    // This is what the array data[] should look like after moving all zeros to the end: 2,5,6,7,4,7,0,0,0,0
    for (int i = 0; i < length; i++)
        printf("%d ", data[i]);
    printf("\n");

    return 0;
}

// moves the zeros in array with the given length to the end of the array
void shift_zeros(int array[], int length)
{

    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (array[i] != 0)
        {
            array[count] = array[i];
            count++;
        }
    }

    // write zeros into the remaining elements of the array from count - length to
    // move the zeros to the back of the array
    for (int i = count; i < length; i++)
        array[i] = 0;
}
