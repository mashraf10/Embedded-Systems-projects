/*
 ============================================================================
 Name        : C Program to Check Whether a Number is Positive or Negative.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
    float i;
    printf("Enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&i);
    if(i>0)
    {
        printf("%.2f is positive",i);
    }
    else if(i<0)
    {
        printf("%.2f is negative",i);
    }
    else
    {
        printf("You entered zero");
    }
}

