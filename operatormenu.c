/* Aim - Design a menu driven program for performing arithmetic operations such as +, - , / ,* */
#include<stdio.h>
#include<math.h>

int main() 
{
  int a,b,c,d,x,f=1;
  float y,z,k;
  printf("*********Calculator*********");
  printf("\nPlease enter the option among this operations \n ");
  printf("\n1. +(1)\n");
  printf("\n2. -(2)\n");
  printf("\n3. *(3)\n");
  printf("\n4. /(4)\n");
  printf("\nSelect option - ");
  scanf("%d",&x);
  switch(x)
  {
    case 1:
      printf("Please enter 2 numbers to add :");
      scanf("%d%d",&a,&b);
      printf("\nAddition of numbers %d and %d is %d\n",a,b,a+b);
      printf("\npress 1 to exit and 0 to for main menu");
      scanf("%d",&d);
      (d>0 && d<=1) ?  : main();
      break;
    case 2:
      printf("Please enter 2 numbers to subtract :");
      scanf("%d%d",&a,&b);
      printf("\nSubtraction of numbers %d and %d is %d\n",a,b,a-b);
      printf("\npress 1 to exit and 0 to for main menu");
      scanf("%d",&d);
      (d>0 && d<=1) ?  : main();
      break;
    case 3:
      printf("Please enter 2 numbers to multiply :");
      scanf("%d%d",&a,&b);
      printf("\nMultiplication of numbers %d and %d is %d\n",a,b,a*b);
      printf("\npress 1 to exit and 0 to for main menu");
      scanf("%d",&d);
      (d>0 && d<=1) ?  : main();
      break;
    case 4:
      printf("Please enter 2 numbers to divide :");
      scanf("%f%f",&z,&k);
      y = z/k;
      printf("\nDivision of numbers %.2f and %.2f is %.2f\n",z,k,y);
      printf("\npress 1 to exit and 0 to for main menu");
      scanf("%d",&d);
      (d>0 && d<=1) ?  : main();
      break;

  }
}
