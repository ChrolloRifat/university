#include <stdio.h>

char GenerateGrade(float Quiz, float Mid, float Final, float Assignement)
{
	float total;
	total = (Quiz * 0.2 + Mid * 0.3 + Final * 0.4 + Assignement * 0.1);
	if (total >= 90 )
		return 'A';
	else if (total >= 80)
		return 'B';
	else if(total >= 70)
		return 'C';
	else if(total >= 60)
		return 'D';
	else
		return 'F';
}

int main(void)
{
	float Quiz, Mid, Final, Assignement;
	printf("Enter four values: ");
	scanf("%f %f %f %f", &Quiz, &Mid, &Final, &Assignement);
	char Grade = GenerateGrade(Quiz ,Mid, Final, Assignement);
	printf("%c\n", Grade);
	return 0;
}

