// create delay     delay means => تأخير
#include <iostream>
#include <ctime>
int main()
{
    long myTime = time(0) + 5;

    while (time(0) < myTime);

    system("PAUSE");
}
