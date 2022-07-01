/**
 * C program to compute the series
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int i, count = 0;
    float sum = 0;
    i = 1;
    count = 2;
    // printf("Please enter the value of n: ");
    // scanf("%f", &n);
    while (count <= 10)
    {
        if (i % 2 == 1)
        {
            sum = sum - i / count;
            count++;
            i++;
        }
        else
        {
            sum = sum + i / count;
            count++;
            i++;
        }
    }
    printf("sum = %.3f\n", sum);
    return 0;
}