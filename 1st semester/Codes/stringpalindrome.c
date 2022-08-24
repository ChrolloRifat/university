// C program to check whether a string is palindrome or not
#include <stdio.h>
#define MX 100
int main()

{
    char str[MX], reve[MX];
    int flag = 0, count = 0;
    printf("Enter the String: ");
    scanf("%s", str);

    // count the length of the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        count = count + 1;
    }
    printf("Length: %d\n", count);

    // find the reverse of the string
    for (int i = 0; i < count / 2; i++)
    {
        reve[count - 1 - i] = str[i];
    }

    // check if the reverse is same as the original
    for (int i = 0; i < count; i++)
    {
        if (str[i] != reve[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == 0)
    {
        printf("The String is Palindrome\n");
    }
    else
    {
        printf("The String is NOT palindrome\n");
    }
}
