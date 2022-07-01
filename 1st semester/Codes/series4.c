/**
 * C program to compute the series 1/1-1/3+1/5-...
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int count = 1;
    int n = 3;
    float total, pos, neg, sum = 0;
    // printf("Please enter the value of n: ");
    // scanf("%f", &n);
    while (count <= 5 && n <= 5)
    {
        sum = sum + (1 / count);
        total = sum - (1 / n);
        count = count + 2;
        n = n + 4;
    }
    printf("sum = %.3f\n", total);
    return 0;
}