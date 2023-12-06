/*
 ============================================================================
 Name        : C_program to find sum of two matrix of order 2*2 using multidimensional arrays.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	float a[2][2],b[2][2],sum[2][2];
	int i,j;
    printf("Enter the elements of 1st matrix\r\n");
	for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            fflush(stdin); fflush(stdout);
            scanf("%f",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\r\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("Enter b%d%d: ",i+1,j+1);
            fflush(stdin); fflush(stdout);
            scanf("%f",&b[i][j]);
        }
    }
    printf("\r\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of matrix:\r\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%.1f\t",sum[i][j]);
        }
        printf("\r\n");
    }
}
