/**
 *Uppercase or lowercase letter
 */

#include <stdio.h>
int main()
{
    char letter;
    printf("Please type the letter: \n");
    scanf("%c", &letter);
    if (letter >= 'A' && letter <= 'Z')
    {
        printf("The letter you typed is an uppercase letter\n");
    }
    else if (letter >= 'a' && letter <= 'z')
    {
        printf("The letter you typed is a lowercase letter\n");
    }
    else
    {
        printf("The input isn't alphabet\n");
    }
}