/*C program to find if a number is palindrome
 */
#include <stdio.h>
int main()
{
    int n, rev = 0;

    // input the number
    scanf("%d", &n);

    // store the initial value of n
    int temp = n;

    // find the reverse of n
    for (int i = n; i != 0; i /= 10)
    {
        rev = (i % 10) + rev * 10;
    }
    printf("%d\n", rev);

    // check if reverse is the same as n or not
    if (rev == temp)
    {
        printf("%d is palindrome\n", temp);
    }
    else
    {
        printf("%d is not palindrome\n", temp);
    }
}