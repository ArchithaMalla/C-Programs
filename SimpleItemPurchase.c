#include<stdio.h>
main()
{
	int quantity;
	float price,total_cost;
	printf("enter the quantity of items:");
	scanf("%d",&quantity);
	printf("enter the price for item:");
	scanf("%f",&price);
	total_cost=quantity*price;
	printf("total cost for %d items at $%.3f each is $%.3f",quantity,price,total_cost);
}
