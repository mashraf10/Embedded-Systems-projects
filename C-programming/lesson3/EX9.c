/*
 ============================================================================
 Name        : C Program to Check Vowel or Consonant.
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
    printf("Enter an alphabet: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);
    switch(c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        {
            printf("%c is a vowel",c);
        }
    break;
    default:
        {
            printf("%c is a consonant",c);
        }
    }
}

