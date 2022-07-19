#include <stdio.h>
int main()
{
    int m, i, isPrime = 1;
    scanf("%d", &m);
    for (i = 2; i <= m / 2; i++)
    {
        if (m % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1)
    {
        printf("%d is prime\n", m);
    }
    else
    {
        printf("%d is NOT prime\n", m);
    }

    return 0;
}
