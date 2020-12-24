//Program to calculate the order process
//Author Aakash Date 11 Nov 2020
#include<stdio.h>

int main(){
    int stock,order_quantity,balance_left;
    char credit;
    printf("Enter the number of stocks which are available :");
    scanf("%d",&stock);
    printf("Enter the number of order quantity :");
    scanf("%d",&order_quantity);
    fflush(stdin);
    printf("Credit is ok. yes or no :");
    scanf("%c",&credit);

    if(order_quantity <= stock && credit == 'y'){
        printf("Your order has been placed and it will deliver to you soon.");
    }
    else if(credit == 'n'){
        printf("Your credit is not done or may be in pending status.Please check it.\n");
        printf("Sorry for the inconvinence");
    }
    else if(order_quantity >= stock && credit =='y'){
        printf("We have %d quantity of the product.",stock);
        balance_left = order_quantity-stock;
        printf("Your extra money which is %d quantity will be delivered with in 2-3 bussiness days",balance_left);
    }
    
    return 0;
}