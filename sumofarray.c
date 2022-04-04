/* Aim - C program to print sum of all the numbers stored in an array of size 10.*/
#include <stdio.h>

int main() 
{
  int a[10],i,sum = 0;
  for(i=0;i<10;i++)
    {
      printf("\nEnter the element %d of array : ",i+1);
      scanf("%d",&a[i]);
      sum += a[i];
    }
  printf("Sum of elements of array is %d",sum);

}
