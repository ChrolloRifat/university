/**
 *C program to find maximum among three numbers
 */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the maximum\n", a);
        }
        else
        {
            printf("%d is the maximum\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is the maximum\n", b);
        }
        else
        {
            printf("%d is the maximum\n", c);
        }
    }

    return 0;
}