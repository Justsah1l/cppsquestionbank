/* Aim - C program to find X^Y. Where X and Y are the user inputs.*/
#include<stdio.h>
#include<math.h>
/*
//without pow()
 int main()
    {
    int a,b,c=1,d=1,i; 
    printf("Enter the base value :");
    scanf("%d",&a);
    printf("Enter the power value :");
    scanf("%d",&b);
    for(i=1;i<=b;++i)
    {
        c = c*a;
    }
    printf("\n%d raised to the power %d is %d\n",a,b,c);
    }
*/

/*
//with pow()
int main()
{
    int a,b,c; 
    printf("Enter the base value :");
    scanf("%d",&a);
    printf("Enter the power value :");
    scanf("%d",&b);
    c = pow(a, b);
    printf("\n%d raised to the power %d is %d\n",a,b,c);
}
*/
