/**
 * C program to enter marks of five subjects and find percentage and grade
 */
#include <stdio.h>
int main()
{
    float phy, chem, bio, math, comp, avg;
    printf("Enter the  marks of five subjects: \n");
    scanf("%f%f%f%f%f", &phy, &chem, &bio, &math, &comp);

    avg = (phy + chem + bio + math + comp) / 5.0;

          printf("Percentage = %.2f\n", avg);

    if (avg >= 90)
    {
        printf("Grade A\n");
    }
    else if (avg >= 80)
    {
        printf("Grade B\n");
    }
    else if (avg >= 70)
    {
        printf("Grade C\n");
    }
    else if (avg >= 60)
    {
        printf("Grade D\n");
    }
    else if (avg >= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Grade F\n");
    }
    return 0;
}