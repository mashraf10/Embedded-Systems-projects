/*
 ============================================================================
 Name        : C_program to Find Transpose of a Matrix.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	int r,c,i,j;
    printf("Enter rows and column of matrix: ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d",&r,&c);
    int a[r][c],transpose[c][r];
    printf("Enter elements of matrix:\r\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements a%d%d: ",i+1,j+1);
            fflush(stdin); fflush(stdout);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\r\nEntered Matrix:\r\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\r\n\r\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    printf("\r\nTranspose of Matrix:\r\n");
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d  ",transpose[i][j]);
        }
        printf("\r\n\r\n");
    }
}
