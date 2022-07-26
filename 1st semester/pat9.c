/**
 * C program to print mirrored right triangle star pattern series
 */

#include <stdio.h>

int main()
{
    int i, j, n;

    /* Input n from user */
    scanf("%d", &n);

    /* Iterate through n */
    for (i = 1; i <= n; i++)
    {
        /* Print spaces in decreasing order of row */
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        /* Print number in increasing order or row */
        for (j = 1; j <= i; j++)
        {
            printf("%d",j);
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}