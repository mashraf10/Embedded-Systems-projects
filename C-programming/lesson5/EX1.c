/*
 ============================================================================
 Name        : Prime Numbers Between two Intervals by Making User-defined Function.
 Author      : Mohamed Ashraf Emara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
int Prime_Numbers(int check_num);
void main()
{
    int num1,num2,i;
    printf("Enter two numbers(intervals): ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d",&num1,&num2);
    printf("prime numbers between %d and %d are: ",num1,num2);
    for(i=num1+1;i<num2;i++)
    {
        if(Prime_Numbers(i)==1);
            printf("%d ",i);
    }
}
int Prime_Numbers(int check_num)
{
    int i,flag=0;
    for(i=2;i<check_num/2;i++)
    {
        if(check_num%i!=0)
        {
            flag=1;
            break ;
        }
    }
    return flag;
}
