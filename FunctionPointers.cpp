/*
Function pointer Syntax:
    type(* functionPointerName)(parameters) = your function name without brackets ()
Example1 a func pointer that point to a function doesn't has any parameters:
    int(*myFuncPtr)() = fun;
Example2: a funcPointer that point to a function that has parameters:
    int(*myFuncPtr)(int,int,char) = fun;

*/
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int add(int num1, int num2)
{
	return num1 + num2;
}
int main(void)
{
	int(*addFuncPtr)(int, int);
	addFuncPtr = add;

	cout << add(1,2) << endl; // 3
	cout << addFuncPtr(10,20) << endl; // 30

}
