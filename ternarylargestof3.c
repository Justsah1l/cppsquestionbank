/* Aim - C statement to find maximum of three numbers using ternary operator. */
#include<stdio.h>
#include<math.h>

int main() 
{
  int a,b,c,lar;
  printf("\nPlease enter 3 numbers :");
  scanf("%d%d%d",&a,&b,&c);
  printf("\nYour 3 numbers are %d,%d,%d\n",a,b,c);
  lar = (a > b && a>c)?a:((b > a && b> c)?b:c);
  printf("\nFrom numbers %d ,%d and %d , %d is the largest",a,b,c,lar);
}
