#include <stdio.h>
int main()
{
    int age, yr, m, d, temp;
    scanf("%d",&age);
    yr = age / 365;
    temp = age % 365;
    m = temp / 30;
    d = temp % 30;
    printf("%d year(s)\n%d month(es)\n%d day(s)\n", yr, m, d);
}