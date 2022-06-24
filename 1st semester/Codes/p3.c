/**
 * Number of Days in a specific Month
 */
#include <stdio.h>
int main()
{
    int num, month;
    printf("Please Enter the number of the month\n");
    scanf("%d", &num);
    month = num % 2;
    if (month == 1 && num != 11 && num != 9 || num == 8 || num == 10 || num == 12)
    {
        printf("This month has 31 days\n");
    }
    else if (num == 2)
    {
        printf("This month has 28 days\n");
    }
    else if (num == 4 || num == 6 || num == 9 || num == 11)
    {
        printf("This month has 30 days\n");
    }
    else
    {
        printf("Invalid Month\n");
    }

    return 0;
}
