/*
 ============================================================================
 Name        : Lab_Calculate the Minimum Value of any Given Array.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int calcMin(int arr[],int size)
{
    int i=0,minvalue=arr[i];
    for(;i<size;i++)
    {
        if(minvalue>arr[i])
        {
            minvalue=arr[i];
        }
    }
    return minvalue;
}

void main()
{
    int n,i;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The Minimum value of the Array = %d",calcMin(arr,n));
}

