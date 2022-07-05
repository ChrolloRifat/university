/* Write a C program to print all alphabets and their ASCII values from a to z \
 * and A to Z using two separate loops.
 */

#include <stdio.h>
int main(void)
{
	int i, j;
	for(i='a'; i<='z'; i++)
		printf("ASCII VALUE %d %c\n", i, i);

	printf("\n");

	for(j='A'; j<='Z'; j++)
		printf("ASCII VALUE %d %c\n", j, j);
	return 0;
}

