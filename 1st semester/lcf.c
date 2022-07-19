#include <stdio.h>
int main()
{
    int m, n, i, max, lcm = 1;
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        max = m;
    }
    else
    {
        max = n;
    }
    i = max;
    while (1)
    {
        if (i % m == 0 && i % n == 0)
        {
            lcm = i;
            break;
        }
        else
        {
            i = max + i;
        }
    }
    printf("LCM(%d,%d) = %d\n", m, n, lcm);
    return 0;
}