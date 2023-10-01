#include <iostream>
using namespace std;
#define YEAR 2023
int main() {
    cout << "|========================|\n"
            "|== calculate your age ==|\n"
            "|========================|\n";
    int age , age_in_days , age_in_hours , age_in_minutes , age_in_seconds;
    cout << "enter your age: ";
    cin >> age;
    age_in_days  = age * 365;
    age_in_hours  = age_in_days * 24;
    age_in_minutes = age_in_hours * 60;
    age_in_seconds = age_in_minutes * 60;
    cout << endl;
    cout << "your age in days is: " << age_in_days << endl;
    cout << "your age in hours is: " << age_in_hours << endl;
    cout << "your age in days is: " << age_in_minutes << endl;
    cout << "your age in days is: " << age_in_seconds << endl;

    system("PAUSE");


    return 0;
}