#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1 = "a", s2 = "b";
    cout << (s1.compare(s2) == 0); // built in
    cout << (strcmp(s1.c_str() , s2.c_str()) != 0); // #include <cstring>
}