#include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    if (n1 % 5 == 0)
    {
        if(n1 % 2 == 0)
        {
            printf("The number is divisible by 5 and even\n");
        }
        else
        {
            printf("The number is divisible by 5 and odd\n");


        }
    }


    else
    {
        printf("The number is NOT divisible by 5\n");
    }
    return 0;

}


