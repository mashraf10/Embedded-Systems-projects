/*
 ============================================================================
 Name        : C Program to Reverse a Sentence Using Recursion.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void Reverse();
void main()
{
    printf("Enter a sentence: ");
    Reverse();

}
void Reverse()
{
   char c;
   scanf("%c",&c);
   if(c!='\n')
   {
       Reverse();
       printf("%c",c);
   }
}
