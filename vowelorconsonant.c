/* Aim - C program to check if the entered alphabet is Vowel or Consonant. */
#include<stdio.h>

int main() 
{
  char a;
  printf("Enter any alphabet :");
  scanf("%c",&a);
  if(a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U')
  {
    printf("The alphabet %c is a Vowel",a);
  }
  else
  {
    printf("The alphabet %c is a consonant ",a);
  }
  
}
