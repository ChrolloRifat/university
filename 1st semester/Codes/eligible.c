/**
 *C program to check whether a person is eligible to work
 *or not in a company
 */
#include <stdio.h>
int main()
{
    int age;
    //input the user's age
    printf("Please enter your age: \n");
    scanf("%d",&age);
    if (age >= 25 && age <= 45)                 //check if they are eligible
    {
        printf("You are eligible to work in our company\n");
    }
    else if (age < 25)                     //check if they are younger
    {
        printf("Sorry! You are too young to work with us\n");
    }
    else                          //if neither eligible nor younger, then they must be the older
    {
        printf("Sorry! You are too old to work with us\n");
    }
    return 0;


}