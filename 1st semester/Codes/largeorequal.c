#include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    if (n1 > n2)
    {
        printf("The larger number is %d\n",n1);
    }

    else if (n1 < n2)
    {
        printf("The larger number is %d\n",n2);

    }
    else
    {
        printf("The numbers are equal");
    }
    return 0;

}

