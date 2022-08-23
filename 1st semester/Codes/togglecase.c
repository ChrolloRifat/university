/**C program to toggle case of each character of a string*/
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
            str[i] = str[i] - 32; // The caps are 32 digits earlier than the lower case letters
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // The lower cases are 32 digits after the upper case letters
        }
    }
    printf("Toggled Case: %s", str);

    return 0;
}