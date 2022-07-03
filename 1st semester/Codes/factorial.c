/**
 *C program to find factorial of any number
 */
#include <stdio.h>
int main()
{
     int i, n, fact;
     fact = 1;
     printf("n: ");
     scanf("%d", &n);
     for (i = 1; i <= n; i += 1)
     {
          fact = fact * i;
     }
     printf("factorial = %d\n", fact);
     return 0;
}
