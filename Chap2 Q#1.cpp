/*Chapter # 2
Question No 1: 
If cost price and selling price of an item is input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit 
he made or loss he incurred.*/

#include<stdio.h>
int main()
{
	float cost_p,sel_p,profit;
	
	printf("\nEnter The Cost Price of Item: ");
	scanf("%f",&cost_p);
	printf("\nEnter The Sell Price of Item: ");
	scanf("%f",&sel_p);
	
	profit=sel_p-cost_p;
	if(profit>0)
	printf("\nThe Profit is = %.2f",profit);
	
	else if(profit<0)
	printf("\nThe loss is = %.2f",profit);
	
	else
	printf("\nNo loss and No Profit:");
}
