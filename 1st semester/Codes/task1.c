/* Write a C program to print all natural numbers
 * from 1 to n.
 */

#include <stdio.h>
int main(void)
{
	int i, n = 0;
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}

