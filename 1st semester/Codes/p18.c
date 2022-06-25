/**
 * C program to check Leap Year
 */

#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year : ");
    scanf("%d", &year);

    /*
     * If year is exactly divisible by 4  and year is not divisible by 100
     * or year is exactly divisible by 400 and 100 then the year is leap year.
     */
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) && (year % 100 == 0))
    {
        printf("LEAP YEAR\n");
    }
    else
    {
        printf("NOT A LEAP YEAR\n");
    }

    return 0;
}