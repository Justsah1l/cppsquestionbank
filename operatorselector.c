/* Aim - C program that reads an arithmetic operator (+, - , / ,*) and two operands from the user, perform the corresponding arithmetic operation on the operands using switch statement. */
#include<stdio.h>
#include<math.h>

int main() 
{
  int a,b,c,d;
  float y,z,k;
  char j;
  printf("*********Calculator*********");
  printf("\nEnter any operator (/,*,-,+) : ");
  scanf("%c",&j);
  switch(j)
  {
    case '+':
      printf("\nPlease enter 2 numbers to add :");
      scanf("%d%d",&a,&b);
      printf("\nAddition of numbers %d and %d is %d\n",a,b,a+b);
      printf("\npress 1 to exit and 0 to for main menu");
      scanf("%d",&d);
      (d>0 && d<=1) ?  : main();
      break;
    case '-':
      printf("Please enter 2 numbers to subtract :");
      scanf("%d%d",&a,&b);
      printf("\nSubtraction of numbers %d and %d is %d\n",a,b,a-b);
      printf("\npress 1 to exit and 0 to for main menu");
      scanf("%d",&d);
      (d>0 && d<=1) ?  : main();
      break;
    case '*':
      printf("Please enter 2 numbers to multiply :");
      scanf("%d%d",&a,&b);
      printf("\nMultiplication of numbers %d and %d is %d\n",a,b,a*b);
      printf("\npress 1 to exit and 0 to for main menu");
      scanf("%d",&d);
      (d>0 && d<=1) ?  : main();
      break;
    case '/':
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
