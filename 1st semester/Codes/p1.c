/**
 * @file p1.c
 * @author Mahmudul Hasan Rifat (mahumudul.rifat1@northsouth.edu)
 * @brief  C program to check whether an alphabet is uppercase or lowercase
 * @date 2022-06-24
 * @copyright Copyright (c) 2022
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

    return 0;
}