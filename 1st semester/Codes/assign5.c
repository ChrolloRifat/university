/**
 * Multiplication Table
 */
#include <stdio.h>
int main()
{
    int count, n, result;
    count = 1;
    printf("Multiplication table of: ");
    scanf("%d", &n);
    while (count <= 12)
    {
        result = n * count;
        printf("%d * %d = %d\n", n, count, result);
        count = count + 1;
    }

    return 0;
}