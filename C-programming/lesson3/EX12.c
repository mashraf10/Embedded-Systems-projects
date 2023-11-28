/*
 ============================================================================
 Name        : C Program to Check Whether a Character is an Alphabet or not.
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
    switch(c)
    {
        case '~':
        case '!':
        case '@':
        case '#':
        case '$':
        case '%':
        case '^':
        case '&':
        case '*':
        case '(':
        case ')':
        case '_':
        case '+':
        case '-':
        case '=':
        case '|':
        case '<':
        case '>':
        case '?':
        case '/':
            {
                printf("%c is not an alphabet",c);
            }
        break;
        default :
            {
                printf("%c is an alphabet",c);
            }
        break;
    }
}

