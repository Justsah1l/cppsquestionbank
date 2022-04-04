/* Aim - C program to print transpose of matrix.*/
#include <stdio.h>

int main() 
{
  int a,b,i,j;
  printf("\nEnter the number of rows of matrix : ");
  scanf("%d", &a);
  printf("\nEnter the number of columns of matrix : ");
  scanf("%d", &b);
  int mat[a][b],trans[a][b];
  for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }
  for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                    trans[j][i] = mat[i][j];
            }
        }
  for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                printf("%d ", trans[i][j]);
            }
            printf("\n");
        }
}
