/**
 * C program to find maximum between two numbers using switch case
 */
#include <stdio.h>
int main()
{
    int a, b, check; // two numbers a,b
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    check = a > b;
    switch (check)
    {
    case 1:
        printf("%d is the maximum\n", a);
        break;
    case 0:
        printf("%d is the maximum\n", b);
        break;
    default:
        printf("Please enter a valid number\n");
        break;
    }
    return 0;
}