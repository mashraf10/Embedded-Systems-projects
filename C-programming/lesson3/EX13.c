/*
 ============================================================================
 Name        : C Program to Calculate Sum of Natural Numbers.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
    int n,sum=0,i;
    printf("Enter an integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum = %d",sum);
}

