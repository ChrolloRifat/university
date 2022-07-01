/**
 * C program to compute the series 5^2+9^2+15^2+23^2+...+n^2
 */
#include <stdio.h>
#include <math.h> //to use the pow function
int main()
{
    int i, n, sum = 0;
    i = 5;
    int count = 0;
    printf("Please enter the value of n: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + pow(i, 2);
        i = i + count;
        count = count + 2;
        i = i + 4;
    }
    printf("sum = %d\n", sum);
    return 0;
}
