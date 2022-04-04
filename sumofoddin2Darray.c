/* Aim - C program to read N integers into an array A and to find the sum of all odd numbers.*/
#include <stdio.h>

int main() 
{
  int a,b,i,j,sum=0;
  printf("************Odd Number Calculator************");
  printf("\n\nEnter how many rows you want : ");
  scanf("%d",&a);
  printf("\n\nEnter how many columns you want : ");
  scanf("%d",&b);
  int mat[a][b];
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
      printf("\nEnter the elements of array : ");
      scanf("%d",&mat[i][j]);
    }
  }
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
      if((mat[i][j] % 2) != 0 )
      {
        sum += mat[i][j];
      }
      
    }
  }
  printf("\nThe sum of odd numbers in the 2D matrix is %d",sum);
}
