/**
 *C program to check whether a character is hexadecimal
 */
#include <stdio.h>
int main()
{
    char ch;
    // input the character
    printf("Please enter the character: \n");
    scanf("%c", &ch);
    if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F'))
    {
        printf("%c is a Hexadecimal digit\n", ch);
    }
    else
    {
        printf("%c is not a Hexadecimal digit\n", ch);
    }
    return 0;
}