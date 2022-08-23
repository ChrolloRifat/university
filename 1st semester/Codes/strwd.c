/**C program to count total number of words in a string*/
#include <stdio.h>
#define mx 100
int main()
{
    char str[mx];
    int words = 0;
    printf("Enter the string:\n");
    fgets(str, mx, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        // check for special characters and punctuations that indicate the of a word

        if (str[i] == ' ' || str[i] == '/' || (str[i] == '!' && str[i] == ' ') ||
            (str[i] == '?' && str[i] == ' ') || (str[i] == ',' && str[i] == ' ') ||
            (str[i] == '.' && str[i] == ' ') || (str[i] == ':' && str[i] == ' ') ||
            (str[i] == ';' && str[i] == ' ') || str[i] == '\n')
        {
            // if ((str[i - 2] >= 'A' && str[i - 2] <= 'Z') || (str[i - 2] >= 'a' && str[i - 2] <= 'z'))
            //{
            //words++;     //an attempt to get rid of extra space
            // }

            words++;
        }
    }
    printf("Total words = %i\n", words);

    return 0;
}