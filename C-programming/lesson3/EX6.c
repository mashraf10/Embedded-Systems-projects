/*
 ============================================================================
 Name        : Source Code to Swap Two Numbers
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
    float a,b,c;
    printf("Enter value of a: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&a);
    fflush(stdin); fflush(stdout);
    printf("Enter value of b: ");
    scanf("%f",&b);
    c=a;
    a=b;
    b=c;
    printf("\r\nAfter swapping, value of a = %.2f",a);
    printf("\r\nAfter swapping, value of b = %.1f",b);

}

