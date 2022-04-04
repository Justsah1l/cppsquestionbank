/* Aim - C program to accept n elements from user and count number of prime numbers in a given array.*/
#include <stdio.h>

int main() 
{
  int a,b,i,j,f=0,count;
  printf("Enter the size of array : ");
  scanf("%d",&a);
  int c[a];
  for(i=0;i<a;i++)
  {
    printf("Enter the %d element of the array : ",i+1);
    scanf("%d",&c[i]);
  }
  for(i=0;i<a;i++)
  {
    f=0;
    for(j=2;j<=c[i]/2;j++)
    {
      if(c[i] % j == 0)
      {
        f =1;
        break;

      }
    }
    if(f == 0)
    {
      count++;
    }
  }
  printf("There are %d prime numbers in the array",count);
  

}
