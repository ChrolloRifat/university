#include <stdio.h>
int main()
{
    int i, arr[100];

    for (i = 0; i < 100; i++)
    {
        arr[i] = i * i;
    }
    for (i = 0; i < 100; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}