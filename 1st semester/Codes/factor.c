#include <stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n;i++)
    {

        if(n % i== 1)
        {
            printf("%d is NOT a factor\n",i);
        }
        else
        {
            printf("%d is a factor\n",i);
        }
    }

}
