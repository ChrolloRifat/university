// project food shop using structure
#include <stdio.h>
#define mx 200
struct food_shop
{
    char name[100];
    char food[70];
    int amt;
};
int main()
{

    int total = 7, n, i;
    printf("How many customers? ");
    scanf("%d", &n);
    struct food_shop cus[n];
    printf("\t\t\tWELCOME!!!\n");
    printf("We have the  following items in today's menu\n");
    printf("Rice(%d)\tPancake(%d)\tSushi(%d)\tPizza(%d)\n", total, total, total, total);
    for (i = 0; i < n; i++)
    {

        printf("Please place your order: (name, food and amount)\n");
        scanf("%s", cus[i].name);
        scanf("%s", cus[i].food);
        scanf("%d", &cus[i].amt);
    }
    for (i = 0; i < n; i++)
    {
        printf("%s: %d %s\n", cus[i].name, cus[i].amt, cus[i].food);
    }

    return 0;
}
