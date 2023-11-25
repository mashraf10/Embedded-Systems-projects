/*
 ============================================================================
 Name        : EX3_C Program to Add Two Integers
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "stdio.h"


void main()
{
    int i,j;
    printf("Enter two integers: ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d",&i,&j);
    printf("Sum: %d",i+j);
}
