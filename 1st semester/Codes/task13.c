/* Write a program that read a number, N, and will print the
 *numbers between 1 and N that are divisible by the unlucky
 *number 13
 */

#include <stdio.h>
int main(void)
{
	int i, n;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(i%13 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

