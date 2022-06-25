/**
 * C program to check whether character is vowel or consonant
 */

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is a VOWEL\n", ch);
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("%c is a CONSONANT\n", ch);
    }
    else
    {
        printf("%c is not an alphabet\n", ch);
    }

    return 0;
}