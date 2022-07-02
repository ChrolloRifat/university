/**
 *C program to find power of any number
 */
#include <stdio.h>
int main()
{
    int base, power, i, result = 1;

    printf("Enter base number:");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);

    for (i = 1; i <= power; i = i + 1)
    {
        result = result * base;
    }

    printf("%d to the power %d = %d\n", base, power, result);

    return 0;
}
