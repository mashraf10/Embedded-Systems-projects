/*
 ============================================================================
 Name        : LAB_Calculate polynomial value for a set of inputs
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	float x [5]={5,16,22,3.5,15},y;
	int i;
	for(i=0;i<5;i++)
	{
		y=5 * x[i] * x[i] + 3 * x[i] + 2;
		printf("y(%.f) = %f\r\n",x[i],y);
	}

}
