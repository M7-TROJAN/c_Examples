/*
C program to read string with spaces using scanf() function
*/
#include <stdio.h>
int main(int argc , char* argv[]){
    char name[30];
	printf("Enter name: ");
	scanf("%[^\n]",name);

    /*
    or you can use gets() fun  or  fgets() fun to get the string as following:
        fgets(name , 30 , stdin);
        gets(name);
    */

	printf("Name is: %s\n",name);
	return 0;
}