/**
 * C program to convert binary number system to decimal number system
 */

#include <stdio.h>
#include <math.h>

#define BASE 2

int main()
{
    int binary, decimal = 0, tempBinary;
    int N = 0;

    printf("Enter any binary number: ");
    scanf("%d", &binary);

    tempBinary = binary;

    while (tempBinary != 0)
    {
        /* If current binary digit is 1 */
        if (tempBinary % 10 == 1)
        {
            decimal += pow(BASE, N);
        }

        N++;
        tempBinary /= 10;
    }

    printf("Binary number = %d\n", binary);
    printf("Decimal number= %d\n", decimal);

    return 0;
}