/* Aim - C program to find the largest number in an array.*/
#include <stdio.h>

int main() 
{
  int a,b,i,j;
  printf("************Largest Number Calculator************");
  printf("\n\nEnter how many rows you want : ");
  scanf("%d",&a);
  printf("\n\nEnter how many columns you want : ");
  scanf("%d",&b);
  float mat[a][b],l;
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
      printf("\nEnter the %d element of array : ",i+1);
      scanf("%f",&mat[i][j]);
    }
  }
  l = mat[0][0];
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
      if(l < mat[i][j] )
      l = mat[i][j];
    }
  }
  printf("\nThe largest number in the 2D matrix is %.2f",l);
}
