// C program to concatenate two strings

#include <stdio.h>
#define MX 100
int main()
{

    int len1 = 0, len2 = 0, i, j;
    char str1[MX], str2[MX / 2];

    printf("Enter the first string: \n");
    fgets(str1, MX, stdin);
    printf("Enter the second string: \n");
    fgets(str2, MX / 2, stdin);

    /* Find the length of the strings*/
    for (i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }
    printf("Length = %d\n", len1);
    printf("Length = %d\n", len2);

    /*Concatenate the strings*/
    for (i = 0; i <= len2; i++)
    {
        str1[len1 - 1 + i] = str2[i];
    }

    printf("Concatenated String: %s\n", str1);

    return 0;
}