/*
 ============================================================================
 Name        : C_Program to Find the Frequency of Characters in a String.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	char str[100],c;
	int i,count=0;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(str);
    printf("\r\nEnter a character to find frequency: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
        {
            count++;
        }
    }
    printf("\r\nFrequency of %c = %d",c,count);
}
