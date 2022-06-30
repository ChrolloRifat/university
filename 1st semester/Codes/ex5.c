/**
 * C program to print all even numbers between m and n
 * in reverse order
 */
#include <stdio.h>
int main()
{
    int i, m, n;
    printf("Please enter the value of m and n: ");
    scanf("%d%d", &m, &n);
    printf("All even numbers between m and n in reverse order: \n");
    for (i = n; i >= m; i = i - 1)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
