/**
 * C program to calculate 10000+2000+400+...+16
 */
#include <stdio.h>
int main()
{
    int i, sum = 0;

    for (i = 10000; i >= 16; i = i / 5)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
