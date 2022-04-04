/*Aim - C program to print the week day by number input*/
#include <stdio.h>

int main()
{
    int w;
    printf("Enter a number (1-7): ");
    scanf("%d", &w);
    
    switch(w)
    {
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        case 7: 
            printf("Sunday");
            break;
        default: 
            printf("Invalid input! Please enter number between 1-7.");
    }

    return 0;
}
