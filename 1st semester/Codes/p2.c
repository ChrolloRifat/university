/**
 * Enter week number, print week day
 */
#include <stdio.h>
int main()
{
    int num;
    printf("Please enter the number: \n");
    scanf("%d",&num);
    if (num == 1)
    {
        printf("It's Saturday, mate!\n");
    }
    else if (num == 2)
    {
        printf("It's Sunday. Sleep some more\n");
    }
    else if (num == 3)
    {
        printf("It's Monday.\n");
    }
    else if (num == 4)
    {
        printf("It's Tuesday, innit?!\n");
    }
    else if (num == 5)
    {
        printf("It's Wednesday. Wayne's Day!\n");
    }
    else if (num == 6)
    {
        printf("It's Thursday.\n");
    }
    else if (num == 7)
    {
        printf("It's Friday. Jumma Mubarak!\n");
    }
    else{
        printf("Stop assuming that there are more than seven days in a week\n");
    }
}