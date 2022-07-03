/**
 *C program to calculate the sum of cubes
 */
#include <stdio.h>
int main()
{
     int i, n, sum;
     sum = 0;
     printf("Enter n: ");
     scanf("%d", &n);
     for (i = 1; i <= n; i += 1)
     {
          sum = sum + i * i * i;
     }
     printf("sum = %d\n", sum);
     return 0;
}
