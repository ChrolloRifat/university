#include <stdio.h>
int main(void)
{
    int i, j, k, l;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<4; k++)
            {
                for (l=0; l<4; l++)
                {
                      printf("\t%d %d %d %d\n", i, j, k, l);
                }
               printf("\n"); 
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
