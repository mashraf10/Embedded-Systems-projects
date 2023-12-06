/*
 ============================================================================
 Name        : C_Program to Find the Length of a String.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	char str[100];
	int i,Length=0;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        Length++;
    }
    printf("\r\nLength of string: %d",Length);
}
