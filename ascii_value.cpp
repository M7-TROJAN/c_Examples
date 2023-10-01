#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
#define YEAR 2023
int main()
{
    int asci;
    char ch;

    do
    {
        cin >> asci;
        cout << "\nenter ascii value: ";
        cout << asci << " >> " << char(asci) << endl;
    } while ((cout << "\nagain (y/n)?: ", ch = getch()) == 'y');

    return 0;
}