/**
 *C program to check whether a number is even or odd
 */
#include <stdio.h>
int main()
{
    int n1;
    int n2 = 2;
    printf("Enter the number: \n");
    scanf("%d", &n1);
    if (n1 % n2 == 1)
    {
        printf("The number is odd\n");
    }

    else
    {
        printf("The numbers is even\n");
    }

    return 0;
}
