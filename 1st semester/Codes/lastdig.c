/*program to find first and last digits of a
 *given number
 */
#include <stdio.h>
int main()
{
    int n, first, last, i;
    scanf("%d", &n);
    last = n % 10;
    for (i = n; i >= 10; i /= 10)
    {
    }
    first = i;
    printf("First digit: %d\nLast digit: %d\n", first, last);
}
