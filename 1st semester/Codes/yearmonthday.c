#include <stdio.h>

int main()
{
    float n,y,m,d;
    scanf("%f",&n);
    y = n/365.0;
    m = y * 12.0;
    d = y * 365.0;
    printf("%.3f years\n%.3f months\n%.3f days\n",y,m,d);

}
