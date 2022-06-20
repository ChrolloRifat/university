#include <stdio.h>
int main()
{
    int n,unit,tenth,hun,tho,sum;
    scanf("%d",&n);
    unit = n % 10;      /*unit digit*/
    n = n/10;
    tenth = n %10;   /*tenth digit*/
    n = n/10;
    hun = n % 10;   /*hundredth digit*/
    n = n/10;
    tho = n % 10;   /*thousandth digit*/
    n = n/10;
    sum = n + unit + tenth + hun + tho;
    printf("The sum is = %d\n",sum);
}
