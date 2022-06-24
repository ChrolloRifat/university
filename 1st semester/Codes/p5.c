/**
 * input angles, check whether triangle is valid or not
 */
#include <stdio.h>
int main()
{
    int angle1, angle2, angle3, sum;
    printf("Please enter the three angels:\n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("The Triangle is Valid\n");
    }
    else
    {
        printf("The Triangle is Invalid\n");
    }

    return 0;
}