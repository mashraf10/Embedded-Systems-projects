/*
 ============================================================================
 Name        : EX2_C Program to Print a Integer Entered by a User
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "stdio.h"


void main()
{
    int x;
    if(x++&&(x==1))
    {
    printf("Enter a integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",x);
    printf("You entered: %d",x);

    }
}
