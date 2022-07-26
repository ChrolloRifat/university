#include <stdio.h>

int main()
{
    int i, j, rows;
    int stars, spaces;

    scanf("%d", &rows);

    stars = 1;
    spaces = rows - 1;

    /* Iterate through rows */
    for (i = 1; i < rows * 2; i++)
    {
        /* Print spaces */
        for (j = 1; j <= spaces; j++)
            printf(" ");

        /* Print numbers */
        for (j = 1; j < stars * 2; j++)
            printf("%d", j);

        /* Move to next line */
        printf("\n");

        if (i < rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }

    return 0;
}