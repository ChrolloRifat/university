#include <stdio.h>

int main()
{
    int i, j, N;
    int star, spaces;

    /* Input number of columns to print from user */
    scanf("%d", &N);

    spaces = N - 1;
    star = 1;

    /* Iterate through rows */
    for (i = 1; i < N * 2; i++)
    {
        /* Print leading spaces */
        for (j = 1; j <= spaces; j++)
            printf(" ");

        /* Print numbers */
        for (j = 1; j <= star; j++)
            printf("%d", j);

        /* Move to next line */
        printf("\n");

        if (i < N)
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }

    return 0;
}