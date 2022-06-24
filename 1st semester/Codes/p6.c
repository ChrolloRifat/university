/**
 * input sides, check whether triangle is valid or not
 */
#include <stdio.h>
int main()
{
    int a, b, c; /*three sides of the triangle*/
    printf("Enter the three sides of the triangle:\n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is invalid\n");
    }

    return 0;
}