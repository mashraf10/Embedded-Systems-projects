/*
 ============================================================================
 Name        : C Program to Make a Simple Calculator to Add,Subtract,Multiply or Divide.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
    float x,y;
    char c;
    printf("Enter operator either + or - or * or divide : ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);
    printf("Enter two operands: ");
    fflush(stdin); fflush(stdout);
    scanf("%f %f",&x,&y);
    switch(c)
    {
    case '+':
        {
            printf("%.1f + %.1f = %.1f",x,y,x+y);
        }
    break;
    case '-':
        {
            printf("%.1f - %.1f = %.1f",x,y,x-y);
        }
    break;
    case '*':
        {
            printf("%.1f * %.1f = %.1f",x,y,x*y);
        }
    break;
    case '/':
        {
            printf("%.1f / %.1f = %.1f",x,y,x/y);
        }
    break;
    }
}

