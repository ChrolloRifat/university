/*
 *Shows percentage of numbers using if-else conditions
 */

#include <stdio.h>
int main()
{
    char grade;
    printf("What is your grade?\n");
    scanf("%c", &grade);
    if (grade == 'A')
    {
        printf("You got 90-100%% marks\n");
    }
    else if (grade == 'B')
    {
        printf("You got 80-90%% marks\n");
    }
    else if (grade == 'C')
    {
        printf("You got 70-80%% marks\n");
    }
    else if (grade == 'D')
    {
        printf("You got 60-70%% marks\n");
    }
    else if (grade == 'F')
    {
        printf("You got less  than 60%% marks\n");
    }
    else
    {
        printf("Invalid Grade\n");
    }
}