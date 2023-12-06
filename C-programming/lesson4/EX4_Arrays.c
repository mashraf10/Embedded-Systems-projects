/*
 ============================================================================
 Name        : C_program to Insert an element in an Array.
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
    int arr[size];
    for(i=0;i<size;i++)
    {
        arr[i]=i+1;
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\r\n\r\nEnter the element to be inserted : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&element);
    printf("\r\nEnter the location : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&location);
    for(i=size;i>=location;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[location-1]=element;
    size++;
    printf("\r\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
