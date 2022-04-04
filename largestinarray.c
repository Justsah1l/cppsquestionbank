/* Aim - C program to find the largest number in an array.*/
#include <stdio.h>

int main() 
{
  int a,i;
  printf("************Largest Number Calculator************");
  printf("\n\nEnter how many numbers you want to store : ");
  scanf("%d",&a);
  float b[a],l;
  for(i=0;i<a;i++)
    {
      printf("\nEnter the element %d of array : ",i+1);
      scanf("%f",&b[i]);
    }
  l = b[0];
  for(i=0;i<a;i++)
    {
      if (l < b[i])
      {
        l = b[i];
      }
    }
  
  printf("\nThe largest number among the numbers ");
  for(i=0;i<a;i++)
    {
      printf("%.2f ,",b[i]);
    }
  printf(" is : %.2f",l);
}
