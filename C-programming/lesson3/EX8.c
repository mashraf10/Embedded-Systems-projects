/*
 ============================================================================
 Name        : C Program to Check Whether a Number is Even or Odd.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
    int a;
    printf("Enter an integer you want to check: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd",a);
    }
}

