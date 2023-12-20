/*
 ============================================================================
 Name        : C Program to Calculate the power of a Number Using Recursion.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int calc_power(int num1,int num2);
void main()
{
    int num1,num2;
    printf("Enter base number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&num1);
    printf("Enter power number(positive integer): ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&num2);
    printf("%d^%d = %d",num2,num1,calc_power(num1,num2));
}
int calc_power(int num1,int num2)
{
    if(num2!=0)
    {
        return (num1*calc_power(num1,num2-1));
    }
    else
    {
        return 1;
    }
}
