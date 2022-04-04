/* Aim - C program to find the sum of N natural numbers using for loop.*/
#include <stdio.h>

int main()
{
    int a,i,sum=0;
    printf("Enter any positive integer till which you want the sum : ");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
       sum += i;
    }
    printf("The sum from the natural number %d till 0 is : %d",a,sum);
}
