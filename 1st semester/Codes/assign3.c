/**
 * C program to take minimum, maximum number, and common
 * difference and to print the sum of the arithmatic
 * series between them
 */
#include <stdio.h>
int main()
{
    int min, count, max, dif, sum = 0;
    printf("Minimum number: ");
    scanf("%d", &min);
    printf("Maximum number: ");
    scanf("%d", &max);
    printf("Difference: ");
    scanf("%d", &dif);
    printf("Sum = ");
    for (count = min; count <= max; count = count + dif)
    {
        sum = sum + count;
        printf("%d + ", count);
    }
    printf("= %d \n", sum);

    return 0;
}