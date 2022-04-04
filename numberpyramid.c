/* Aim - C program to print number pyramid. */
#include<stdio.h>
#include<math.h>

int main() 
{
  int a=5,i,j;
  //printf("Enter the number of rows you want: ");
  //scanf("%d", &a);
  //uncomment the above comments if you want to add specific rows.
  //By default it will be 5 as shown in the question.
  for (i = 1; i <= a; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
}
}
