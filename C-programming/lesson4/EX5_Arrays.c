/*
 ============================================================================
 Name        : C_Program to Search an element in Array.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
void main()
{
	int location,element,i,size;
    printf("Enter no of elements : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&size);
    printf("\r\n");
    int arr[size];
    for(i=0;i<size-1;++i)
    {
        scanf("%d ",&arr[i]);
    }
    printf("\r\nEnter the element to be searched : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&element);
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            printf("\r\nNumber found at the location = %d",i+1);
        }
        continue;
    }
}
