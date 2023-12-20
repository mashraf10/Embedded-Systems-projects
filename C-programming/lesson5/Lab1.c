/*
 ============================================================================
 Name        : Lab_Calculate the Factorial Using Function.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int factorial(int num);
void main()
{
	int num;
	factorial(num);
}
int factorial(int num)
{
    int n,fact=1;
    printf("Enter integer number : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Error!!! Factorial of negative number doesn't exist. \n");
    }
    else
    {
        if(n==0)
        {
            printf("Factorial = %d",n);
        }
        else
        {
            for(;n>0;n--)
            {
                fact*=n;
            }
         printf("Factorial = %d",fact);
        }
    }
    return fact;
}

