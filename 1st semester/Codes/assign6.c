/**
 *C program to find power of any number
 */
#include <stdio.h>
int perm(int n)
{
    int i, result = 1;
    for (i = 2; i <= n; i = i + 1)
    {
        result = result * i;
    }
    return result;
}
int main()
{
    int n, r, npr;

    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    npr = perm(n) / perm(n - r);
    printf("%dP%d = %d\n", n, r, npr);

    return 0;
}
