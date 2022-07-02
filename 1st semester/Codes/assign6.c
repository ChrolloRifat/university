/**
 *C program to find power of any number
 */
#include <stdio.h>
int main()
{
    int n, r, i, npr;

    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    int result = n;
    for (i = 1; i <= r; i = i + 1)
    {
        result = result * (n - i);
    }

    printf("%d \n", result);

    return 0;
}
