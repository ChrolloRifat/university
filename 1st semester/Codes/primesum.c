#include <stdio.h>
int main()
{
    int n, i, j, isPrime, sum = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            sum = sum + i;
        }
    }
    printf("sum = %d\n", sum);

    return 0;
}
