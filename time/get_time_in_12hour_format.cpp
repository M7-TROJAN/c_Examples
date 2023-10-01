#include <ctime>
#include <iostream>

int main()
{
    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);
    short hour24 = localTime->tm_hour;
    short hour12 = hour24 % 12;
    short minute = localTime->tm_min;
    short second = localTime->tm_sec;
    const char* amPmIndicator = (hour24 < 12) ? "AM" : "PM";
    // check if hour12 is equal  0
    if (hour12 == 0)
        hour12 = 12; // Convert 0 to 12 in the 12-hour time format

    std::cout << "Current time is: " << hour12 << ":" << minute << ":" << second << " " << amPmIndicator << std::endl;

    return 0;
}

/*
In order to convert the time format from the 24-hour system to the 12-hour system, you can use the modulo 12 operation (mod 12).
This operation helps in converting the time representation.

In the above code, I have converted h24 to hour12 using the modulo 12 operation.
This means that if the original value of h24 is greater than 12,
the value stored in hour12 will be the remainder when dividing the original value by 12.
*/
