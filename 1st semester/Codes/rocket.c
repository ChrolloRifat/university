#include <stdio.h>
void head(); // prototype of the head fuction
void body(); // prototype of the body fuction
void tail(); // prototype of the tail function
int main()
{
    head();
    body();
    body();
    body();
    tail();
    printf("\nThanks for running the program\n\n");
}

void head()
{
    char sp;
    sp = ' '; // assigns space as the value of the sp character
    printf("\nThe Rocket%c%c\n", sp, sp);
    printf("\n %c^  \n", sp); // one space before %c and two space after %c
    printf("^ %c ^\n", sp);   // one space before and after %c
    printf("^^^^^\n");        // no space, only 5 ^ character
}

void body()
{
    printf(" | |\n"); // one space before and after the first | character
}

void tail()
{
    char sp;
    sp = ' '; // assigns space as the value of the sp character
    printf("%c%c_%c\n", sp, sp, sp);
    printf("/   \\\n");
    printf("|   |\n"); // three spaces in the middle
    printf("- - -\n"); // one space after first two '-' symbols
}