/*
Your code is correctly using the <ctime> library to retrieve and display various components of the current local time.
However, you have added the #pragma warning(disable : 4996) directive at the beginning,
which disables the warning related to the localtime function being unsafe or deprecated.
The localtime function is indeed considered unsafe because it may lead to potential buffer overflows.
Instead, you can use the safer alternative localtime_s, which takes an additional parameter specifying the destination structure for the time components.

Here's an improved version of your code that uses localtime_s:
*/
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
#pragma warning(disable : 4996)

    time_t t = time(0); // get time now
    tm now;
    localtime_s(&now, &t);

    cout << "Year: " << now.tm_year + 1900 << endl;
    cout << "Month: " << now.tm_mon + 1 << endl;
    cout << "Day: " << now.tm_mday << endl;
    cout << "Hour: " << now.tm_hour << endl;
    cout << "Min: " << now.tm_min << endl;
    cout << "Second: " << now.tm_sec << endl;
    cout << "Week Day (Days since Sunday): " << now.tm_wday << endl;
    cout << "Year Day (Days since Jan 1st): " << now.tm_yday << endl;
    cout << "Hours of daylight savings: " << now.tm_isdst << endl;

    return 0;
}

/*
This version uses the safer localtime_s function to avoid potential buffer overflow issues.
It provides the same functionality as your original code while addressing the safety concern.
*/