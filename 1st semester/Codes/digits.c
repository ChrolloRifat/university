#include <stdio.h>
int main()
{
    int n, count = 0;
    // input the number
    scanf("%d", &n);
    // store the initial value of n in another variable
    int temp = n;
    for (int i = n; i != 0; i /= 10)
    {
        count++;
    }
    printf("The number of digits in %d is %d\n", temp, count);
}