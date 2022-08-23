// C program to convert to lowercase letter
#include <stdio.h>
#define mx 100
int main()
{
    char str[mx];
    printf("Enter the string:\n");
    fgets(str, mx, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;   //The lower cases are 32 digits after upper case letters
        }
    }
    printf("In lower case: %s", str);

    return 0;
}