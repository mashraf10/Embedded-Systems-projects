/*
 ============================================================================
 Name        : C Program to Find ASCII Value of a Character
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
    char c;
    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);
    printf("ASCII value of %c = %d",c,c);
}
