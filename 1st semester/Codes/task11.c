/* Write a program using for loop which prints summation of the following series:
 * 1/1^1 + 1/2^2 + 1/3^2 + 1/4^2 + ... + 1/n^2 where the integer n will be input
 * to your program.
 */

#include <stdio.h>
int main(void)
{
	int i, n = 1;
	float sum = 0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		sum += 1.0/(i*i);   // float value is being divided by a integer value which produces a float value
	}
	printf("%0.3f\n", sum);
	return 0;
}

