/**
 * C program to check whether a character is an alphabet
 */

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z' || (ch >= 'a' && ch <= 'z')))
    {
        printf("%c is an alphabet\n", ch);
    }
    else
    {
        printf("%c is not an alphabet\n", ch);
    }

    return 0;
}
