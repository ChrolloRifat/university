#include <stdio.h>
#include <stdlib.h>
/*
 * calculating the average of score
 */
int main() // starting the program
{
    // declaring variables
    int id, mark1, mark2, mark3, mark4;
    double mark_sum, score;

    // input id
    printf("enter the ID ");
    scanf("%d", &id);

    // enter mark
    printf("enter the mark of 4 subject\n"),
        scanf("%d%d%d%d", &mark1, &mark2, &mark3, &mark4);

    // calculating the sum and percentage
    mark_sum = (double)(mark1 + mark2 + mark3 + mark4);
    score = (mark_sum / 400) * 100;

    // displaying id and the percentage
    printf("ID: %d\n", id);

    printf("percentage score: %2.2f\n", score);

    return 0;
}
