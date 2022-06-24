/**
 * C program to count minimum number of notes in an amount
 */

#include <stdio.h>

int main()
{
    int amt;
    int notes1000, notes500, notes100, notes50, notes20, notes10, notes5, notes2;

    /* Assigning the  initial number of notes to 0 */
    notes1000 = notes500 = notes100 = notes50 = notes20 = notes10 = notes5 = notes2 = 0;

    /* Input amount from the user */
    printf("Please enter the amount: ");
    scanf("%d", &amt);

    if (amt >= 1000)
    {
        notes1000 = amt / 1000;
        amt = amt - (notes1000 * 1000);
    }
    else if (amt >= 500)
    {
        notes500 = amt / 500;
        amt = amt - (notes500 * 500);
    }
    else if (amt >= 100)
    {
        notes100 = amt / 100;
        amt = amt - (notes100 * 100);
    }
    else if (amt >= 50)
    {
        notes50 = amt / 50;
        amt = amt - (notes50 * 50);
    }
    else if (amt >= 20)
    {
        notes20 = amt / 20;
        amt = amt - (notes20 * 20);
    }
    else if (amt >= 10)
    {
        notes10 = amt / 10;
        amt = amt - (notes10 * 10);
    }
    else if (amt >= 5)
    {
        notes5 = amt / 5;
        amt = amt - (notes5 * 5);
    }
    else if (amt >= 2)
    {
        notes2 = amt;
    }
    else
    {
        printf("Invalid amount\n");
    }

    printf("\nAmount of BDT1000 notes = %d\n", notes1000);
    printf("Amount of BDT500 notes = %d\n", notes500);
    printf("Amount of BDT100 notes = %d\n", notes100);
    printf("Amount of BDT50 notes = %d\n", notes50);
    printf("Amount of BDT20 notes = %d\n", notes20);
    printf("Amount of BDT10 notes = %d\n", notes10);
    printf("Amount of BDT5 notes = %d\n", notes5);
    printf("Amount of BDT2 notes = %d\n", notes2);
    return 0;
}