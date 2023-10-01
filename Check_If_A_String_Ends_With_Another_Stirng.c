
// Program: Check If A String Ends With Another Stirng

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool endsWith(char *string, char *end);

int main()
{
    // test string
    char myString[] = "Roses are red";

    // check if the test string ends with "red"
    char end_ok[] = "red";
    if (endsWith(myString, end_ok))
        printf("Yes string ends with red.\n");
    else
        printf("No string does not end with red.\n");

    // check if the test string ends with "blue"
    char end_not_ok[] = "blue";
    if (endsWith(myString, end_not_ok))
        printf("Yes string ends with blue.\n");
    else
        printf("No string does not end with blue.\n");

    // test the error handling code of an "end string" that is longer than the
    // actual string itself... this length issue *must* result in false
    char too_long[] = "Roses are red violets are blue";
    if (endsWith(myString, too_long))
        printf("Failed to detect issue!\n");
    else
        printf("Length issue detected!\n");

    return 0;
}

// returns true if the string ends with the string end, and false otherwise
bool endsWith(char *string, char *end)
{
    // get the lengths of both strings
    int string_length = strlen(string);
    int end_length = strlen(end);

    // if the end string is longer than the string itself, return false as it is
    // not possible for the string to end with the end string
    if (end_length > string_length)
        return false;

    // check the characters at the end of string to see if any of them do no match
    // the characters in the end string, if any do no not, the string does not
    // end with the end string, and we can return false
    for (int i = 0; i < end_length; i++)
        if (string[string_length - i] != end[end_length - i])
            return false;

    // if we did not find any non-matching characters, the string must end with
    // the end string, and we can return true
    return true;
}