// C program to compare two strings

#include <stdio.h>
#define MX 100
int main()
{

    int flag = 0, i;
    char str1[MX], str2[MX];

    printf("Enter the first string: \n");
    fgets(str1, MX, stdin);
    printf("Enter the second string: \n");
    fgets(str2, MX, stdin);

    /*Compare the strings*/
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The strings are DIFFERENT\n");
    }
    else
    {
        printf("The strings are SAME\n");
    }

    return 0;
}