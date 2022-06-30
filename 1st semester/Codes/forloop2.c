#include <stdio.h>
int main()
{
     int i,n,temp;
     n = 50;
     for (i = 1; i<=10;i++)
     {
          temp =i*i;
          if(temp%2==0)
          {
               printf("%d\n",temp);
          }

     }
     return 0;
}
