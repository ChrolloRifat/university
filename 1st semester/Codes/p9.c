/**
 *A C program to calculate profit and loss
*/
#include <stdio.h>
int main(){
    float cp,sp,profit,loss;
    printf("Please enter the cost price: \n");
    scanf("%f",&cp);
    printf("Please enter the selling price: \n");
    scanf("%f",&sp);
    if (sp > cp)
    {
        profit = sp - cp;
        printf("Profit = %.3f\n",profit);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        printf("Loss = %.3f\n",loss);
    }   
    else
    {
        printf("No profit, no loss\n");
    }
    return 0;
}