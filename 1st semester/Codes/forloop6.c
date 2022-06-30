#include <stdio.h>
int main()
{
     int i,n,sum;
     sum = 0;
     scanf("%d",&n);
     for (i = 3; i<=n;i+=4)
     {
          sum = sum + i;

     }
     printf("sum = %d\n",sum);
     return 0;
}


