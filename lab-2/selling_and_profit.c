#include<stdio.h>

int main(void){
	int selling_price,total_profit, for_=15;

	printf("Enter Total Selling Price followed by Total Profit: ");
	scanf("%d %d",&selling_price, &total_profit);

	int total_cost_price;
	total_cost_price = selling_price - total_profit;

	int cost_price_of_one;
	cost_price_of_one = total_cost_price/for_;
	printf("Cost Price of One Item is %d\n",cost_price_of_one);
}