/*
 ============================================================================
 Name        : LAB_C_program to find average of maximum of n positive numbers.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	float sum,average,num;
	int i,n;
	printf("maximum no. of inputs \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<=n;i++)
    {
        printf("Enter number%d: ",i+1);
        fflush(stdin); fflush(stdout);
        scanf("%f",&num);
        if(num<0.0)
        {
            break;
        }
        sum+=num;
    }
    average=(sum/i);
    printf("Average=%.2f",average);
}
