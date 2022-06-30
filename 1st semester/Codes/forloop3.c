#include <stdio.h>
int main()
{
     int i,n,sum;
     sum = 0;

     for (i = 1; i<=10;i++)
     {
          sum = sum + i*i;

     }
     printf("sum = %d\n",sum);
     return 0;
}

