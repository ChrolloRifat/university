
/**
 *C program to check whether a float has a fractional part or not
 */
#include <stdio.h>
#include <math.h>
int main()
{
    float a, check;
    printf("Enter the number: \n");
    scanf("%f", &a);
    check = floor(a);
    if (check == a)
    {
        printf("%.3f is an integer\n", a);
    }
    else
    {
        printf("%.3f is NOT an integer\n", a);
    }
    return 0;
}