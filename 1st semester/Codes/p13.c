/**
 * C program to find maximum between two numbers
*/
#include <stdio.h>
int main()
{
    int a,b;        //two numbers a,b
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    if (a > b)
    {
        printf("%d is the maximum\n",a);
    }
    else if (b > a)
    {
        printf("%d is the maximum\n",b);
    }
    else
    {
        printf("The numbers are equal\n");
    }
    return 0;
    
}