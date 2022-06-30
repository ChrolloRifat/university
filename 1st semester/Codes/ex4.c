/**
 * C program to compute the series 2^3+5^3+8^3+...+n^3
 */
#include <stdio.h>
#include <math.h> //to use the pow function
int main()
{
    int i, n, sum = 0;
    i = 2;
    printf("Please enter the value of n: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + pow(i, 3);
        i = i + 3;
    }
    printf("sum = %d\n", sum);
    return 0;
}
