/*
 ============================================================================
 Name        : C_program to Calculate Average using Arrays.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	float average,sum;
	int i,n;
    printf("Enter the numbers of data: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);
    float arr[n];
    for(i=0;i<n;i++)
    {
        printf("%d. Enter number: ",i+1);
        fflush(stdin); fflush(stdout);
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    average=sum/n;
    printf("Average = %0.2f",average);
}
