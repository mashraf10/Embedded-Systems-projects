/*
 ============================================================================
 Name        : C Program to Find the Largest Number Among Three Numbers.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
    float i,j,k;
    printf("Enter three numbers: ");
    fflush(stdin); fflush(stdout);
    scanf("%f %f %f",&i,&j,&k);
    if(i>j)
    {
        if(i>k)
        {
            printf("Largest number = %.2f",i);
        }
        else
        {
            printf("Largest number = %.2f",k);
        }
    }
    else
    {
        if(j>k)
        {
            printf("Largest number = %.2f",j);
        }
        else
        {
            printf("Largest number = %.2f",k);
        }
    }
}

