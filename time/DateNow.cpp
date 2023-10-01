#include <ctime>
#include <cstdio>
using namespace std;
int main()
{
    time_t Time = time(0);    // time_t is =>  long long  (typedef long long time_t)
    // time(0) returns number of secs since jan. 1, 1970 midnight

    tm Now;
    localtime_s(&Now, &Time);  
    printf("%.2d/%.2d/%.4d\n",Now.tm_mday, Now.tm_mon + 1, Now.tm_year + 1900);
    printf("%.2d:%.2d:%.2d\n",Now.tm_hour, Now.tm_min, Now.tm_sec);


/*
    tm is a struct
    int tm_sec;   // seconds after the minute - [0, 60] including leap second
    int tm_min;   // minutes after the hour - [0, 59]
    int tm_hour;  // hours since midnight - [0, 23]
    int tm_mday;  // day of the month - [1, 31]
    int tm_mon;   // months since January - [0, 11]
    int tm_year;  // years since 1900
    int tm_wday;  // days since Sunday - [0, 6]
    int tm_yday;  // days since January 1 - [0, 365]
    int tm_isdst; // daylight savings time flag
*/
}

/*
1- time_t Time = time(0);:
The time() function from the <ctime> library is called to obtain the current system time in seconds
since the Unix epoch (January 1, 1970). The returned time is assigned to the variable Time, which has the time_t type.

2- tm Now;: A structure Now of type tm is declared. The tm structure holds various members to represent date and time values.

3- localtime_s(&Now, &Time);:
The localtime_s() function is called to convert the system time represented by Time into a local time.The converted time is stored in the Now structure.
The &Now and &Time are memory addresses of the respective variables, allowing the function to modify their values.

4- printf("%.2d/%.2d/%.4d\n", Now.tm_mday, Now.tm_mon + 1, Now.tm_year + 1900);:
The printf() function is used to print the formatted date string. The format specifier %.2d ensures that the day and month are printed
with leading zeros if necessary. %.4d ensures that the year is printed with four digits.
The corresponding values are extracted from the Now structure (Now.tm_mday, Now.tm_mon, and Now.tm_year),
and Now.tm_mon and Now.tm_year are adjusted by 1 and 1900 respectively, as they are zero-based.


Note:
that the code uses the localtime_s() function, which is specific to Windows.
If you're compiling this code on a different platform, you might need to use a different function to convert the time,
such as localtime() or gmtime().
*/