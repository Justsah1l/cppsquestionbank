/* Aim - C program to accept a value from user and check whether it is multiple of 3 and 4 or not. */
#include<stdio.h>
#include<math.h>

int main() 
{
  int a,b,c;
  printf("\nEnter a number to check whether it is multiple of 3 and 4 :");//it is 3 and 4 not 3 or 4
  scanf("%d",&a);
  //Add seperate if statements if you want to check for each number
  if(a%3 == 0 && a%4 == 0)
  {
      printf("The number %d is multiple of both 3 and 4",a);
  }
  else
  {
      printf("The number %d is not a multiple of 3 and 4",a);
  }
  
}
