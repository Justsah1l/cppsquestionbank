/*Aim - C program that computes the size of int, float, double and char.*/
#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size of int: %ld bytes \n", sizeof(a));
    printf("Size of float: %ld bytes \n", sizeof(b));
    printf("Size of double: %ld bytes \n", sizeof(c));
    printf("Size of char: %ld bytes", sizeof(d));

}
