// C program to reverse a string

#include <stdio.h>
#define MX 100
int main()
{

    int count = 0, i, j;
    char temp, str[MX];

    printf("Enter the original string: \n");
    fgets(str, MX, stdin);
    printf("The original string: %s", str);

    /* Find the length of the string*/
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("Length = %d\n", count);

    /*Reverse the string*/
    /* Method 1*/

    // for (i = 0, j = count - 1; i < count / 2; i++, j--)
    // {
    //     temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
    // }

    /* Method 2 */
    for (i = 0; i < count / 2; i++)
    {
        temp = str[i];
        str[i] = str[count - 1 - i];
        str[count - 1 - i] = temp;
    }
    printf("Reversed String: %s\n", str);

    return 0;
}