/**
 *C program to find the minimum among three numbers
 */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && a < c)                 //check if a is the minimum
    {
        printf("%d is the the minimum\n", a);
    }
    else if (b < c)                     //check if b is the minimum
    {
        printf("%d is the minimum\n", b);
    }
    else                          //if neither a nor b is the minimum, then c must be the minimum
    {
        printf("%d is the minimum\n", c);
    }
    return 0;


}