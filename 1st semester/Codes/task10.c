/*Write a program using while loop that first asks the user how many number he/she wants to
 *enter. The program then accepts those many integer numbers from the user as input and
 *calculates their sum.
 */

#include <stdio.h>
int main(void)
{
	int num;
	int sum = 0;
	int howMany;



	printf("How many numbers do you want to add? ");
	scanf("%d", &howMany);
	while (howMany > 0)
	{
		scanf("%d", &num);
		sum += num;
		howMany--;
	}
	printf("Sum = %d\n", sum);

	return 0;
}

