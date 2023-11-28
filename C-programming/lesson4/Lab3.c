/*
 ============================================================================
 Name        : LAB_Calculate ant Print the Transpose of 3X3 matrix.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	float a[3][3];
	float t[3][3];
	int r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("Enter the item(%d ,%d) : ",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	}
	printf("the matrix is \r\n");
	for(r=0;r<3;r++)
		{
			for(c=0;c<3;c++)
			{
				printf("%2.2f\t",a[r][c]);
			}
			printf("\r\n");
		}
	for(r=0;r<3;r++)
		{
			for(c=0;c<3;c++)
			{
				t[r][c]=a[c][r];
			}
		}
    printf("the Transpose matrix is \r\n");
	for(r=0;r<3;r++)
		{
			for(c=0;c<3;c++)
			{
				printf("%2.2f\t",t[r][c]);
			}
			printf("\r\n");
		}
}
