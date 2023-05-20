#include<stdio.h>

int main(void){
    int cost_price;
    int selling_price;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d",&cost_price, &selling_price);
    int profit_or_loss;
    profit_or_loss = selling_price - cost_price;

    if(profit_or_loss>0){
        printf("The user has made a profit of RS %d \n",profit_or_loss);
        return 0;
    }
    if(0>profit_or_loss){
        printf("The user has made a loss of %d \n",profit_or_loss);
        return 0;
    }

    printf("The user has made no profit or loss !\n");

    return 0;

    
}