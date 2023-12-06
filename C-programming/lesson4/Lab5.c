/*
 ============================================================================
 Name        : LAB_C_program to find the product of 4 integers.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	int product=1,num,i;
	for(i=1;i<=4;i++)
    {
        printf("Enter number%d: ",i);
        fflush(stdin); fflush(stdout);
        scanf("%d",&num);
        if(num==0)
        {
            continue;
        }
        product*=num;
    }
    printf("Product=%d",product);
}
