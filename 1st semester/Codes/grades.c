/*
 *Shows grades using switch-case
 */

#include <stdio.h>
int main()
{
    int marks, g;
    printf("What is your obtained marks?\n");
    scanf("%d", &marks);
    g = marks / 10;

    switch (g)
    {
    case 10:
    case 9:
        printf("You got an A\n");
        break;
    case 8:
        printf("You got a B\n");
        break;
    case 7:
        printf("You got a C\n");
        break;
    case 6:
        printf("You got a D\n");
        break;
    case 5:
        printf("You got a F and failed the exam.\n");
        break;
    default:
        printf("No worries\n");
    }
}