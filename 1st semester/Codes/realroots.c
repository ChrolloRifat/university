#include <stdio.h>
int main()
{
    int a,b,c,result;
    scanf("%d%d%d",&a,&b,&c);
    result = b*b -4*a*c;
    if(result >= 0)
    {
        printf("Real Number\n");

    }

    else
    {
        printf("Imaginary number\n");
    }
    return 0;
}
