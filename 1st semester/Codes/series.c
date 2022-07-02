#include <stdio.h>

int main()
{
    int count = 1, x = 0;
    float sum = 0;

    while (count <= 5)
    {
        if (x % 2 == 1)
        {
            sum -= (1.0 / count);
            x++;
            count += 2;
        }
        else
        {
            sum += (1.0 / count);
            x++;
            count += 2;
        }
    }
    printf("sum = %.3f\n", sum);
}