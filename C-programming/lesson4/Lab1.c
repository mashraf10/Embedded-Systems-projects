/*
 ============================================================================
 Name        : LAB_Store and print 10 students Degrees
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
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter student %d degree : ",i+1);
		scanf("%f",&degrees[i]);
	}
	printf("\r\n");
	for(i=0;i<10;i++)
	{
		printf("student %d degree is %f \r\n",i+1,degrees[i]);
	}
}
