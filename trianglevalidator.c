/* Aim - C program to accept 3 sides from user and check whether they form a triangle or not. Also display type of triangle. (Equilateral, isosceles, right angle, scalene). */
#include<stdio.h>
#include<math.h>

int main() 
{
  int a,b,c;
  printf("\nEnter the 3 lengths of triangle :");//you can change this to seperate input to make it look good 
  scanf("%d %d %d",&a,&b,&c);
  if(a+b < c || a+c < b || b+c < a)
  {
    printf("It is not a valid triangle");
  }
  else if (a == b || a == c || b == c)
  {
    printf("It is a valid triangle and also Isosceles Triangle");
  }
  else if(a == b && b == c)
  {
    printf("It is a valid triangle and also Equilateral Triangle");
  }
  else if ( a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a)
  {
    printf("It is a valid triangle and also Right angle Triangle");
  }
  else
  {
    printf("It is a valid triangle and also Scalene Triangle");
  }
  
}
