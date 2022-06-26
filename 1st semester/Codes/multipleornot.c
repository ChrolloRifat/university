/**
 *C program to check whether a number is multiple of 2 or 5
 *but not multiple of both
 */
#include <stdio.h>
int main()
{
    int num;
    // input the number
    printf("Please enter the number: \n");
    scanf("%d", &num);
    if (num % 2 == 0 && num % 5 == 0)
    {
        printf("%d is multiple of both 2 and 5\n", num);
    }
    else if (num % 2 == 0 || num % 5 == 0)
    {
        printf("%d is either multiple of 2 or 5\n", num);
    }
    else
    {
        printf("%d is not multiple of 2 or 5\n", num);
    }
    return 0;
}