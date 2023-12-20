/*
 ============================================================================
 Name        : C Program to Calculate Factorial of a Number Using Recursion.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int Calc_factorial(int num)
{
    if(num!=1)
    return num*Calc_factorial(num-1);
}
void main()
{
    int num;
    printf("Enter an positive integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&num);
    printf("Factorial of %d = %d",num,Calc_factorial(num));
}

