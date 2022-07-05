/* Write a C program that prints 1 through n in sqaure
 *brackets.
 */

#include <stdio.h>
int main(void)
{
	int i, n;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("[%d]", i);
	}
	return 0;
}

