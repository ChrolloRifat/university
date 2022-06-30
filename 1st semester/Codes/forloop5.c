#include <stdio.h>
int main()
{
     int i,n,sum;
     sum = 0;

     for (i = 1; i<=10;i+=1)
     {
          sum = sum + i*i*i;

     }
     printf("sum = %d\n",sum);
     return 0;
}


