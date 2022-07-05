/* Write a C program to find sum of all even numbers
 * between 1 to n.
 */


#include <stdio.h>
int main(void)
{
	int i, num, sum = 0;
	printf("Enter an integer: ");
	scanf("%d", &num);

	for(i=0; i<=num; i++)
	{
		if(i%2 == 0)
		{
			sum += i;
		}
	}
	printf("Sum of all even numbers between 1 to %d is %d\n", num, sum);

	return 0;
}

