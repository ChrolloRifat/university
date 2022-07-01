/**
 * C program to compute the series 1/2+2/3+3/4+...+(n-1)/n
 */
#include <stdio.h>
int main()
{
    float i, count, n, sum = 0;
    i = 1;
    count = 2;
    printf("Please enter the value of n: ");
    scanf("%f", &n);
    while (count <= n && i <= n)
    {
        sum = sum + i / count;
        i++;
        count++;
    }
    printf("sum = %.3f\n", sum);
    return 0;
}