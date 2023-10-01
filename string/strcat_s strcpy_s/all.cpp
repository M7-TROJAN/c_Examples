/*
1- strcpy_s(): Safe Copy String
- Syntax: errno_t strcpy_s(char *dest, rsize_t destsz, const char *src);
- Copies the contents of one string to another.
- 'dest' is the destination buffer.
- 'destsz' is the size of the destination buffer.
- 'src' is the source string to be copied.
Returns an error code (errno_t) indicating success or failure.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    // Example 1: strcpy_s() - Safe Copy String
    char dest1[10];
    const char *src1 = "Hello";
    strcpy_s(dest1, sizeof(dest1), src1);
    printf("Copied: %s\n", dest1);
    /*
    1- strcpy_s(): Safe Copy String
    - Syntax: errno_t strcpy_s(char *dest, rsize_t destsz, const char *src);
    - Copies the contents of one string to another.
    - 'dest' is the destination buffer.
    - 'destsz' is the size of the destination buffer.
    - 'src' is the source string to be copied.
    Returns an error code (errno_t) indicating success or failure.
    */

    // Example 2: strcat_s() - Safe Concatenate Strings
    char dest2[20] = "Hello, ";
    const char *src2 = "World!";
    strcat_s(dest2, sizeof(dest2), src2);
    printf("Concatenated: %s\n", dest2);
    /*
    2- strcat_s(): Safe Concatenate Strings
    - Syntax: errno_t strcat_s(char *dest, rsize_t destsz, const char *src);
    - Concatenates the contents of the source string to the destination string.
    - 'dest' is the destination buffer.
    - 'destsz' is the size of the destination buffer.
    - 'src' is the source string to be concatenated.
    Returns an error code (errno_t) indicating success or failure.
    */

    // Example 3: strncpy_s() - Safe Copy Partial String
    char dest3[10];
    const char *src3 = "Hello, World!";
    strncpy_s(dest3, sizeof(dest3), src3, 5);
    dest3[sizeof(dest3) - 1] = '\0'; // Ensure null-termination
    printf("Partial Copy: %s\n", dest3);
    /*
    3- strncpy_s(): Safe Copy Partial String
    - Syntax: errno_t strncpy_s(char *dest, rsize_t destsz, const char *src, rsize_t count);
    - Copies a specified number of characters from the source string to the destination buffer.
    - 'dest' is the destination buffer.
    - 'destsz' is the size of the destination buffer.
    - 'src' is the source string to be copied.
    - 'count' is the maximum number of characters to copy.
    Returns an error code (errno_t) indicating success or failure.
    */
    
    return 0;
}
