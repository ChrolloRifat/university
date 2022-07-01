/**
 * C program to compute the series 1^2/2+2^2/3+3^2/4+...+9^2/10
 */
#include <stdio.h>
#include <math.h>
int main()
{
    float i, count, n, sum = 0;
    i = 1;
    count = 2;
    printf("Please enter the value of n: ");
    scanf("%f", &n);
    while (count <= n && i <= n)
    {
        sum = sum + pow(i, 2) / count;
        i++;
        count++;
    }
    printf("sum = %.3f\n", sum);
    return 0;
}