/*
 ============================================================================
 Name        : LAB_
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	float degrees [10];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("Enter student %d degree : ",i+1);
		scanf("%f",&degrees[i]);
	}
	printf("\r\n");
	for(j=0;j<10;j++)
	{
		printf("student %d degree is %f \r\n",j+1,degrees[j]);
	}
}
