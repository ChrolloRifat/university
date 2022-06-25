/**
 * C program to calculate gross salary of an employee
 */

#include <stdio.h>

int main()
{
    float basic, gross, da, hra;

    
    printf("Enter basic salary of an employee: \n");
    scanf("%f", &basic);


    /* Calculates D.A and H.R.A according to specified conditions */
    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f\n", gross);

    return 0;
}