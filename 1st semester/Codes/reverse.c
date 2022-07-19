/*C program to find the reverse of a given number
 */
#include <stdio.h>
int main()
{
    int n, rev;
    // input the number
    scanf("%d", &n);
    for (int i = n; i != 0; i /= 10)
    {
        rev = i % 10;
        printf("%d", rev);
    }
    printf("\n");
}