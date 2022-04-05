/*Aim - C program to print n terms of Fibonacci sequence.*/
#include<stdio.h>
int main()
{
int n, f1 = 0, f2 = 1, f = 0, i;
printf("Enter the value to print terms till it : ");
scanf("%d",&n);
printf("fibonacci series :");
printf(" %d, %d ",f1,f2);
for(i=2;i<=n;i++)
{
    f = f1+f2;
    f1=f2;
    f2=f;
    printf(", %d",f);
}
}
