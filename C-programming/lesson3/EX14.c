/*
 ============================================================================
 Name        : C Program to Find Factorial of a Number.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
    int n,factorial=1,i;
    printf("Enter an integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);
    if(n>=0)
    {
        for(i=1;i<=n;i++)
        {
            factorial*=i;
        }
        printf("Factorial = %d",factorial);
    }
    else
    {
        printf("Error!!! Factorial of negative number doesn't exist");
    }
}

