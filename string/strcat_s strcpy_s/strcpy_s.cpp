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
    char dest[10]; // Destination buffer
    strcpy_s(dest, sizeof(dest), "Hello");
    printf("Copied: %s\n", dest); // output: Copied: Hello
    return 0;
}
