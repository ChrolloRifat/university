/* C program to check if two numbers are multiple or not*/
#include <stdio.h>
int main()
{
    int a, b;
    // input the number
    scanf("%d%d", &a, &b);
    if (a % b == 0 || b % a == 0)
    {
        printf("Multiples\n");
    }
    else
    {
        printf("Not multiples\n");
    }
    return 0;
}
