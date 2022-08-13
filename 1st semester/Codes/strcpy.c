// C program to concatenate two strings

#include <stdio.h>
#define MX 100
int main()
{

    int  i;
    char str[MX], cpy[MX];

    printf("Enter the first string: \n");
    fgets(str, MX, stdin);

    /*Copy one string to another string*/
    for (i = 0; str[i] != '\0'; i++)
    {
        cpy[i] = str[i];
    }
    printf("Source String: %s\n",str);
    printf("Copied String: %s\n", cpy);

    return 0;
}