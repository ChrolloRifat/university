#include <stdio.h>
int main()
{
    int m, n, min, gcd = 1;
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        min = n;
    }
    else
    {
        min = m;
    }
    for (int i = 2; i <= min; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD(%d,%d) = %d\n", m, n, gcd);
    return 0;
}
