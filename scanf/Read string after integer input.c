/*
C program to read string after integer input.
*/
#include <stdio.h>
int main(int argc , char* argv[]){
    int age;
    char *name[30] , tmp;
    
    puts("Enter your age: ");
    scanf("%d",&age);
    puts("Enter your name: ");
    scanf("%c",&tmp); // temp statement to clear buffer
    scanf("%[^\n]",name); /*  or fgets(name , 30 , stdin) or  gets(name)  */

    printf("name is: %s , age is: %d\n" , name , age);

    
}