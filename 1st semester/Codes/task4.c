/* Write a C program to find sum of all natural numbers
 * between 1 to n.
 */

#include <stdio.h>
int main(void)
{
	int i, n, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		sum += i;
	}
	printf("Sum of all natural numbers between 1 to %d is %d.\n", n, sum);
	return 0;
}

