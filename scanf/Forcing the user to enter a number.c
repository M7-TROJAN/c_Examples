/*
"اجبار"
Forcing the user to enter a number, not a letter by using scanf() function
*/

#include <stdio.h>
int main(int argc , char* argv[]){
    int x;
    char tmp; // if the user enter string not integer this is datatype of char to store the empty character or enter key "\r" in it.

    while ( (printf("x: ") , scanf("%d",&x) == 0) )
    {
        printf("Error wrong input, please enter a number\n");
        scanf("%c",&tmp);  // temp statement to clear x
        /*
            Or you can do it without tmp  as following ->  scanf("%*c");
        */

    }
}