#include <stdio.h>
int main()
{
    int i, j, A[4][5], num = 1;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {

            A[i][j] = num;
            num++;
        }
    }
    A[2][2] = 1000;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", A[i][j]);
            printf("\t");
        }
        printf("\n");
    }
   
}