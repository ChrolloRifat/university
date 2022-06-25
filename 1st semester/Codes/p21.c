/**
 * @file p21.c
 * @author Mahmudul Hasan Rifat (mahumudul.rifat1@northsouth.edu)
 * @brief  C program to check a character is an alphabet, digit, or special character
 * @date 2022-06-24
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z' || (ch >= 'a' && ch <= 'z')))
    {
        printf("%c is an alphabet\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit\n", ch);
    }
    else
    {
        printf("%c is a special character\n", ch);
    }

    return 0;
}