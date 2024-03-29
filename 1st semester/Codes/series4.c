/**
 * C program to compute the series 1/1-1/3+1/5-...
 */
#include <stdio.h>

int main()
{
    int count = 1, n = 0;
    float sum = 0;

    while (count <= 5)
    {
        if (n % 2 == 1)
        {
            sum -= (1.0 / count);
            n++;
            count += 2;
        }
        else
        {
            sum += (1.0 / count);
            n++;
            count += 2;
        }
    }
    printf("sum = %.3f\n", sum);
}