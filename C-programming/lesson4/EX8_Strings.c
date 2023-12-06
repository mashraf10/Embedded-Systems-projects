/*
 ============================================================================
 Name        : C_Program to Reverse String Without Using Library Function.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	char str[100],temp;
	int i,Length=0;
    printf("Enter the string : ");
    fflush(stdin); fflush(stdout);
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        Length++;
    }
    for(i=0;i<Length;i++)
    {
        temp=str[i];
        str[i]=str[Length-1];
        str[Length-1]=temp;
        Length--;
    }
    printf("Reverse string is : %s",str);
}
