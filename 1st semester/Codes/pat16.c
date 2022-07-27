#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input rows to print from user */
   
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print numbers */
        for(j=1; j<=(rows*2 -(2*i-1)); j++)
        {
            printf("%d",j);
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}