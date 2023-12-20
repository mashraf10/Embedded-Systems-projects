/*
 ============================================================================
 Name        : Lab.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void following_output(void)
{
    int i,j;
    for(i=0;i<=9;i++)
    {
        for(j=i;j<=9;j++)
        {
            printf("%d",j);
        }
        printf("\r\n");
    }
}

void main()
{
    following_output();
}

