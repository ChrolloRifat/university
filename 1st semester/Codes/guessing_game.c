/*
 *Making a guessing game
 */

#include <stdio.h>
void game(int);

int main()
{
    int x;
    printf("Guess the number: \n");
    scanf("%d", &x); // taking the guessed number from user
    game(x);
    return 0;
}

void game(int x)
{
    int y = 96; // stored number
    if (x == y)
    {
        printf("Congratulations! You have won the game\n");
    }
    else if (x > y)
    {
        printf("Wrong guess! Too High!\n");
    }
    else if (x < y)
    {
        printf("Wrong guess! Too Low!\n");
    }
}