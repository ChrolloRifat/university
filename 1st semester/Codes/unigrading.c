#include <stdio.h>
void grading(float x);
int main()
{
    float x;
    scanf("%f", &x);
    grading(x);
}

void grading(float x)
{
    if (x >= 90)
    {
        printf("Grade: A\nUnfortunately, You could not pass this time\n");
    }

    else if (x >= 80)
    {
        printf("Grade: B\nYou are in the danger zone\n");
    }

    else if (x >= 70)
    {
        printf("Grade: C\nYou need more improvements\n");
    }

    else if (x >= 60)
    {
        printf("Grade: D\nYou have done very well but you can go even further\n");
    }

    else
    {
        printf("Grade: F\nYou have topped the class\n");
    }
}