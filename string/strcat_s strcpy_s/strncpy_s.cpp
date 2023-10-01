#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[10];
    const char *src = "Hello, World!";
    strncpy_s(dest, sizeof(dest), src, 5);
    dest[sizeof(dest) - 1] = '\0'; // Ensure null-termination
    printf("Partial Copy: %s\n", dest); // output: Partial Copy: Hello

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
