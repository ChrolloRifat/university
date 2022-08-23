// C program to convert to uppercase letter
#include <stdio.h>
#define mx 100
int main()
{
    char str[mx];
    printf("Enter the string:\n");
    fgets(str, mx, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;   //The caps are 32 digits earlier than the lower case letters
        }
    }
    printf("In upper case: %s", str);

    return 0;
}