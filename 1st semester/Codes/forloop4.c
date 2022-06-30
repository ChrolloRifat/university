#include <stdio.h>
int main()
{
     int i,n,count;
     count = 0;

     for (i = 1; i<=1000;i+=7)
     {
          count = count + 1;

     }
     printf("count = %d\n",count);
     return 0;
}


