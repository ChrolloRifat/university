/* Write a C program that calculates the factorial of integer n
 *(provided as input)
 */

#include <stdio.h>
int main(void)
{

	int i, n, fact = 1;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		fact = fact*i;
	}
	printf("%d! = %d\n", n, fact);
	return 0;
}

