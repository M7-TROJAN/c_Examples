
#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[20] = "Hello, ";
    const char *src = "World!";
    strcat_s(dest, sizeof(dest), src);
    printf("Concatenated: %s\n", dest); // output: Concatenated: Hello, World!

    /*
    2- strcat_s(): Safe Concatenate Strings
    - Syntax: errno_t strcat_s(char *dest, rsize_t destsz, const char *src);
    - Concatenates the contents of the source string to the destination string.
    - 'dest' is the destination buffer.
    - 'destsz' is the size of the destination buffer.
    - 'src' is the source string to be concatenated.
    Returns an error code (errno_t) indicating success or failure.
    */
    return 0;
}
