/**
 * C program to compute the series 4+11+18+...+n
 */
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    i = 4;
    printf("Please enter the value of n: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i += 7;
    }
    printf("sum = %d\n", sum);
    return 0;
}
