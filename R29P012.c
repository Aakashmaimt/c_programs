//Program to find profit or loss 
//Author Aakash  Date October 21,2020
#include<stdio.h>

int main()
{
    int cost_price,selling_price,loss,profit;
    printf("Enter the cost price :");
    scanf("%d",&cost_price);
    printf("Enter the selling price :");
    scanf("%d",&selling_price);

    if(cost_price < selling_price)
    {
        profit=selling_price-cost_price;
        printf("Profit is of %d rs.",profit);
    }
    else if(cost_price > selling_price)
    {
        loss=cost_price-selling_price;
        printf("Loss is of %d rs.",loss);
    }
    else
    {
        printf("No profit no loss.");
    }

    return 0;
}